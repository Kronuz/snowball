/* Generated from yiddish.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_yiddish.h"

#include <stddef.h>

#include "../runtime/snowball_runtime.h"

#ifdef SNOWBALL_BIGENDIAN
#define S(W) ((0x##W & 0xff) << 8 | 0x##W >> 8)
#else
#define S(W) (0x##W)
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern int kronuz_snowball_yiddish_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static const symbol s_0[] = { 0xD6, 0xBC };
static const symbol s_1[] = { 0xD7, 0xB0 };
static const symbol s_2[] = { 0xD6, 0xB4 };
static const symbol s_3[] = { 0xD7, 0xB1 };
static const symbol s_4[] = { 0xD6, 0xB4 };
static const symbol s_5[] = { 0xD7, 0xB2 };
static const symbol s_6[] = { 0xD7, 0x9B };
static const symbol s_7[] = { 0xD7, 0x9E };
static const symbol s_8[] = { 0xD7, 0xA0 };
static const symbol s_9[] = { 0xD7, 0xA4 };
static const symbol s_10[] = { 0xD7, 0xA6 };
static const symbol s_11[] = { 0xD7, 0x92, 0xD7, 0xA2 };
static const symbol s_12[] = { 0xD7, 0x9C, 0xD7, 0x98 };
static const symbol s_13[] = { 0xD7, 0x91, 0xD7, 0xA0 };
static const symbol s_14[] = { 'G', 'E' };
static const symbol s_15[] = { 0xD7, 0xA6, 0xD7, 0x95, 0xD7, 0x92, 0xD7, 0xA0 };
static const symbol s_16[] = { 0xD7, 0xA6, 0xD7, 0x95, 0xD7, 0xA7, 0xD7, 0x98 };
static const symbol s_17[] = { 0xD7, 0xA6, 0xD7, 0x95, 0xD7, 0xA7, 0xD7, 0xA0 };
static const symbol s_18[] = { 0xD7, 0x92, 0xD7, 0xA2, 0xD7, 0x91, 0xD7, 0xA0 };
static const symbol s_19[] = { 0xD7, 0x92, 0xD7, 0xA2 };
static const symbol s_20[] = { 'G', 'E' };
static const symbol s_21[] = { 0xD7, 0xA6, 0xD7, 0x95 };
static const symbol s_22[] = { 'T', 'S', 'U' };
static const symbol s_23[] = { 0xD7, 0x99, 0xD7, 0xA2 };
static const symbol s_24[] = { 0xD7, 0x92, 0xD7, 0xB2 };
static const symbol s_25[] = { 0xD7, 0xA0, 0xD7, 0xA2, 0xD7, 0x9E };
static const symbol s_26[] = { 0xD7, 0x9E, 0xD7, 0xB2, 0xD7, 0x93 };
static const symbol s_27[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0x98 };
static const symbol s_28[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_29[] = { 0xD7, 0xB0, 0xD7, 0xB2, 0xD7, 0x96 };
static const symbol s_30[] = { 0xD7, 0x98, 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_31[] = { 0xD7, 0x9C, 0xD7, 0xB2, 0xD7, 0x98 };
static const symbol s_32[] = { 0xD7, 0xA7, 0xD7, 0x9C, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_33[] = { 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_34[] = { 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_35[] = { 0xD7, 0xA9, 0xD7, 0xB0, 0xD7, 0xB2, 0xD7, 0x92 };
static const symbol s_36[] = { 0xD7, 0xA9, 0xD7, 0x9E, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_37[] = { 0xD7, 0xA9, 0xD7, 0xA0, 0xD7, 0xB2, 0xD7, 0x93 };
static const symbol s_38[] = { 0xD7, 0xA9, 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_39[] = { 0xD7, 0x91, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x93 };
static const symbol s_40[] = { 0xD7, 0xB0, 0xD7, 0x99, 0xD7, 0x98, 0xD7, 0xA9 };
static const symbol s_41[] = { 0xD7, 0x96, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_42[] = { 0xD7, 0x98, 0xD7, 0xA8, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0xA7 };
static const symbol s_43[] = { 0xD7, 0xA6, 0xD7, 0xB0, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_44[] = { 0xD7, 0xA9, 0xD7, 0x9C, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_45[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0x92 };
static const symbol s_46[] = { 0xD7, 0x94, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_47[] = { 0xD7, 0xA4, 0xD7, 0x90, 0xD7, 0xA8, 0xD7, 0x9C, 0xD7, 0x99, 0xD7, 0xA8 };
static const symbol s_48[] = { 0xD7, 0xA9, 0xD7, 0x98, 0xD7, 0xB2 };
static const symbol s_49[] = { 0xD7, 0xA9, 0xD7, 0xB0, 0xD7, 0xA2, 0xD7, 0xA8 };
static const symbol s_50[] = { 0xD7, 0x98 };
static const symbol s_51[] = { 0xD7, 0x91, 0xD7, 0xA8, 0xD7, 0x90, 0xD7, 0x9B };
static const symbol s_52[] = { 0xD7, 0x92, 0xD7, 0xA2 };
static const symbol s_53[] = { 0xD7, 0x91, 0xD7, 0xA8, 0xD7, 0xA2, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_54[] = { 0xD7, 0x92, 0xD7, 0xB2 };
static const symbol s_55[] = { 0xD7, 0xA0, 0xD7, 0xA2, 0xD7, 0x9E };
static const symbol s_56[] = { 0xD7, 0xA9, 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_57[] = { 0xD7, 0x9E, 0xD7, 0xB2, 0xD7, 0x93 };
static const symbol s_58[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0x98 };
static const symbol s_59[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_60[] = { 0xD7, 0xB0, 0xD7, 0xB2, 0xD7, 0x96 };
static const symbol s_61[] = { 0xD7, 0x98, 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_62[] = { 0xD7, 0x9C, 0xD7, 0xB2, 0xD7, 0x98 };
static const symbol s_63[] = { 0xD7, 0xA7, 0xD7, 0x9C, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_64[] = { 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_65[] = { 0xD7, 0xA8, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_66[] = { 0xD7, 0xA9, 0xD7, 0xB0, 0xD7, 0xB2, 0xD7, 0x92 };
static const symbol s_67[] = { 0xD7, 0xA9, 0xD7, 0x9E, 0xD7, 0xB2, 0xD7, 0xA1 };
static const symbol s_68[] = { 0xD7, 0xA9, 0xD7, 0xA0, 0xD7, 0xB2, 0xD7, 0x93 };
static const symbol s_69[] = { 0xD7, 0x91, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x93 };
static const symbol s_70[] = { 0xD7, 0xB0, 0xD7, 0x99, 0xD7, 0x98, 0xD7, 0xA9 };
static const symbol s_71[] = { 0xD7, 0x96, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_72[] = { 0xD7, 0x98, 0xD7, 0xA8, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0xA7 };
static const symbol s_73[] = { 0xD7, 0xA6, 0xD7, 0xB0, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_74[] = { 0xD7, 0xA9, 0xD7, 0x9C, 0xD7, 0x99, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_75[] = { 0xD7, 0x91, 0xD7, 0xB2, 0xD7, 0x92 };
static const symbol s_76[] = { 0xD7, 0x94, 0xD7, 0xB2, 0xD7, 0x91 };
static const symbol s_77[] = { 0xD7, 0xA4, 0xD7, 0x90, 0xD7, 0xA8, 0xD7, 0x9C, 0xD7, 0x99, 0xD7, 0xA8 };
static const symbol s_78[] = { 0xD7, 0xA9, 0xD7, 0x98, 0xD7, 0xB2 };
static const symbol s_79[] = { 0xD7, 0xA9, 0xD7, 0xB0, 0xD7, 0xA2, 0xD7, 0xA8 };
static const symbol s_80[] = { 0xD7, 0x91, 0xD7, 0xA8, 0xD7, 0xA2, 0xD7, 0xA0, 0xD7, 0x92 };
static const symbol s_81[] = { 0xD7, 0x94 };
static const symbol s_82[] = { 0xD7, 0x92 };
static const symbol s_83[] = { 0xD7, 0xA9 };
static const symbol s_84[] = { 0xD7, 0x99, 0xD7, 0xA1 };
static const symbol s_85[] = { 'G', 'E' };
static const symbol s_86[] = { 'T', 'S', 'U' };

static const unsigned short a_0[] = {
    0x0000 , 0xD7D7 , 0x0003 , 0x0000 , 0xA595 , 0x0016 , 0x0000 , 0x0000 ,
    0x0000 , 0x001D , 0xFFFC , 0x0000 , 0x0000 , 0xFFFB , 0x0000 , 0xFFFA ,
    0x0000 , 0x0000 , 0x0000 , 0xFFF9 , 0x0000 , 0xFFF8 , 0x0000 , 0xD7D7 ,
    0x0019 , 0x0000 , 0x9599 , 0xFFFF , 0xFFFE , 0x0000 , 0x0002 , 0xFFFD ,
    S(99D7)
};

static const unsigned short a_1[] = {
    0x0000 , 0xD7D7 , 0x0003 , 0x0000 , 0xA690 , 0x001C , 0x00E6 , 0x0000 ,
    0x00ED , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00F9 , 0x0000 , 0x00FE , 0x0000 , 0x0000 ,
    0x0000 , 0x0103 , 0x0000 , 0x0126 , 0x0000 , 0xD7D7 , 0x001F , 0x0000 ,
    0xB293 , 0x0041 , 0x0047 , 0x0072 , 0x0000 , 0x0000 , 0x0000 , 0x007F ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0085 , 0x0000 ,
    0x0000 , 0x0000 , 0x0099 , 0x0000 , 0x0000 , 0x009E , 0x00A4 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00DE , 0x00E3 ,
    0x0066 , 0x0000 , 0x0006 , 0xFFFF , S(95D7), S(A8D7), S(9BD7), 0x0000 ,
    0xD7D7 , 0x004A , 0x0000 , 0xB299 , 0x0066 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006A , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006E , 0x0000 , 0x0002 ,
    0xFFFF , S(A0D7), 0x0000 , 0x0002 , 0xFFFF , S(A8D7), 0x0000 , 0x0002 ,
    0xFFFF , S(9ED7), 0x0000 , 0xD7D7 , 0x0075 , 0x0000 , 0x9EA0 , 0xFFFF ,
    0x0079 , 0x0000 , 0x0006 , 0xFFFF , S(98D7), S(A2D7), S(A8D7), 0x0000 ,
    0x0006 , 0xFFFF , S(91D7), S(A2D7), S(A8D7), 0x0001 , 0xD7D7 , 0x0088 ,
    0x0000 , 0x9899 , 0x008C , 0x0093 , 0x0001 , 0x0008 , 0xFFFF , S(A7D7),
    S(A2D7), S(92D7), S(A0D7), 0x0000 , 0x0006 , 0xFFFF , S(93D7), S(A2D7),
    S(A8D7), 0x0001 , 0x0004 , 0xFFFF , S(99D7), S(A8D7), 0x0000 , 0x0006 ,
    0xFFFF , S(A2D7), S(92D7), S(A0D7), 0x0000 , 0xD7D7 , 0x00A7 , 0x0000 ,
    0xB290 , 0x00CC , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D0 , 0x0000 ,
    0x0000 , 0x0000 , 0x007F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00D7 , 0x0066 , 0x0000 , 0x0002 , 0xFFFF , S(A4D7),
    0x0000 , 0xD7D7 , 0x00D3 , 0x0000 , 0x9EA0 , 0xFFFF , 0x0079 , 0x0000 ,
    0xD7D7 , 0x00DA , S(0000), S(A1A4), S(FFFF), 0xFFFF , 0x0000 , 0x0004 ,
    0xFFFF , S(A2D7), S(A7D7), 0x0000 , 0xD7D7 , 0x00DA , 0x0000 , 0xD7D7 ,
    0x00E9 , S(0000), 0x90B2 , 0xFFFF , 0xFFFF , 0x0000 , 0xD7D7 , 0x00F0 ,
    0x0000 , 0x95A2 , 0x00F4 , 0x006A , 0x0000 , 0x0004 , 0xFFFF , S(A8D7),
    S(9BD7), 0x0000 , 0x0004 , 0xFFFF , S(99D7), S(98D7), 0x0000 , 0x0004 ,
    0xFFFF , S(90D7), S(9BD7), 0x0000 , 0xD7D7 , 0x0106 , 0x0000 , 0x9095 ,
    0x010A , 0x011D , 0x0000 , 0x0002 , 0x010E , S(A8D7), 0x0001 , 0xD7D7 ,
    0x0111 , 0x0000 , 0x91B1 , 0x0115 , 0x0119 , 0x0000 , 0x0002 , 0xFFFF ,
    S(B2D7), 0x0000 , 0x0002 , 0xFFFF , S(A1D7), 0x0000 , 0x000C , 0xFFFF ,
    S(A0D7), S(90D7), S(A0D7), S(93D7), S(A2D7), S(A8D7), 0x0000 , 0xD7D7 ,
    0x0129 , 0x0000 , 0x95A2 , 0x012D , 0xFFFF , 0x0001 , 0xD7D7 , 0x0130 ,
    0x0000 , 0xA896 , 0x0145 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x014C , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0151 , 0x0000 , 0x0008 , 0xFFFF ,
    S(90D7), S(9ED7), S(A2D7), S(A0D7), 0x0000 , 0x0004 , 0xFFFF , S(B1D7),
    S(A4D7), 0x0000 , 0x0004 , 0xFFFF , S(99D7), S(A7D7)
};

static const unsigned short a_2[] = {
    0x0000 , 0xD7D7 , 0x0003 , 0x0000 , 0x93A9 , 0x0007 , 0x000C , 0x0000 ,
    0x0004 , 0xC001 , S(96D7), S(A9D7), 0x0000 , 0xD7D7 , 0x000F , 0x0000 ,
    0x98A4 , 0x0013 , 0x001A , 0x0000 , 0xD7D7 , 0x0016 , 0x0000 , 0xA8A9 ,
    0xC001 , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(A8D7)
};

static const unsigned short a_3[] = {
    0x0000 , 0xA991 , 0x001B , 0x0040 , 0x00A2 , 0x0000 , 0x0000 , 0x00A9 ,
    0x0000 , 0x00AF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D4 ,
    0x0000 , 0x00DA , 0x00E1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x010B , 0x0113 , 0x0128 , 0x0000 , 0xD7D7 , 0x001E , 0x0000 , 0x99B1 ,
    0x0022 , 0x003B , 0x0000 , 0xD7D7 , 0x0025 , 0x0000 , 0x9CA8 , 0x0029 ,
    0x002E , 0x0000 , 0x0003 , 0xFFF7 , S(A7D7), S(00D7), 0x0000 , 0xD7D7 ,
    0x0031 , 0x000A , 0x98A9 , 0x0035 , 0x0038 , 0x0000 , 0xD7D7 , 0xFFF9 ,
    0x0000 , 0xD7D7 , 0xFFF1 , 0x0000 , 0x0003 , 0xFFE9 , S(94D7), S(00D7),
    0x0000 , 0xD7D7 , 0x0043 , 0x0000 , 0xB199 , 0x005E , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0064 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x009D , 0x0000 , 0x0005 ,
    0xFFF4 , S(A9D7), S(B0D7), S(00D7), 0x0000 , 0xD7D7 , 0x0067 , 0x0000 ,
    0x9095 , 0x006B , 0x0070 , 0x0000 , 0x0003 , 0xFFFF , S(92D7), S(00D7),
    0x0000 , 0xD7D7 , 0x0073 , 0x0000 , 0xB096 , 0x0090 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0093 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0098 ,
    0x0000 , 0xD7D7 , 0xFFEE , 0x0000 , 0x0003 , 0xFFEB , S(A9D7), S(00D7),
    0x0000 , 0x0003 , 0xFFEC , S(A6D7), S(00D7), 0x0000 , 0x0003 , 0xFFEA ,
    S(91D7), S(00D7), 0x0000 , 0x0007 , 0xFFF0 , S(91D7), S(95D7), S(A0D7),
    S(00D7), 0x0000 , 0x0005 , 0xFFFA , S(B0D7), S(99D7), S(00D7), 0x0000 ,
    0x0003 , 0x00B4 , S(99D7), S(00D7), 0x0000 , 0xA091 , 0x00C6 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x00C9 , 0x0000 , 0x00CC , 0x0000 , 0x00CF , 0x0000 , 0xD7D7 ,
    0xFFFC , 0x0000 , 0xD7D7 , 0xFFF8 , 0x0000 , 0xD7D7 , 0xFFFD , 0x0000 ,
    0x0003 , 0xFFF2 , S(A9D7), S(00D7), 0x0000 , 0x0005 , 0xFFFE , S(A0D7),
    S(95D7), S(00D7), 0x0000 , 0x0007 , 0xFFE7 , S(A9D7), S(98D7), S(90D7),
    S(00D7), 0x0000 , 0x0003 , 0x00E6 , S(99D7), S(00D7), 0x0000 , 0xA891 ,
    0x0100 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0103 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0108 ,
    0x0000 , 0xD7D7 , 0xFFFB , 0x0000 , 0x0003 , 0xFFF3 , S(A9D7), S(00D7),
    0x0000 , 0xD7D7 , 0xFFF5 , 0x0000 , 0x0009 , 0xFFED , S(98D7), S(A8D7),
    S(95D7), S(A0D7), S(00D7), 0x0000 , 0x0003 , 0x0118 , S(B1D7), S(00D7),
    0x0000 , 0x9CB0 , 0x011C , 0x0123 , 0x0000 , 0x0007 , 0xFFE8 , S(A4D7),
    S(90D7), S(A8D7), S(00D7), 0x0000 , 0x0003 , 0xFFE6 , S(A9D7), S(00D7),
    0x0000 , 0x0007 , 0xFFEF , S(B0D7), S(95D7), S(98D7), S(00D7)
};

static const unsigned short a_4[] = {
    0x0000 , 0xAA92 , 0x001B , 0x0000 , 0x0000 , 0x0021 , 0x0000 , 0x0000 ,
    0x0027 , 0x0000 , 0x0000 , 0x0069 , 0x0000 , 0x0000 , 0x0073 , 0x0000 ,
    0x0096 , 0x020C , 0x024A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0267 , 0x0000 , 0x0273 , 0x0000 , 0x0005 , 0xFFFF , S(95D7), S(A0D7),
    S(00D7), 0x0000 , 0x0005 , 0xFFFF , S(A1D7), S(98D7), S(00D7), 0x0000 ,
    0xD7D7 , 0x002A , 0x0001 , 0xB29B , 0x0044 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x004B , 0x0052 , 0x0000 , 0x0055 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x005B , 0x0000 , 0x0007 , 0xFFE1 , S(91D7),
    S(A8D7), S(90D7), S(00D7), 0x0000 , 0xD7D7 , 0x004E , 0x0001 , 0x0002 ,
    0xFFDF , S(99D7), 0x0000 , 0xD7D7 , 0xFFFF , 0x0000 , 0x0005 , 0xFFFF ,
    S(A9D7), S(90D7), S(00D7), 0x0000 , 0xD7D7 , 0x005E , 0x0000 , 0x94A7 ,
    0x0052 , 0x0062 , 0x0000 , 0xD7D7 , 0x0065 , 0x0001 , 0x0002 , 0xFFFF ,
    S(99D7), 0x0000 , 0x0005 , 0x006F , S(9CD7), S(A2D7), S(00D7), 0x0001 ,
    0x0002 , 0xFFFF , S(A2D7), 0x0000 , 0xD7D7 , 0x0076 , 0x0000 , 0xA296 ,
    0x0085 , 0x0000 , 0x0000 , 0x0052 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x008A , 0x0000 , 0x0003 , 0xFFFF ,
    S(99D7), S(00D7), 0x0000 , 0xD7D7 , 0x008D , 0x0001 , 0x0004 , 0x0092 ,
    S(A2D7), S(A0D7), 0x0003 , 0x0002 , 0xFFFC , S(98D7), 0x0000 , 0xD7D7 ,
    0x0099 , 0x0001 , 0xB291 , 0x00BD , 0x00E2 , 0x013A , 0x0000 , 0x0000 ,
    0x0141 , 0x0000 , 0x0147 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0182 , 0x01B0 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x01E3 , 0x01EB , 0x0200 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0207 , 0x0000 , 0xD7D7 , 0x00C0 ,
    0x0000 , 0x99B1 , 0x00C4 , 0x00DD , 0x0000 , 0xD7D7 , 0x00C7 , 0x0000 ,
    0x9CA8 , 0x00CB , 0x00D0 , 0x0000 , 0x0003 , 0xFFF2 , S(A7D7), S(00D7),
    0x0000 , 0xD7D7 , 0x00D3 , 0x000F , 0x98A9 , 0x00D7 , 0x00DA , 0x0000 ,
    0xD7D7 , 0xFFF4 , 0x0000 , 0xD7D7 , 0xFFF9 , 0x0000 , 0x0003 , 0xFFE5 ,
    S(94D7), S(00D7), 0x0000 , 0xD7D7 , 0x00E5 , 0x0000 , 0xB199 , 0x0100 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0106 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0135 ,
    0x0000 , 0x0005 , 0xFFEF , S(A9D7), S(B0D7), S(00D7), 0x0000 , 0x0003 ,
    0x010B , S(95D7), S(00D7), 0x0000 , 0xB096 , 0x0128 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x012B , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0130 ,
    0x0000 , 0xD7D7 , 0xFFEA , 0x0000 , 0x0003 , 0xFFE7 , S(A9D7), S(00D7),
    0x0000 , 0x0003 , 0xFFE8 , S(A6D7), S(00D7), 0x0000 , 0x0003 , 0xFFE6 ,
    S(91D7), S(00D7), 0x0000 , 0x0007 , 0xFFEC , S(91D7), S(95D7), S(A0D7),
    S(00D7), 0x0000 , 0x0005 , 0xFFF5 , S(B0D7), S(99D7), S(00D7), 0x0000 ,
    0xD7D7 , 0x014A , 0x0004 , 0xA299 , 0x0156 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x017F , 0x0052 , 0x0000 , 0xD7D7 ,
    0x0159 , 0x0000 , 0xA091 , 0x016B , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0170 , 0x0000 ,
    0x0175 , 0x0000 , 0x017A , 0x0000 , 0x0003 , 0xFFF7 , S(4547), S(00D7),
    0x0000 , 0x0003 , 0xFFF3 , S(4547), S(00D7), 0x0000 , 0x0003 , 0xFFF8 ,
    S(4547), S(00D7), 0x0000 , 0x0003 , 0xFFED , S(A9D7), S(00D7), 0x0000 ,
    0xD7D7 , 0x0065 , 0x0000 , 0x0003 , 0x0187 , S(99D7), S(00D7), 0x0000 ,
    0xA891 , 0x01A1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01A6 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x01AB , 0x0000 , 0x0003 , 0xFFF6 , S(4547), S(00D7), 0x0000 , 0x0003 ,
    0xFFEE , S(A9D7), S(00D7), 0x0000 , 0x0003 , 0xFFF0 , S(4547), S(00D7),
    0x0000 , 0xD7D7 , 0x01B3 , 0x0001 , 0xA092 , 0x01C4 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01CB ,
    0x0000 , 0x01D0 , 0x0000 , 0x01DC , 0x0000 , 0x0007 , 0xFFFB , S(92D7),
    S(90D7), S(A0D7), S(00D7), 0x0000 , 0x0003 , 0xFFFF , S(A2D7), S(00D7),
    0x0000 , 0xD7D7 , 0x01D3 , 0x0000 , 0x9596 , 0x01D7 , 0x0085 , 0x0000 ,
    0x0003 , 0xFFFA , S(A0D7), S(00D7), 0x0000 , 0x0007 , 0xFFE3 , S(A9D7),
    S(98D7), S(90D7), S(00D7), 0x0000 , 0x0009 , 0xFFE9 , S(98D7), S(A8D7),
    S(95D7), S(A0D7), S(00D7), 0x0000 , 0x0003 , 0x01F0 , S(B1D7), S(00D7),
    0x0000 , 0x9CB0 , 0x01F4 , 0x01FB , 0x0000 , 0x0007 , 0xFFE4 , S(A4D7),
    S(90D7), S(A8D7), S(00D7), 0x0000 , 0x0003 , 0xFFE2 , S(A9D7), S(00D7),
    0x0000 , 0x0007 , 0xFFEB , S(B0D7), S(95D7), S(98D7), S(00D7), 0x0000 ,
    0x0003 , 0xFFFB , S(92D7), S(00D7), 0x0000 , 0xD7D7 , 0x020F , 0x0001 ,
    0xA898 , 0x0222 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0229 , 0x0000 , 0x0236 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0240 , 0x0000 , 0xD7D7 , 0x0225 , 0x0004 , 0x0002 , 0xFFFF ,
    S(A2D7), 0x0000 , 0xD7D7 , 0x022C , 0x0001 , 0x98A2 , 0x0230 , 0x0233 ,
    0x0000 , 0xD7D7 , 0xFFFC , 0x0000 , 0xD7D7 , 0xFFFD , 0x0000 , 0xD7D7 ,
    0x0239 , 0x0001 , 0x999C , 0x023D , 0x01CB , 0x0000 , 0xD7D7 , 0xFFFE ,
    0x0000 , 0x0003 , 0x0245 , S(A2D7), S(00D7), 0x0001 , 0x0004 , 0xFFFF ,
    S(A2D7), S(A0D7), 0x0000 , 0xD7D7 , 0x024D , 0x0001 , 0xA098 , 0x0258 ,
    0x025F , 0x0000 , 0x0000 , 0x01CB , 0x0000 , 0x0000 , 0x0000 , 0x0262 ,
    0x0000 , 0xD7D7 , 0x025B , 0x0004 , 0xA1A2 , 0x0052 , 0x0052 , 0x0000 ,
    0xD7D7 , 0xC001 , 0x0000 , 0x0003 , 0x0092 , S(A2D7), S(00D7), 0x0000 ,
    0x0003 , 0x026C , S(A2D7), S(00D7), 0x0001 , 0x98A0 , 0x0270 , 0x0262 ,
    0x0000 , 0xD7D7 , 0x025B , 0x0000 , 0x0003 , 0xFFE0 , S(95D7), S(00D7)
};

static const unsigned short a_5[] = {
    0x0000 , 0x9C92 , 0x000D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0013 , 0x0000 , 0x0000 , 0x0000 , 0x0031 , 0x0000 , 0x0005 , 0xFFFF ,
    S(95D7), S(A0D7), S(00D7), 0x0000 , 0xD7D7 , 0x0016 , 0x0000 , 0xA4B2 ,
    0x001A , 0x0020 , 0x0000 , 0x0005 , 0xFFFF , S(A9D7), S(90D7), S(00D7),
    0x0000 , 0xD7D7 , 0x0023 , 0x0000 , 0x94A7 , 0x0027 , 0x002A , 0x0000 ,
    0xD7D7 , 0xFFFF , 0x0000 , 0xD7D7 , 0x002D , 0x0001 , 0x0002 , 0xFFFF ,
    S(99D7), 0x0000 , 0xD7D7 , 0xFFFE
};

static const unsigned short a_6[] = {
    0x0000 , 0xA992 , 0x001A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x001F ,
    0x0000 , 0x001A , 0x0000 , 0x0003 , 0xFFFF , S(99D7), S(00D7), 0x0000 ,
    0x0003 , 0x0024 , S(99D7), S(00D7), 0x0001 , 0xA093 , 0x0034 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x003F ,
    0x0000 , 0x0000 , 0x0000 , 0x0049 , 0x0000 , 0xD7D7 , 0x0037 , 0x0001 ,
    0x0002 , 0x003B , S(A0D7), 0x0001 , 0x0002 , 0xFFFF , S(A2D7), 0x0000 ,
    0xD7D7 , 0x0042 , 0x0000 , 0x9192 , 0x0046 , 0x0046 , 0x0000 , 0xD7D7 ,
    0xC001 , 0x0000 , 0xD7D7 , 0xFFFF
};

static const unsigned char g_niked[] = { 255, 155, 6 };

static const unsigned char g_vowel[] = { 33, 2, 4, 0, 6 };

static const unsigned char g_consonant[] = { 239, 254, 253, 131 };

extern int kronuz_snowball_yiddish_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_x;
    int i_p1;
    {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            while (1) {
                int v_3 = z->c;
                z->bra = z->c;
                among_var = kronuz_snowball_find_among(z, a_0);
                if (!among_var) goto lab3;
                z->ket = z->c;
                switch (among_var) {
                    case 1:
                        if (!(kronuz_snowball_eq_s(z, 2, s_0))) goto lab4;
                        goto lab3;
                    lab4:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_1);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        if (!(kronuz_snowball_eq_s(z, 2, s_2))) goto lab5;
                        goto lab3;
                    lab5:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_3);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        if (!(kronuz_snowball_eq_s(z, 2, s_4))) goto lab6;
                        goto lab3;
                    lab6:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_5);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_6);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 5:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_7);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 6:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_8);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 7:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_9);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 8:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_10);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                z->c = v_3;
                break;
            lab3:
                z->c = v_3;
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab2;
                    z->c = ret;
                }
            }
            continue;
        lab2:
            z->c = v_2;
            break;
        }
        z->c = v_1;
    }
    {
        int v_4 = z->c;
        while (1) {
            int v_5 = z->c;
            while (1) {
                int v_6 = z->c;
                z->bra = z->c;
                if (kronuz_snowball_in_grouping_U(z, g_niked, 1456, 1474, 0)) goto lab9;
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                z->c = v_6;
                break;
            lab9:
                z->c = v_6;
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab8;
                    z->c = ret;
                }
            }
            continue;
        lab8:
            z->c = v_5;
            break;
        }
        z->c = v_4;
    }
    {
        int v_7 = z->c;
        i_p1 = z->l;
        {
            int v_8 = z->c;
            z->bra = z->c;
            if (!(kronuz_snowball_eq_s(z, 4, s_11))) { z->c = v_8; goto lab11; }
            z->ket = z->c;
            {
                int v_9 = z->c;
                do {
                    if (!(kronuz_snowball_eq_s(z, 4, s_12))) goto lab13;
                    break;
                lab13:
                    if (!(kronuz_snowball_eq_s(z, 4, s_13))) goto lab14;
                    break;
                lab14:
                    if (z->c < z->l) goto lab12;
                } while (0);
                { z->c = v_8; goto lab11; }
            lab12:
                z->c = v_9;
            }
            {
                int ret = kronuz_snowball_slice_from_s(z, 2, s_14);
                if (ret < 0) return ret;
            }
        lab11:
            ;
        }
        {
            int v_10 = z->c;
            if (!kronuz_snowball_find_among(z, a_1)) { z->c = v_10; goto lab15; }
            do {
                int v_11 = z->c;
                {
                    int v_12 = z->c;
                    do {
                        if (!(kronuz_snowball_eq_s(z, 8, s_15))) goto lab17;
                        break;
                    lab17:
                        if (!(kronuz_snowball_eq_s(z, 8, s_16))) goto lab18;
                        break;
                    lab18:
                        if (!(kronuz_snowball_eq_s(z, 8, s_17))) goto lab16;
                    } while (0);
                    if (z->c < z->l) goto lab16;
                    z->c = v_12;
                }
                break;
            lab16:
                z->c = v_11;
                {
                    int v_13 = z->c;
                    if (!(kronuz_snowball_eq_s(z, 8, s_18))) goto lab19;
                    z->c = v_13;
                }
                break;
            lab19:
                z->c = v_11;
                z->bra = z->c;
                if (!(kronuz_snowball_eq_s(z, 4, s_19))) goto lab20;
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_20);
                    if (ret < 0) return ret;
                }
                break;
            lab20:
                z->c = v_11;
                z->bra = z->c;
                if (!(kronuz_snowball_eq_s(z, 4, s_21))) { z->c = v_10; goto lab15; }
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_22);
                    if (ret < 0) return ret;
                }
            } while (0);
        lab15:
            ;
        }
        {
            int v_14 = z->c;
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
                if (ret < 0) goto lab10;
                z->c = ret;
            }
            i_x = z->c;
            z->c = v_14;
        }
        {
            int v_15 = z->c;
            if (z->c + 5 >= z->l || (z->p[z->c + 5] != 169 && z->p[z->c + 5] != 168)) { z->c = v_15; goto lab21; }
            if (!kronuz_snowball_find_among(z, a_2)) { z->c = v_15; goto lab21; }
        lab21:
            ;
        }
        {
            int v_16 = z->c;
            if (kronuz_snowball_in_grouping_U(z, g_consonant, 1489, 1520, 0)) goto lab22;
            if (kronuz_snowball_in_grouping_U(z, g_consonant, 1489, 1520, 0)) goto lab22;
            if (kronuz_snowball_in_grouping_U(z, g_consonant, 1489, 1520, 0)) goto lab22;
            i_p1 = z->c;
            goto lab10;
        lab22:
            z->c = v_16;
        }
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_vowel, 1488, 1522, 1);
            if (ret < 0) goto lab10;
            z->c += ret;
        }
        if (kronuz_snowball_in_grouping_U(z, g_vowel, 1488, 1522, 1) < 0) goto lab10;
        i_p1 = z->c;
        if (i_p1 >= i_x) goto lab23;
        i_p1 = i_x;
    lab23:
    lab10:
        z->c = v_7;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_17 = z->l - z->c;
        z->ket = z->c;
        among_var = kronuz_snowball_find_among_b(z, a_4);
        if (!among_var) goto lab25;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (i_p1 > z->c) goto lab25;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                if (i_p1 > z->c) goto lab25;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_23);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                if (i_p1 > z->c) goto lab25;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                z->ket = z->c;
                among_var = kronuz_snowball_find_among_b(z, a_3);
                if (!among_var) goto lab25;
                z->bra = z->c;
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 4, s_24);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_25);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_26);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_27);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 5:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_28);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 6:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_29);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 7:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_30);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 8:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_31);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 9:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_32);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 10:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_33);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 11:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_34);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 12:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_35);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 13:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_36);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 14:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_37);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 15:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_38);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 16:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_39);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 17:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_40);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 18:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_41);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 19:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 10, s_42);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 20:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 10, s_43);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 21:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 10, s_44);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 22:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_45);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 23:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_46);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 24:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 12, s_47);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 25:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 6, s_48);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 26:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 8, s_49);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                break;
            case 4:
                do {
                    int v_18 = z->l - z->c;
                    if (i_p1 > z->c) goto lab26;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                lab26:
                    z->c = z->l - v_18;
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_50);
                        if (ret < 0) return ret;
                    }
                } while (0);
                z->ket = z->c;
                if (!(kronuz_snowball_eq_s_b(z, 8, s_51))) goto lab25;
                {
                    int v_19 = z->l - z->c;
                    if (!(kronuz_snowball_eq_s_b(z, 4, s_52))) { z->c = z->l - v_19; goto lab27; }
                lab27:
                    ;
                }
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 10, s_53);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_54);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_55);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_56);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_57);
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_58);
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_59);
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_60);
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_61);
                    if (ret < 0) return ret;
                }
                break;
            case 13:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_62);
                    if (ret < 0) return ret;
                }
                break;
            case 14:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_63);
                    if (ret < 0) return ret;
                }
                break;
            case 15:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_64);
                    if (ret < 0) return ret;
                }
                break;
            case 16:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_65);
                    if (ret < 0) return ret;
                }
                break;
            case 17:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_66);
                    if (ret < 0) return ret;
                }
                break;
            case 18:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_67);
                    if (ret < 0) return ret;
                }
                break;
            case 19:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_68);
                    if (ret < 0) return ret;
                }
                break;
            case 20:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_69);
                    if (ret < 0) return ret;
                }
                break;
            case 21:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_70);
                    if (ret < 0) return ret;
                }
                break;
            case 22:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_71);
                    if (ret < 0) return ret;
                }
                break;
            case 23:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 10, s_72);
                    if (ret < 0) return ret;
                }
                break;
            case 24:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 10, s_73);
                    if (ret < 0) return ret;
                }
                break;
            case 25:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 10, s_74);
                    if (ret < 0) return ret;
                }
                break;
            case 26:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_75);
                    if (ret < 0) return ret;
                }
                break;
            case 27:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_76);
                    if (ret < 0) return ret;
                }
                break;
            case 28:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 12, s_77);
                    if (ret < 0) return ret;
                }
                break;
            case 29:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_78);
                    if (ret < 0) return ret;
                }
                break;
            case 30:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 8, s_79);
                    if (ret < 0) return ret;
                }
                break;
            case 31:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 10, s_80);
                    if (ret < 0) return ret;
                }
                break;
            case 32:
                if (i_p1 > z->c) goto lab25;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_81);
                    if (ret < 0) return ret;
                }
                break;
            case 33:
                do {
                    int v_20 = z->l - z->c;
                    do {
                        if (!(kronuz_snowball_eq_s_b(z, 2, s_82))) goto lab29;
                        break;
                    lab29:
                        if (!(kronuz_snowball_eq_s_b(z, 2, s_83))) goto lab28;
                    } while (0);
                    {
                        int v_21 = z->l - z->c;
                        if (i_p1 > (z->c + 6)) { z->c = z->l - v_21; goto lab30; }
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 4, s_84);
                            if (ret < 0) return ret;
                        }
                    lab30:
                        ;
                    }
                    break;
                lab28:
                    z->c = z->l - v_20;
                    if (i_p1 > z->c) goto lab25;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                } while (0);
                break;
        }
    lab25:
        z->c = z->l - v_17;
    }
    {
        int v_22 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 4 || !((285474816 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab31;
        among_var = kronuz_snowball_find_among_b(z, a_5);
        if (!among_var) goto lab31;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (i_p1 > z->c) goto lab31;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                if (i_p1 > z->c) goto lab31;
                if (kronuz_snowball_in_grouping_b_U(z, g_consonant, 1489, 1520, 0)) goto lab31;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab31:
        z->c = z->l - v_22;
    }
    {
        int v_23 = z->l - z->c;
        z->ket = z->c;
        among_var = kronuz_snowball_find_among_b(z, a_6);
        if (!among_var) goto lab32;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (i_p1 > z->c) goto lab32;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab32:
        z->c = z->l - v_23;
    }
    {
        int v_24 = z->l - z->c;
        while (1) {
            int v_25 = z->l - z->c;
            while (1) {
                int v_26 = z->l - z->c;
                z->ket = z->c;
                do {
                    if (!(kronuz_snowball_eq_s_b(z, 2, s_85))) goto lab36;
                    break;
                lab36:
                    if (!(kronuz_snowball_eq_s_b(z, 3, s_86))) goto lab35;
                } while (0);
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                z->c = z->l - v_26;
                break;
            lab35:
                z->c = z->l - v_26;
                {
                    int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                    if (ret < 0) goto lab34;
                    z->c = ret;
                }
            }
            continue;
        lab34:
            z->c = z->l - v_25;
            break;
        }
        z->c = z->l - v_24;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_yiddish_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
