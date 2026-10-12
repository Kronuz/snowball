/* Generated from persian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_persian.h"

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
extern int kronuz_snowball_persian_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static const symbol s_0[] = { 0xDA, 0xA9 };
static const symbol s_1[] = { 0xDB, 0x8C };
static const symbol s_2[] = { 0xD9, 0x87 };
static const symbol s_3[] = { 0xD8, 0xA7 };
static const symbol s_4[] = { 0xD9, 0x88 };
static const symbol s_5[] = { 0xE2, 0x80, 0x8C };
static const symbol s_6[] = { 0xD8, 0xAE, 0xD8, 0xA8, 0xD8, 0xB1 };
static const symbol s_7[] = { 0xD8, 0xA7, 0xD8, 0xB3, 0xD8, 0xAA, 0xD8, 0xA7, 0xD8, 0xAF };
static const symbol s_8[] = { 0xD8, 0xB1, 0xD9, 0x81, 0xD8, 0xAA };
static const symbol s_9[] = { 0xD8, 0xAF };
static const symbol s_10[] = { 0xD8, 0xAA };

static const unsigned short a_0[] = {
    0x0007 , 0xE220 , 0xFFFA , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00C5 , 0x00CE , 0x0000 , 0x00D2 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D5 , 0x0000 , 0xA9A3 , 0xFFFC ,
    0xFFFB , 0xFFFC , 0xFFFE , 0x0000 , 0x0000 , 0xFFFD , 0x0000 , 0x838A ,
    0xFFFF , 0xFFFE , 0x0000 , 0x8181 , 0xFFFD , 0x0000 , 0x0002 , 0xFFFA ,
    S(8D80)
};

static const unsigned short a_1[] = {
    0x0000 , 0xD9D9 , 0x0003 , 0x0000 , 0x8586 , 0x0007 , 0x000D , 0x0000 ,
    0x0005 , 0xFFFE , S(8CDB), S(80E2), S(008C), 0x0000 , 0x0007 , 0xFFFF ,
    S(85D9), S(8CDB), S(80E2), S(008C)
};

static const unsigned short a_2[] = {
    0x0000 , 0x0004 , 0x0005 , S(A7D8), S(86D9), 0x0000 , 0xB388 , 0x0033 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0036 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x003B , 0x0000 , 0x003B , 0x0000 , 0xD9D9 , 0xC001 , 0x0000 , 0x0003 ,
    0xC001 , S(B3D8), S(00D8), 0x0000 , 0xD8D8 , 0xC001
};

static const unsigned short a_3[] = {
    0x0000 , 0x0004 , 0x0005 , S(A7D8), S(86D9), 0x0000 , 0xB784 , 0x003B ,
    0x0041 , 0x0120 , 0x0131 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0138 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0152 , 0x0000 , 0x0000 , 0x0158 ,
    0x0000 , 0x0000 , 0x0162 , 0x0000 , 0x0000 , 0x0175 , 0x0000 , 0x017B ,
    0x0000 , 0x0000 , 0x01C8 , 0x0000 , 0x0005 , 0xFFFF , S(AFDA), S(8CDB),
    S(00D9), 0x0000 , 0xD9D9 , 0x0044 , 0x0000 , 0xB384 , 0x0076 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0085 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00CD , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00D4 , 0x010A , 0x011B , 0x0000 , 0xD9D9 ,
    0x0079 , 0x0000 , 0xA2B3 , 0x007D , 0x0080 , 0x0000 , 0xD8D8 , 0xFFFF ,
    0x0000 , 0x0003 , 0xFFFF , S(85D9), S(00D8), 0x0000 , 0xDBDB , 0x0088 ,
    0x0000 , 0xBE84 , 0x00C5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x007D , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00CA , 0x0000 , 0x0003 , 0xFFFF ,
    S(B3D8), S(00D9), 0x0000 , 0xD9D9 , 0xFFFF , 0x0000 , 0x0007 , 0xFFFF ,
    S(B3D8), S(A7D8), S(AED8), S(00D8), 0x0000 , 0xD8D8 , 0x00D7 , 0x0001 ,
    0xAF87 , 0x0102 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0107 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x007D , 0x0000 , 0x0003 , 0xFFFF , S(82D9), S(00D9), 0x0000 ,
    0xDADA , 0xFFFF , 0x0000 , 0xD8D8 , 0x010D , 0x0000 , 0x85A7 , 0x0111 ,
    0x0116 , 0x0000 , 0x0003 , 0xFFFF , S(87D9), S(00D9), 0x0000 , 0x0003 ,
    0xFFFF , S(B3D8), S(00D8), 0x0000 , 0x0003 , 0xFFFF , S(A2D8), S(00D8),
    0x0000 , 0xD9D9 , 0x0123 , 0x0000 , 0x88A8 , 0x0127 , 0x012C , 0x0000 ,
    0x0003 , 0xFFFF , S(8CDB), S(00D9), 0x0000 , 0x0003 , 0xFFFF , S(84D9),
    S(00D8), 0x0000 , 0x0007 , 0xFFFF , S(A7D8), S(B5D8), S(81D9), S(00D9),
    0x0000 , 0xDBDB , 0x013B , 0x0000 , 0xB1A7 , 0x0148 , 0x007D , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x014D ,
    0x0000 , 0x0003 , 0xFFFF , S(BED9), S(00D8), 0x0000 , 0x0003 , 0xFFFF ,
    S(ACD8), S(00D8), 0x0000 , 0x0005 , 0xFFFF , S(A7D8), S(85D9), S(00DA),
    0x0000 , 0x000D , 0xFFFF , S(A2D8), S(B0D8), S(B1D8), S(A8D8), S(A7D8),
    S(8CDB), S(00D8), 0x0000 , 0xD8D8 , 0x0165 , 0x0000 , 0x8586 , 0x0111 ,
    0x0169 , 0x0000 , 0xD9D9 , 0x016C , S(0000), S(A7B2), 0x0170 , 0x007D ,
    0x0000 , 0x0003 , 0xFFFF , S(AED8), S(00D8), 0x0000 , 0x0005 , 0xFFFF ,
    S(85D9), S(8CDB), S(00D8), 0x0000 , 0xD8D8 , 0x017E , 0x0000 , 0xAE81 ,
    0x01AE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00CA , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x01B5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x01BC , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01C2 , 0x0000 , 0x0007 ,
    0xFFFF , S(A2D8), S(AAD8), S(B4D8), S(00D9), 0x0000 , 0xDBDB , 0x01B8 ,
    0x0000 , 0xA7B1 , 0x007D , 0x0148 , 0x0000 , 0x0005 , 0xFFFF , S(A9DA),
    S(87D9), S(00DA), 0x0000 , 0x0005 , 0xFFFF , S(AFD8), S(B1D8), S(00D8),
    0x0000 , 0x0005 , 0xFFFF , S(B3D8), S(84D9), S(00D8)
};

static const unsigned short a_4[] = {
    0x0000 , 0xAFB1 , 0x0004 , 0x000D , 0x0000 , 0x000B , 0xFFFE , S(A7D8),
    S(B3D8), S(A7D8), S(AAD8), S(8CDB), S(00D8), 0x0000 , 0x0009 , 0xFFFF ,
    S(A7D8), S(AED8), S(A8D8), S(A7D8), S(00D8)
};

static const unsigned short a_5[] = {
    0x0000 , 0xB485 , 0x0032 , 0x0037 , 0x0078 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0084 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B3 , 0x0000 , 0x00B8 , 0x00BE ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00C5 , 0x0000 , 0x00CB , 0x0000 ,
    0x0000 , 0x00DF , 0x0000 , 0x0003 , 0xFFFF , S(A7D8), S(00D9), 0x0000 ,
    0xD9D9 , 0x003A , 0x0000 , 0x8CA7 , 0x003E , 0x0046 , 0x0000 , 0xDBDB ,
    0x0041 , 0x0001 , 0x0004 , 0xFFFF , S(AAD8), S(B1D8), 0x0000 , 0xD8D8 ,
    0x0049 , 0x0001 , 0xAF8C , 0x006F , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0072 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0075 , 0x0000 ,
    0xDBDB , 0xFFFF , 0x0000 , 0xD8D8 , 0xFFFF , 0x0000 , 0xDADA , 0xFFFF ,
    0x0000 , 0xD9D9 , 0x007B , 0x0000 , 0x86A7 , 0x0032 , 0x007F , 0x0000 ,
    0x0003 , 0xFFFF , S(AFDA), S(00D8), 0x0000 , 0xDBDB , 0x0087 , 0x0000 ,
    0xAF86 , 0x0032 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006F ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00B3 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0075 , 0x0000 , 0x0003 , 0xFFFF , S(87D9), S(00D8),
    0x0000 , 0x0005 , 0xFFFF , S(86D9), S(A7D8), S(00DA), 0x0000 , 0xD8D8 ,
    0x00C1 , 0x0000 , 0x8CA7 , 0x006F , 0x0072 , 0x0000 , 0x0005 , 0xFFFF ,
    S(85D9), S(86D9), S(00D8), 0x0000 , 0xD8D8 , 0x00CE , 0x0000 , 0xA7AA ,
    0x00D2 , 0x00DC , 0x0000 , 0xD8D8 , 0x00D5 , 0x0000 , 0x88AF , 0x00D9 ,
    0x0075 , 0x0000 , 0xD9D9 , 0xFFFF , 0x0000 , 0xD8D8 , 0xFFFE , 0x0000 ,
    0x0003 , 0xFFFF , S(A7D8), S(00D8)
};

static const unsigned short a_6[] = {
    0x0000 , 0xB385 , 0x0031 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x003A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x003F ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0045 , 0x0000 , 0x0000 , 0x0000 ,
    0x0054 , 0x0000 , 0x0003 , 0x0036 , S(8CDB), S(00D9), 0x0001 , 0x0002 ,
    0xFFFF , S(A7D8), 0x0000 , 0x0003 , 0xFFFF , S(A7D8), S(00DB), 0x0000 ,
    0x0005 , 0xFFFF , S(A7D8), S(B3D8), S(00D8), 0x0000 , 0xD8D8 , 0x0048 ,
    0x0000 , 0x868C , 0x004C , 0x0051 , 0x0000 , 0x0003 , 0xFFFF , S(A7D8),
    S(00D9), 0x0000 , 0xDBDB , 0x0036 , 0x0000 , 0x0003 , 0xFFFF , S(A7D8),
    S(00D8)
};

static const unsigned short a_7[] = {
    0x0000 , 0xAF85 , 0x002D , 0x0063 , 0x0068 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0079 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0080 , 0x0000 , 0xD9D9 , 0x0030 ,
    0x0001 , 0xAA8C , 0x0051 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x005A , 0x0000 , 0x0000 ,
    0x005D , 0x0000 , 0xDBDB , 0x0054 , 0x0001 , 0x0006 , 0xFFFE , S(B1D8),
    S(81D9), S(AAD8), 0x0000 , 0xD8D8 , 0xFFFF , 0x0000 , 0x0005 , 0xFFFE ,
    S(B1D8), S(81D9), S(00D8), 0x0000 , 0x0003 , 0xFFFD , S(A7D8), S(00D9),
    0x0000 , 0xD9D9 , 0x006B , 0x0000 , 0xAAAF , 0x006F , 0x0072 , 0x0000 ,
    0xD8D8 , 0xFFFB , 0x0000 , 0xD8D8 , 0x0075 , 0x0004 , 0x0002 , 0xFFFD ,
    S(86D9), 0x0000 , 0x0007 , 0xFFFE , S(B1D8), S(81D9), S(AAD8), S(00DB),
    0x0000 , 0xD8D8 , 0x0083 , 0x0001 , 0x868C , 0x0087 , 0x008C , 0x0000 ,
    0x0003 , 0x0054 , S(A7D8), S(00D9), 0x0000 , 0xDBDB , 0x0054
};

extern int kronuz_snowball_persian_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_p1;
    int b_remove_verb_person_endings;
    int b_saw_present_prefix;
    b_saw_present_prefix = 0;
    {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            z->bra = z->c;
            among_var = kronuz_snowball_find_among(z, a_0);
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_0);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_1);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_2);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_3);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_4);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 7:
                    {
                        int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                        if (ret < 0) goto lab1;
                        z->c = ret;
                    }
                    break;
            }
            continue;
        lab1:
            z->c = v_2;
            break;
        }
        z->c = v_1;
    }
    {
        int v_3 = z->c;
        z->bra = z->c;
        if (z->c + 6 >= z->l || (z->p[z->c + 6] != 140 && z->p[z->c + 6] != 226)) goto lab2;
        among_var = kronuz_snowball_find_among(z, a_1);
        if (!among_var) goto lab2;
        z->ket = z->c;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 2);
                    if (ret < 0) goto lab2;
                    z->c = ret;
                }
                b_saw_present_prefix = 1;
                break;
            case 2:
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 2);
                    if (ret < 0) goto lab2;
                    z->c = ret;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                b_saw_present_prefix = 1;
                break;
        }
    lab2:
        z->c = v_3;
    }
    {
        int v_4 = z->c;
        while (1) {
            int v_5 = z->c;
            while (1) {
                int v_6 = z->c;
                z->bra = z->c;
                if (!(kronuz_snowball_eq_s(z, 3, s_5))) goto lab5;
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                z->c = v_6;
                break;
            lab5:
                z->c = v_6;
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab4;
                    z->c = ret;
                }
            }
            continue;
        lab4:
            z->c = v_5;
            break;
        }
        z->c = v_4;
    }
    i_p1 = z->l;
    {
        int v_7 = z->c;
        {
            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
            if (ret < 0) goto lab6;
            z->c = ret;
        }
        i_p1 = z->c;
    lab6:
        z->c = v_7;
    }
    z->lb = z->c; z->c = z->l;
    while (1) {
        int v_8 = z->l - z->c;
        {
            int v_9 = z->l - z->c;
            b_remove_verb_person_endings = 0;
            if (!b_saw_present_prefix) goto lab8;
            b_remove_verb_person_endings = 1;
        lab8:
            {
                int v_10 = z->l - z->c;
                if (z->c - 7 <= z->lb || z->p[z->c - 1] != 134) goto lab9;
                if (!kronuz_snowball_find_among_b(z, a_3)) goto lab9;
                if (z->c > z->lb) goto lab9;
                goto lab7;
            lab9:
                z->c = z->l - v_10;
            }
            {
                int v_11 = z->l - z->c;
                if (z->c - 5 <= z->lb || z->p[z->c - 1] != 134) goto lab10;
                if (!kronuz_snowball_find_among_b(z, a_2)) goto lab10;
                goto lab7;
            lab10:
                z->c = z->l - v_11;
            }
            do {
                int v_12 = z->l - z->c;
                do {
                    int v_13 = z->l - z->c;
                    z->ket = z->c;
                    if (z->c - 9 <= z->lb || (z->p[z->c - 1] != 175 && z->p[z->c - 1] != 177)) goto lab12;
                    among_var = kronuz_snowball_find_among_b(z, a_4);
                    if (!among_var) goto lab12;
                    z->bra = z->c;
                    switch (among_var) {
                        case 1:
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 6, s_6);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 2:
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 10, s_7);
                                if (ret < 0) return ret;
                            }
                            break;
                    }
                    break;
                lab12:
                    z->c = z->l - v_13;
                    {
                        int v_14;
                        if (z->c < i_p1) goto lab11;
                        v_14 = z->lb; z->lb = i_p1;
                        z->ket = z->c;
                        among_var = kronuz_snowball_find_among_b(z, a_5);
                        if (!among_var) { z->lb = v_14; goto lab11; }
                        z->bra = z->c;
                        switch (among_var) {
                            case 1:
                                {
                                    int ret = kronuz_snowball_slice_del(z);
                                    if (ret < 0) return ret;
                                }
                                break;
                            case 2:
                                if (z->c <= z->lb) { z->lb = v_14; goto lab11; }
                                {
                                    int ret = kronuz_snowball_slice_del(z);
                                    if (ret < 0) return ret;
                                }
                                break;
                        }
                        z->lb = v_14;
                    }
                } while (0);
                break;
            lab11:
                z->c = z->l - v_12;
                do {
                    int v_15 = z->l - z->c;
                    z->ket = z->c;
                    if (!kronuz_snowball_find_among_b(z, a_6)) goto lab13;
                    z->bra = z->c;
                    if (i_p1 > z->c) goto lab13;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                lab13:
                    z->c = z->l - v_15;
                    z->ket = z->c;
                    among_var = kronuz_snowball_find_among_b(z, a_7);
                    if (!among_var) goto lab7;
                    z->bra = z->c;
                    switch (among_var) {
                        case 1:
                            if (!b_remove_verb_person_endings) goto lab7;
                            if (i_p1 > z->c) goto lab7;
                            {
                                int ret = kronuz_snowball_slice_del(z);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 2:
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 6, s_8);
                                if (ret < 0) return ret;
                            }
                            break;
                        case 3:
                            if (i_p1 > z->c) goto lab7;
                            {
                                int ret = kronuz_snowball_slice_del(z);
                                if (ret < 0) return ret;
                            }
                            b_remove_verb_person_endings = 1;
                            break;
                        case 4:
                            if (z->c <= z->lb) goto lab7;
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 2, s_9);
                                if (ret < 0) return ret;
                            }
                            b_remove_verb_person_endings = 1;
                            break;
                        case 5:
                            if (z->c <= z->lb) goto lab7;
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 2, s_10);
                                if (ret < 0) return ret;
                            }
                            b_remove_verb_person_endings = 1;
                            break;
                    }
                } while (0);
            } while (0);
            z->c = z->l - v_9;
        }
        continue;
    lab7:
        z->c = z->l - v_8;
        break;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_persian_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
