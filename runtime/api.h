#ifndef SNOWBALL_API_H_INCLUDED
#define SNOWBALL_API_H_INCLUDED

#ifdef SNOWBALL_WIDE
# ifndef __cplusplus
/* wchar_t is a built-in type in C++, but not in C. */
#  include <stddef.h>
# endif
typedef wchar_t symbol;
// Use a different typename - for C++ this then means that the runtime helper
// functions that depend on sizeof(symbol) will be distinct thanks to overloading
// on kronuz_snowball_SN_env and/or symbol.
# define kronuz_snowball_SN_env SN_env_w
#else
typedef unsigned char symbol;
#endif

struct kronuz_snowball_SN_env {
    symbol * p;
    int c; int l; int lb; int bra; int ket;
    int af;
};

#ifdef __cplusplus
extern "C" {
#endif

extern struct kronuz_snowball_SN_env * kronuz_snowball_SN_new_env(int alloc_size);
extern void kronuz_snowball_SN_delete_env(struct kronuz_snowball_SN_env * z);

extern int kronuz_snowball_SN_set_current(struct kronuz_snowball_SN_env * z, int size, const symbol * s);

#ifdef __cplusplus
}
#endif

#endif
