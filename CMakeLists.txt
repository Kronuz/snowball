cmake_minimum_required(VERSION 3.14)
project(snowball LANGUAGES C CXX)

file(GLOB SNOWBALL_GENERATED CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.c")
add_library(snowball snowball.cc runtime/api.c runtime/snowball_runtime.c ${SNOWBALL_GENERATED})
target_include_directories(snowball PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_compile_features(snowball PUBLIC cxx_std_20)
set_target_properties(snowball PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_library(snowball::snowball ALIAS snowball)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  enable_testing()
  add_executable(snowball_test test/test.cc)
  target_link_libraries(snowball_test PRIVATE snowball)
  add_test(NAME snowball COMMAND snowball_test "${CMAKE_CURRENT_SOURCE_DIR}/test/vectors")
  add_executable(snowball_stem tools/stem.cc)
  target_link_libraries(snowball_stem PRIVATE snowball)
endif()

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  add_executable(snowball_bench bench/bench.cc)
  target_link_libraries(snowball_bench PRIVATE snowball)
  # Upstream libstemmer as the comparator: fetches Snowball at the commit this library pins
  # (tools/SNOWBALL_COMMIT) and builds libstemmer.a with its own makefile (GNU make and Perl).
  # Only snowball_bench uses it, and the library never links it.
  option(SNOWBALL_BENCH_LIBSTEMMER "Also time upstream libstemmer in snowball_bench" OFF)
  if(SNOWBALL_BENCH_LIBSTEMMER)
    include(FetchContent)
    file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/tools/SNOWBALL_COMMIT" SNOWBALL_PINNED_COMMIT LIMIT_COUNT 1)
    FetchContent_Declare(
      snowball_upstream
      GIT_REPOSITORY https://github.com/snowballstem/snowball.git
      GIT_TAG        ${SNOWBALL_PINNED_COMMIT}
      SOURCE_SUBDIR  none  # no CMakeLists.txt there: populate only
    )
    FetchContent_MakeAvailable(snowball_upstream)
    set(SNOWBALL_UPSTREAM_LIB "${snowball_upstream_SOURCE_DIR}/libstemmer.a")
    add_custom_command(
      OUTPUT "${SNOWBALL_UPSTREAM_LIB}"
      COMMAND make -C "${snowball_upstream_SOURCE_DIR}" libstemmer.a "CC=${CMAKE_C_COMPILER}" "CFLAGS=-O3 -DNDEBUG"
      COMMENT "Building upstream libstemmer"
      VERBATIM)
    add_custom_target(libstemmer_upstream DEPENDS "${SNOWBALL_UPSTREAM_LIB}")
    add_dependencies(snowball_bench libstemmer_upstream)
    target_include_directories(snowball_bench PRIVATE "${snowball_upstream_SOURCE_DIR}/include")
    target_link_libraries(snowball_bench PRIVATE "${SNOWBALL_UPSTREAM_LIB}")
    target_compile_definitions(snowball_bench PRIVATE SNOWBALL_BENCH_LIBSTEMMER)
  endif()
  option(SNOWBALL_FUZZ "Build the libFuzzer target" OFF)
  if(SNOWBALL_FUZZ)
    add_executable(snowball_fuzz fuzz/fuzz_stem.cc)
    target_link_libraries(snowball_fuzz PRIVATE snowball)
    target_compile_options(snowball PRIVATE -fsanitize=fuzzer-no-link,address,undefined)
    target_compile_options(snowball_fuzz PRIVATE -fsanitize=fuzzer,address,undefined -fno-sanitize-recover=all)
    target_link_options(snowball_fuzz PRIVATE -fsanitize=fuzzer,address,undefined)
  endif()
endif()
