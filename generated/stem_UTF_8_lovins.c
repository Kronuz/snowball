/* Generated from lovins.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_lovins.h"

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
extern int kronuz_snowball_lovins_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_CC(struct kronuz_snowball_SN_env * z);
static int r_BB(struct kronuz_snowball_SN_env * z);
static int r_AA(struct kronuz_snowball_SN_env * z);
static int r_Z(struct kronuz_snowball_SN_env * z);
static int r_Y(struct kronuz_snowball_SN_env * z);
static int r_X(struct kronuz_snowball_SN_env * z);
static int r_W(struct kronuz_snowball_SN_env * z);
static int r_V(struct kronuz_snowball_SN_env * z);
static int r_U(struct kronuz_snowball_SN_env * z);
static int r_T(struct kronuz_snowball_SN_env * z);
static int r_S(struct kronuz_snowball_SN_env * z);
static int r_R(struct kronuz_snowball_SN_env * z);
static int r_Q(struct kronuz_snowball_SN_env * z);
static int r_P(struct kronuz_snowball_SN_env * z);
static int r_O(struct kronuz_snowball_SN_env * z);
static int r_N(struct kronuz_snowball_SN_env * z);
static int r_M(struct kronuz_snowball_SN_env * z);
static int r_L(struct kronuz_snowball_SN_env * z);
static int r_K(struct kronuz_snowball_SN_env * z);
static int r_J(struct kronuz_snowball_SN_env * z);
static int r_I(struct kronuz_snowball_SN_env * z);
static int r_H(struct kronuz_snowball_SN_env * z);
static int r_G(struct kronuz_snowball_SN_env * z);
static int r_F(struct kronuz_snowball_SN_env * z);
static int r_E(struct kronuz_snowball_SN_env * z);
static int r_D(struct kronuz_snowball_SN_env * z);
static int r_C(struct kronuz_snowball_SN_env * z);
static int r_B(struct kronuz_snowball_SN_env * z);
static int r_A(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'l', 'l' };
static const symbol s_1[] = { 'd', 'r' };
static const symbol s_2[] = { 'i', 'n' };
static const symbol s_3[] = { 'm', 'e', 't' };
static const symbol s_4[] = { 'r', 'y', 's', 't' };
static const symbol s_5[] = { 'i', 'e', 'f' };
static const symbol s_6[] = { 'u', 'c' };
static const symbol s_7[] = { 'u', 'm' };
static const symbol s_8[] = { 'r', 'b' };
static const symbol s_9[] = { 'u', 'r' };
static const symbol s_10[] = { 'i', 's', 't', 'e', 'r' };
static const symbol s_11[] = { 'm', 'e', 't', 'e', 'r' };
static const symbol s_12[] = { 'o', 'l', 'u', 't' };
static const symbol s_13[] = { 'l' };
static const symbol s_14[] = { 'b', 'i', 'c' };
static const symbol s_15[] = { 'd', 'i', 'c' };
static const symbol s_16[] = { 'p', 'i', 'c' };
static const symbol s_17[] = { 't', 'i', 'c' };
static const symbol s_18[] = { 'a', 'c' };
static const symbol s_19[] = { 'e', 'c' };
static const symbol s_20[] = { 'i', 'c' };
static const symbol s_21[] = { 'l', 'u', 'c' };
static const symbol s_22[] = { 'u', 'a', 's' };
static const symbol s_23[] = { 'v', 'a', 's' };
static const symbol s_24[] = { 'c', 'i', 's' };
static const symbol s_25[] = { 'l', 'i', 's' };
static const symbol s_26[] = { 'e', 'r', 'i', 's' };
static const symbol s_27[] = { 'p', 'a', 'n', 's' };
static const symbol s_28[] = { 'e', 'n', 's' };
static const symbol s_29[] = { 'o', 'n', 's' };
static const symbol s_30[] = { 'l', 'u', 's' };
static const symbol s_31[] = { 'r', 'u', 's' };
static const symbol s_32[] = { 'h', 'e', 's' };
static const symbol s_33[] = { 'm', 'i', 's' };
static const symbol s_34[] = { 'e', 'n', 's' };
static const symbol s_35[] = { 'e', 'r', 's' };
static const symbol s_36[] = { 'e', 's' };
static const symbol s_37[] = { 'y', 's' };

static const unsigned short a_0[] = {
    0x0000 , 0x7464 , 0xC001 , 0x0000 , 0xC001 , 0x0000 , 0x0013 , 0x0000 ,
    0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0017 , 0x001B , 0xC001 , 0x0000 , 0x7074 , 0xC001 , 0xC001 , 0x0000 ,
    0x656F , 0xC001 , 0xC001 , 0x0000 , 0x6565 , 0xC001
};

static const unsigned short a_1[] = {
    0x0000 , 0x7927 , 0x0055 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0058 , 0x0000 , 0x005F , 0x00B0 ,
    0x0111 , 0x0000 , 0x01C4 , 0x0201 , 0xC000 , 0x0000 , 0x0000 , 0x0208 ,
    0x027C , 0x02B9 , 0xC000 , 0x0000 , 0x0000 , 0x0319 , 0x0351 , 0x0530 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0570 , 0x0000 , 0x7373 , 0xC000 ,
    0x4000 , 0x6974 , 0xBFFF , 0x005C , 0x0000 , 0x6161 , 0xBFFF , 0x0000 ,
    0x6969 , 0x0062 , 0x4000 , 0x7461 , 0xBFFE , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0078 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x007C , 0x0000 , 0x007F ,
    0x0000 , 0x0002 , 0xBFFD , S(6C61), 0x0000 , 0x6161 , 0xBFFE , 0x0000 ,
    0x7361 , 0xBFFC , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xBFFB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0094 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0097 , 0x0000 , 0x6161 , 0xBFFA , 0x0000 ,
    0x6969 , 0x009A , 0x4002 , 0x766C , 0x00A7 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00AA , 0x0000 , 0x0000 , 0x0000 , 0x00AD , 0x0000 ,
    0x6161 , 0xBFF9 , 0x0000 , 0x6161 , 0xBFF8 , 0x0000 , 0x6969 , 0xBFF8 ,
    0x0000 , 0x7265 , 0x00C0 , 0x0000 , 0x0000 , 0x0000 , 0x00FA , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0101 , 0x0000 , 0x0000 , 0x010D ,
    0x4009 , 0x7A63 , 0x00DA , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00E1 ,
    0xBFF5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00E5 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00EC , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x00F3 , 0x0000 , 0x6E6E , 0x00DD , 0x0000 , 0x6165 , 0xBFF6 ,
    0xBFF5 , 0x0000 , 0x0002 , 0xBFF5 , S(7369), 0x0000 , 0x656F , 0xBFF4 ,
    0x00E9 , 0x0000 , 0x6969 , 0xBFF5 , 0x0000 , 0x616E , 0xBFF3 , 0x00F0 ,
    0x0000 , 0x6565 , 0xBFF2 , 0x0000 , 0x6969 , 0x00F6 , 0x400F , 0x0002 ,
    0xBFF0 , S(7261), 0x0000 , 0x6F6F , 0x00FD , 0x4000 , 0x0002 , 0xBFEF ,
    S(7261), 0x0000 , 0x0002 , 0x0105 , S(6F68), 0x4000 , 0x6569 , 0xBFEE ,
    0x0109 , 0x4012 , 0x0002 , 0xBFED , S(6C65), 0x0000 , 0x0002 , 0xC000 ,
    S(6177), 0x4000 , 0x7A61 , 0xBFFF , 0x0000 , 0x012D , 0x0138 , 0x0000 ,
    0x0000 , 0x0145 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0148 , 0x0000 ,
    0x0162 , 0x0000 , 0x0000 , 0x0000 , 0x0173 , 0x017B , 0x0182 , 0x0000 ,
    0x0196 , 0x0000 , 0x0000 , 0x0000 , 0x019D , 0x0000 , 0x6E6E , 0x0130 ,
    0x0000 , 0x6165 , 0x0134 , 0xBFFF , 0x4014 , 0x0002 , 0xBFEB , S(6369),
    0x0000 , 0x6969 , 0x013B , 0x4016 , 0x6374 , 0x013F , 0x0142 , 0x0000 ,
    0x6969 , 0xBFE9 , 0x0000 , 0x6F6F , 0xBFE9 , 0x0000 , 0x6161 , 0xBFEC ,
    0x0000 , 0x6262 , 0x014B , 0x0000 , 0x6169 , 0x014F , 0x015D , 0x4001 ,
    0x747A , 0x0153 , 0x0156 , 0x0000 , 0x6161 , 0xBFE8 , 0x0000 , 0x6969 ,
    0x0159 , 0x4019 , 0x0002 , 0xBFE6 , S(7261), 0x4001 , 0x0003 , 0xBFE8 ,
    S(6E65), S(0063), 0x0000 , 0x6F65 , 0xBFE5 , 0x0000 , 0x0000 , 0x0000 ,
    0x016F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xBFE2 , 0x401C ,
    0x0002 , 0xBFE3 , S(6469), 0x0000 , 0x0003 , 0x0178 , S(7461), S(0075),
    0x401B , 0x6565 , 0xBFE1 , 0x0000 , 0x6569 , 0xBFFF , 0x017F , 0x0000 ,
    0x7777 , 0xBFFF , 0x0000 , 0x6169 , 0x0186 , 0xBFDE , 0x4001 , 0x696E ,
    0x018A , 0x018F , 0x0000 , 0x0003 , 0xBFE0 , S(6E65), S(0074), 0x0000 ,
    0x696F , 0xBFE0 , 0x0193 , 0x0000 , 0x6969 , 0xBFDF , 0x0000 , 0x6969 ,
    0x0199 , 0x4001 , 0x0002 , 0xBFE0 , S(7461), 0x0000 , 0x6969 , 0x01A0 ,
    0x4023 , 0x6C72 , 0x01A4 , 0x01C1 , 0x0000 , 0x6161 , 0x01A7 , 0x4024 ,
    0x6E63 , 0x01B5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01B8 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01BD , 0x0000 , 0x6969 , 0xBFDB ,
    0x4025 , 0x0003 , 0xBFDA , S(6E65), S(0074), 0x0000 , 0x0002 , 0xBFDB ,
    S(6F69), 0x0000 , 0x6161 , 0xBFDC , 0x0000 , 0x0002 , 0x01C8 , S(6E69),
    0x4027 , 0x7A63 , 0x01E2 , 0x0000 , 0x0000 , 0x0000 , 0x01E9 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01EC , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x01F3 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xBFD8 , 0x01FA , 0x0000 , 0x6E6E , 0x01E5 , 0x0000 , 0x6165 , 0xBFD8 ,
    0xBFD7 , 0x0000 , 0x6161 , 0xBFD8 , 0x0000 , 0x656F , 0xBFD6 , 0x01F0 ,
    0x0000 , 0x6969 , 0xBFD7 , 0x0000 , 0x616E , 0xBFD5 , 0x01F7 , 0x0000 ,
    0x6565 , 0xBFD4 , 0x0000 , 0x6969 , 0x01FD , 0x402D , 0x0002 , 0xBFD2 ,
    S(7261), 0x0000 , 0x0002 , 0x0205 , S(7369), 0x402F , 0x7979 , 0xBFD0 ,
    0x0000 , 0x7961 , 0x0223 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0275 , 0x0000 ,
    0x0000 , 0x0000 , 0xBFC8 , 0x4031 , 0x7463 , 0x0237 , 0x0242 , 0xBFCC ,
    0x0000 , 0x0000 , 0x0000 , 0x0246 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0265 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0271 , 0x0000 ,
    0x6969 , 0x023A , 0x4032 , 0x6174 , 0xBFCD , 0x023E , 0x0000 , 0x0002 ,
    0xBFCD , S(7369), 0x0000 , 0x0002 , 0xBFCE , S(696F), 0x4032 , 0x7463 ,
    0x025A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x025E ,
    0x0000 , 0x0261 , 0x0000 , 0x0002 , 0xBFCB , S(6E61), 0x0000 , 0x6161 ,
    0xBFCB , 0x0000 , 0x0002 , 0xBFCB , S(6E65), 0x0000 , 0x0002 , 0x0269 ,
    S(6F69), 0x4032 , 0x0002 , 0x026D , S(7461), 0x4036 , 0x0002 , 0xBFC9 ,
    S(7A69), 0x0000 , 0x0002 , 0xBFCE , S(6E65), 0x0000 , 0x6666 , 0x0278 ,
    0x4000 , 0x6569 , 0xBFEF , 0xBFEF , 0x0000 , 0x7375 , 0x0280 , 0x02B6 ,
    0x0000 , 0x6969 , 0x0283 , 0x4039 , 0x7663 , 0x0299 , 0x029C , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x02A0 , 0x0000 ,
    0x02AE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x02B1 , 0x0000 , 0x6969 , 0xBFC6 , 0x0000 , 0x0002 , 0xBFC6 , S(696F),
    0x0000 , 0x6161 , 0x02A3 , 0x403B , 0x636E , 0x02A7 , 0x02AA , 0x0000 ,
    0x6969 , 0xBFC4 , 0x0000 , 0x0002 , 0xBFC4 , S(6F69), 0x0000 , 0x6969 ,
    0xBFC3 , 0x0000 , 0x0003 , 0xBFC6 , S(7461), S(0069), 0x403E , 0x6969 ,
    0xBFC1 , 0x0000 , 0x6F61 , 0x02CA , 0x0000 , 0x0000 , 0x0000 , 0x02D1 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x02D5 , 0x0000 , 0x6969 , 0x02CD , 0x4000 , 0x0002 , 0xBFEF ,
    S(6369), 0x4040 , 0x0002 , 0xBFBF , S(676F), 0x4042 , 0x6969 , 0x02D8 ,
    0x4043 , 0x7474 , 0x02DB , 0x0000 , 0x6163 , 0x02DF , 0x0316 , 0x4044 ,
    0x7A63 , 0x02F9 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x02FC ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0301 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0304 , 0x030B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x030F , 0x0000 , 0x6969 , 0xBFBB , 0x0000 , 0x0003 , 0xBFBA , S(6E65),
    S(0074), 0x0000 , 0x6969 , 0xBFBA , 0x0000 , 0x6969 , 0x0307 , 0x4046 ,
    0x0002 , 0xBFB9 , S(7261), 0x0000 , 0x0002 , 0xBFBA , S(6E65), 0x0000 ,
    0x6969 , 0x0312 , 0x4048 , 0x0002 , 0xBFB7 , S(7261), 0x0000 , 0x6161 ,
    0xBFB6 , 0x0000 , 0x6F61 , 0x032A , 0x0000 , 0x0000 , 0x0000 , 0x032D ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x034D , 0x404B , 0x6565 , 0xBFB4 , 0x0000 , 0x7A69 , 0xC000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0341 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0346 , 0x0000 , 0x0003 , 0xC000 , S(7261), S(0069), 0x0000 , 0x6969 ,
    0x0349 , 0x4040 , 0x0002 , 0xBFB3 , S(7261), 0x404E , 0x0002 , 0xBFB1 ,
    S(7461), 0x4050 , 0x7527 , 0xBFAF , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xBFAE , 0x0000 , 0x03A2 ,
    0x0000 , 0x03AA , 0x0000 , 0x040C , 0x0000 , 0xBFAF , 0x0000 , 0x0000 ,
    0x0410 , 0x0420 , 0x0424 , 0x0000 , 0x0000 , 0x0000 , 0x0450 , 0x046C ,
    0x04FE , 0x0508 , 0x0000 , 0x6969 , 0x03A5 , 0x4051 , 0x0003 , 0xBFAD ,
    S(7369), S(0074), 0x4054 , 0x7663 , 0x03C0 , 0x03C7 , 0x0000 , 0x0000 ,
    0x03CD , 0x0000 , 0x03D0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x03FC ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x03FF , 0x0404 , 0x0000 , 0x0407 ,
    0x0000 , 0x6E6E , 0x03C3 , 0x0000 , 0x6165 , 0xBFAB , 0xBFAA , 0x0000 ,
    0x6969 , 0x03CA , 0x4057 , 0x6F6F , 0xBFA8 , 0x0000 , 0x6161 , 0xBFAB ,
    0x4059 , 0x7463 , 0x03E4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x03EC , 0x0000 , 0x03EF , 0x0000 , 0x616E , 0xBFA6 , 0x03E8 ,
    0x0000 , 0x6165 , 0xBFA6 , 0xBFA6 , 0x0000 , 0x6161 , 0xBFA6 , 0x0000 ,
    0x6969 , 0x03F2 , 0x405A , 0x6C76 , 0x03F6 , 0x03F9 , 0x0000 , 0x6161 ,
    0xBFA5 , 0x0000 , 0x6969 , 0xBFA5 , 0x0000 , 0x6969 , 0xBFA4 , 0x0000 ,
    0x0003 , 0xBFAA , S(656E), S(0073), 0x0000 , 0x6161 , 0xBFAA , 0x0000 ,
    0x0003 , 0xBFAA , S(7461), S(0069), 0x0000 , 0x0002 , 0xBFA3 , S(6E69),
    0x0000 , 0x6161 , 0x0413 , 0x405E , 0x696E , 0x0417 , 0x041C , 0x405F ,
    0x0003 , 0xBFA0 , S(6E65), S(0074), 0x0000 , 0x0002 , 0xBFA1 , S(6F69),
    0x0000 , 0x0002 , 0xBFAE , S(7369), 0x0000 , 0x616F , 0x0428 , 0x042F ,
    0x0000 , 0x6969 , 0x042B , 0x4051 , 0x0002 , 0xBF9F , S(6369), 0x0000 ,
    0x6969 , 0x0432 , 0x4052 , 0x0002 , 0x0436 , S(7461), 0x4062 , 0x7A73 ,
    0x0440 , 0x0445 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0449 ,
    0x0000 , 0x0003 , 0xBF9D , S(7261), S(0069), 0x0000 , 0x0002 , 0xBF9D ,
    S(6E65), 0x0000 , 0x6969 , 0x044C , 0x4063 , 0x0002 , 0xBF9C , S(7261),
    0x0000 , 0x6F61 , 0xBF9B , 0x0000 , 0x0000 , 0x0000 , 0x0461 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0468 , 0x0000 , 0x697A , 0xBFAF , 0x0465 , 0x0000 , 0x6969 , 0xBF9A ,
    0x0000 , 0x0002 , 0xBFAF , S(7461), 0x0000 , 0x6565 , 0x046F , 0x0000 ,
    0x6C6E , 0x0473 , 0x0476 , 0x4051 , 0x6565 , 0xBF9F , 0x4051 , 0x7465 ,
    0x0488 , 0x0000 , 0x04AA , 0x04AE , 0x04B2 , 0x0000 , 0x0000 , 0x04B6 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04DA , 0x04FA ,
    0x4067 , 0x766C , 0x0495 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x049F , 0x0000 , 0x04A3 , 0x0000 , 0x6262 , 0x0498 ,
    0x0000 , 0x6169 , 0x049C , 0xBF98 , 0x4068 , 0x6565 , 0xBF97 , 0x0000 ,
    0x6169 , 0xBF98 , 0xBF98 , 0x0000 , 0x6969 , 0x04A6 , 0x4068 , 0x0002 ,
    0xBF96 , S(7461), 0x0000 , 0x0002 , 0xBF9F , S(6E69), 0x0000 , 0x0002 ,
    0xBF9F , S(7369), 0x4061 , 0x0002 , 0xBF95 , S(7261), 0x0000 , 0x6175 ,
    0x04BA , 0x04D7 , 0x4061 , 0x6E63 , 0x04C8 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x04CB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04D3 ,
    0x0000 , 0x6969 , 0xBF94 , 0x0000 , 0x0002 , 0x04CF , S(746E), 0x0000 ,
    0x6165 , 0xBF94 , 0xBF94 , 0x0000 , 0x0002 , 0xBF94 , S(6F69), 0x0000 ,
    0x6666 , 0xBF9F , 0x0000 , 0x7375 , 0x04DE , 0x04E2 , 0x0000 , 0x0002 ,
    0xBF9F , S(656C), 0x0000 , 0x6F6F , 0x04E5 , 0x4061 , 0x7465 , 0xBF93 ,
    0x0000 , 0x0000 , 0x0000 , 0xBF93 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04F7 , 0x0000 ,
    0x6969 , 0xBF93 , 0x0000 , 0x0002 , 0xBF9F , S(6E65), 0x0000 , 0x6E73 ,
    0x0502 , 0x0505 , 0x0000 , 0x6161 , 0xBFAE , 0x0000 , 0x6969 , 0x042B ,
    0x406E , 0x6F6F , 0x050B , S(406F), 0x7465 , 0x051D , 0x0000 , 0x0000 ,
    0x0000 , 0x0529 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x052D , 0x4070 , 0x636E , 0x0521 ,
    0x0524 , 0x0000 , 0x6161 , 0xBF8F , 0x0000 , 0x0004 , 0xBF8F , S(6E61),
    S(6174), 0x4070 , 0x0002 , 0xBF8E , S(6361), 0x0000 , 0x6969 , 0xBF90 ,
    0x0000 , 0x6E73 , 0x0534 , 0x0544 , 0x0000 , 0x6165 , 0x0538 , 0x053C ,
    0x4039 , 0x0002 , 0xBFC6 , S(6369), 0x402F , 0x0002 , 0x0540 , S(6D65),
    0x4030 , 0x0002 , 0xBF8D , S(7A69), 0x0000 , 0x6969 , 0x0547 , 0x4000 ,
    0x7463 , 0x055B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x055E , 0x0000 , 0x0568 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x056C , 0x0000 , 0x6969 , 0xBFEF , 0x0000 , 0x6161 ,
    0x0561 , 0x4011 , 0x6369 , 0x0565 , 0xBF8C , 0x0000 , 0x6969 , 0xBF8C ,
    0x0000 , 0x0002 , 0xBFEF , S(6F69), 0x0000 , 0x0002 , 0xBFEF , S(6E65),
    0x4039 , 0x7463 , 0x0584 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x058C , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0641 , 0x0000 , 0x065B , 0x0000 , 0x616E , 0xBF8B , 0x0588 ,
    0x0000 , 0x6165 , 0xBF8A , 0xBF8B , 0x4076 , 0x7461 , 0x05A2 , 0x05A5 ,
    0x0000 , 0x05A9 , 0x05AF , 0x0000 , 0x05BD , 0x0000 , 0x05C5 , 0x0000 ,
    0x0000 , 0x05CC , 0x0000 , 0x0629 , 0x0000 , 0x0000 , 0x0000 , 0x062C ,
    0x0632 , 0x063D , 0x0000 , 0x6565 , 0xBF89 , 0x0000 , 0x6169 , 0xBF88 ,
    0xBF88 , 0x0000 , 0x6565 , 0x05AC , 0x4079 , 0x6969 , 0xBF86 , 0x4079 ,
    0x7476 , 0x05B3 , 0x05B6 , 0x0000 , 0x6161 , 0xBF85 , 0x0000 , 0x6969 ,
    0x05B9 , 0x407B , 0x0002 , 0xBF84 , S(7461), 0x0000 , 0x0002 , 0x05C1 ,
    S(6E69), 0x407D , 0x0002 , 0xBF82 , S(7461), 0x4078 , 0x6C72 , 0xBF81 ,
    0x05C9 , 0x0000 , 0x6161 , 0xBF81 , 0x0000 , 0x6175 , 0x05D0 , 0x0622 ,
    0x407D , 0x7463 , 0x05E4 , 0x0609 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x060D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0612 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x061E , 0x0000 , 0x6969 , 0x05E7 , 0x4080 ,
    0x7461 , 0xBF7F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x05FD , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0601 , 0x0000 , 0x0002 , 0xBF7E ,
    S(6C61), 0x0000 , 0x0002 , 0x0605 , S(7369), 0x4081 , 0x0002 , 0xBF7D ,
    S(6C61), 0x0000 , 0x0002 , 0xBF80 , S(696F), 0x4080 , 0x0003 , 0xBF7C ,
    S(6E65), S(0074), 0x0000 , 0x0002 , 0x0616 , S(6F69), 0x4080 , 0x0002 ,
    0x061A , S(7461), 0x4085 , 0x0002 , 0xBF7A , S(7A69), 0x0000 , 0x0002 ,
    0xBF80 , S(6E65), 0x0000 , 0x6666 , 0x0625 , 0x4078 , 0x6569 , 0xBF79 ,
    0xBF79 , 0x0000 , 0x6565 , 0xBF87 , 0x0000 , 0x6161 , 0x062F , 0x4088 ,
    0x6565 , 0xBF77 , 0x0000 , 0x7375 , 0x0636 , 0x063A , 0x0000 , 0x0002 ,
    0xBF88 , S(656C), 0x0000 , 0x6F6F , 0x0625 , 0x0000 , 0x0002 , 0xBF88 ,
    S(6E65), 0x0000 , 0x6F61 , 0xBF76 , 0x0000 , 0x0000 , 0x0000 , 0xBF75 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0652 , 0x0657 , 0x0000 , 0x0004 , 0xBF8B , S(6369), S(6169), 0x0000 ,
    0x0002 , 0xBF8B , S(7461), 0x0000 , 0x6969 , 0x065E , 0x4075 , 0x7663 ,
    0x0674 , 0x0000 , 0xBF74 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0678 , 0x0000 , 0x06AF , 0x0000 , 0x0000 , 0x0000 , 0x06B2 ,
    0x0000 , 0x0000 , 0x0000 , 0x06B5 , 0x0000 , 0x6169 , 0xBF74 , 0xBF74 ,
    0x0000 , 0x6961 , 0x0683 , 0x0000 , 0x0000 , 0x0000 , 0xBF74 , 0x0000 ,
    0x0000 , 0x0000 , 0x06A0 , 0x408C , 0x6E63 , 0x0691 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0694 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x069C , 0x0000 , 0x6969 , 0xBF73 , 0x408D , 0x0002 , 0x0698 , S(746E),
    0x0000 , 0x6165 , 0xBF72 , 0xBF72 , 0x0000 , 0x0002 , 0xBF73 , S(6F69),
    0x0000 , 0x6262 , 0x06A3 , 0x0000 , 0x6169 , 0x06A7 , 0xBF74 , 0x408C ,
    0x0002 , 0x06AB , S(7A69), 0x408F , 0x0002 , 0xBF70 , S(7261), 0x0000 ,
    0x6969 , 0xBF6F , 0x0000 , 0x6161 , 0xBF6E , 0x0000 , 0x6969 , 0xBF74
};

static const unsigned short a_2[] = {
    0x0000 , 0x7462 , 0x0015 , 0x0000 , 0x0018 , 0x0000 , 0x0000 , 0x001B ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x001E , 0x0021 , 0x0024 , 0x0000 ,
    0x0027 , 0x0000 , 0x002A , 0x002D , 0x0030 , 0x0000 , 0x6262 , 0xC001 ,
    0x0000 , 0x6464 , 0xC001 , 0x0000 , 0x6767 , 0xC001 , 0x0000 , 0x6C6C ,
    0xC001 , 0x0000 , 0x6D6D , 0xC001 , 0x0000 , 0x6E6E , 0xC001 , 0x0000 ,
    0x7070 , 0xC001 , 0x0000 , 0x7272 , 0xC001 , 0x0000 , 0x7373 , 0xC001 ,
    0x0000 , 0x7474 , 0xC001
};

static const unsigned short a_3[] = {
    0x0000 , 0x7A64 , 0x0019 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0061 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0064 , 0x0075 , 0x0079 , 0x0000 , 0x00A5 , 0x0000 , 0x00AF , 0x0000 ,
    0x00DE , 0x0000 , 0x7561 , 0x0030 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0034 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0049 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x005D ,
    0x0000 , 0x7576 , 0xFFEE , 0xFFED , 0x0000 , 0x7263 , 0xFFEC , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFEB ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0046 , 0x0000 , 0x6565 ,
    0xFFEA , 0x0000 , 0x6F61 , 0x005A , 0x0000 , 0x0000 , 0x0000 , 0xFFE8 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFE7 , 0x0000 , 0x7070 , 0xFFE9 , 0x0000 , 0x6C72 , 0xFFE6 ,
    0xFFE5 , 0x0000 , 0x7575 , 0xFFF7 , 0x0000 , 0x6574 , 0x0068 , 0x006B ,
    0x0000 , 0x6868 , 0xFFE4 , 0x0000 , 0x6573 , 0x006F , 0x0072 , 0x0000 ,
    0x6D6D , 0xFFF9 , 0x0000 , 0x6969 , 0xFFFA , 0x0000 , 0x0002 , 0xFFFB ,
    S(7275), 0x0000 , 0x7963 , 0x0092 , 0x0000 , 0xFFE0 , 0x0000 , 0x0000 ,
    0x0000 , 0x0095 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0098 , 0x0000 ,
    0x009B , 0x0000 , 0x00A2 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFDF , 0x0000 , 0x7575 , 0xFFFE , 0x0000 , 0x6D6D , 0xFFE3 ,
    0x0000 , 0x6565 , 0xFFE2 , 0x0000 , 0x6D72 , 0x009F , 0xFFFC , 0x0000 ,
    0x7575 , 0xFFFD , 0x0000 , 0x6565 , 0xFFE1 , 0x0000 , 0x656C , 0x00A9 ,
    0x00AC , 0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x6F6F , 0xFFF8 , 0x0000 ,
    0x7561 , 0xFFF2 , 0x0000 , 0x0000 , 0x0000 , 0x00C6 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFF0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00DB , 0x000F , 0x7462 ,
    0xFFF6 , 0x0000 , 0xFFF5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF4 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFF3 , 0x0000 , 0x6C6C , 0xFFEF , 0x0000 , 0x7979 ,
    0xFFDF
};

static int r_A(struct kronuz_snowball_SN_env * z) {
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
        if (ret < 0) return 0;
        z->c = ret;
    }
    return 1;
}

static int r_B(struct kronuz_snowball_SN_env * z) {
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
        if (ret < 0) return 0;
        z->c = ret;
    }
    return 1;
}

static int r_C(struct kronuz_snowball_SN_env * z) {
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 4);
        if (ret < 0) return 0;
        z->c = ret;
    }
    return 1;
}

static int r_D(struct kronuz_snowball_SN_env * z) {
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 5);
        if (ret < 0) return 0;
        z->c = ret;
    }
    return 1;
}

static int r_E(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab0;
    z->c--;
    return 0;
lab0:
    return 1;
}

static int r_F(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab0;
    z->c--;
    return 0;
lab0:
    return 1;
}

static int r_G(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'f') return 0;
    z->c--;
    return 1;
}

static int r_H(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab0;
        z->c--;
        break;
    lab0:
        if (!(kronuz_snowball_eq_s_b(z, 2, s_0))) return 0;
    } while (0);
    return 1;
}

static int r_I(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'o') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab1;
    z->c--;
    return 0;
lab1:
    return 1;
}

static int r_J(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'a') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab1;
    z->c--;
    return 0;
lab1:
    return 1;
}

static int r_K(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 'i') goto lab1;
        z->c--;
        break;
    lab1:
        if (z->c <= z->lb || z->p[z->c - 1] != 'e') return 0;
        z->c--;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
            if (ret < 0) return 0;
            z->c = ret;
        }
        if (z->c <= z->lb || z->p[z->c - 1] != 'u') return 0;
        z->c--;
    } while (0);
    return 1;
}

static int r_L(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'u') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'x') goto lab1;
    z->c--;
    return 0;
lab1:
    {
        int v_2 = z->l - z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab2;
        z->c--;
        if (z->c <= z->lb || z->p[z->c - 1] != 'o') goto lab3;
        z->c--;
        goto lab2;
    lab3:
        return 0;
    lab2:
        z->c = z->l - v_2;
    }
    return 1;
}

static int r_M(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'a') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'c') goto lab1;
    z->c--;
    return 0;
lab1:
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab2;
    z->c--;
    return 0;
lab2:
    if (z->c <= z->lb || z->p[z->c - 1] != 'm') goto lab3;
    z->c--;
    return 0;
lab3:
    return 1;
}

static int r_N(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
        if (ret < 0) return 0;
        z->c = ret;
    }
    do {
        int v_2 = z->l - z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab1;
        z->c--;
        goto lab0;
    lab1:
        break;
    lab0:
        z->c = z->l - v_2;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
    } while (0);
    return 1;
}

static int r_O(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 'i') return 0;
        z->c--;
    } while (0);
    return 1;
}

static int r_P(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'c') goto lab0;
    z->c--;
    return 0;
lab0:
    return 1;
}

static int r_Q(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    {
        int v_2 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_2;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'n') goto lab1;
    z->c--;
    return 0;
lab1:
    return 1;
}

static int r_R(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 'n') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 'r') return 0;
        z->c--;
    } while (0);
    return 1;
}

static int r_S(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (!(kronuz_snowball_eq_s_b(z, 2, s_1))) goto lab0;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 't') return 0;
        z->c--;
        if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab1;
        z->c--;
        return 0;
    lab1:
        ;
    } while (0);
    return 1;
}

static int r_T(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 't') return 0;
        z->c--;
        if (z->c <= z->lb || z->p[z->c - 1] != 'o') goto lab1;
        z->c--;
        return 0;
    lab1:
        ;
    } while (0);
    return 1;
}

static int r_U(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 'm') goto lab1;
        z->c--;
        break;
    lab1:
        if (z->c <= z->lb || z->p[z->c - 1] != 'n') goto lab2;
        z->c--;
        break;
    lab2:
        if (z->c <= z->lb || z->p[z->c - 1] != 'r') return 0;
        z->c--;
    } while (0);
    return 1;
}

static int r_V(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'c') return 0;
    z->c--;
    return 1;
}

static int r_W(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab0;
    z->c--;
    return 0;
lab0:
    if (z->c <= z->lb || z->p[z->c - 1] != 'u') goto lab1;
    z->c--;
    return 0;
lab1:
    return 1;
}

static int r_X(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    do {
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab0;
        z->c--;
        break;
    lab0:
        if (z->c <= z->lb || z->p[z->c - 1] != 'i') goto lab1;
        z->c--;
        break;
    lab1:
        if (z->c <= z->lb || z->p[z->c - 1] != 'e') return 0;
        z->c--;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
            if (ret < 0) return 0;
            z->c = ret;
        }
        if (z->c <= z->lb || z->p[z->c - 1] != 'u') return 0;
        z->c--;
    } while (0);
    return 1;
}

static int r_Y(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    return kronuz_snowball_eq_s_b(z, 2, s_2);
}

static int r_Z(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'f') goto lab0;
    z->c--;
    return 0;
lab0:
    return 1;
}

static int r_AA(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1839440 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    return kronuz_snowball_find_among_b(z, a_0) != 0;
}

static int r_BB(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (!(kronuz_snowball_eq_s_b(z, 3, s_3))) goto lab0;
    return 0;
lab0:
    if (!(kronuz_snowball_eq_s_b(z, 4, s_4))) goto lab1;
    return 0;
lab1:
    return 1;
}

static int r_CC(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - v_1;
    }
    if (z->c <= z->lb || z->p[z->c - 1] != 'l') return 0;
    z->c--;
    return 1;
}

extern int kronuz_snowball_lovins_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    z->lb = z->c; z->c = z->l;
    {
        int v_1 = z->l - z->c;
        z->ket = z->c;
        {
            int c0 = z->c;
            among_var = kronuz_snowball_find_among_b(z, a_1);
            if ((among_var & 0x4000)) do {
                int c = z->c;
                switch (among_var & 0xFF) {
                    case 0: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 1: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 2: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16384;
                        continue;
                    }
                    case 3: {
                        int ret = r_BB(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16384;
                        continue;
                    }
                    case 4: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16384;
                        continue;
                    }
                    case 5: {
                        int ret = r_H(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16384;
                        continue;
                    }
                    case 6: {
                        int ret = r_C(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16384;
                        continue;
                    }
                    case 7: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16386;
                        continue;
                    }
                    case 8: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16386;
                        continue;
                    }
                    case 9: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 10: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 11: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 12: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 13: {
                        int ret = r_I(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 14: {
                        int ret = r_C(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 15: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16393;
                        continue;
                    }
                    case 16: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16399;
                        continue;
                    }
                    case 17: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16384;
                        continue;
                    }
                    case 18: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16384;
                        continue;
                    }
                    case 19: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16402;
                        continue;
                    }
                    case 20: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 21: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16404;
                        continue;
                    }
                    case 22: {
                        int ret = r_L(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 23: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16406;
                        continue;
                    }
                    case 24: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16385;
                        continue;
                    }
                    case 25: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16385;
                        continue;
                    }
                    case 26: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16409;
                        continue;
                    }
                    case 27: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 28: {
                        int ret = r_M(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 29: {
                        int ret = r_I(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16412;
                        continue;
                    }
                    case 30: {
                        int ret = r_R(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 31: {
                        int ret = r_Z(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16411;
                        continue;
                    }
                    case 32: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16385;
                        continue;
                    }
                    case 33: {
                        int ret = r_D(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16385;
                        continue;
                    }
                    case 34: {
                        int ret = r_AA(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 35: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16384;
                        continue;
                    }
                    case 36: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16419;
                        continue;
                    }
                    case 37: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16420;
                        continue;
                    }
                    case 38: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16421;
                        continue;
                    }
                    case 39: {
                        int ret = r_N(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 40: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 41: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 42: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 43: {
                        int ret = r_I(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 44: {
                        int ret = r_C(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 45: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16423;
                        continue;
                    }
                    case 46: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16429;
                        continue;
                    }
                    case 47: {
                        int ret = r_C(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 48: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16431;
                        continue;
                    }
                    case 49: {
                        int ret = r_BB(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 50: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16433;
                        continue;
                    }
                    case 51: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16434;
                        continue;
                    }
                    case 52: {
                        int ret = r_Y(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16433;
                        continue;
                    }
                    case 53: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16434;
                        continue;
                    }
                    case 54: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16434;
                        continue;
                    }
                    case 55: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16438;
                        continue;
                    }
                    case 56: {
                        int ret = r_R(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 57: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 58: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16441;
                        continue;
                    }
                    case 59: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16441;
                        continue;
                    }
                    case 60: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16443;
                        continue;
                    }
                    case 61: {
                        int ret = r_J(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16441;
                        continue;
                    }
                    case 62: {
                        int ret = r_U(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 63: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16446;
                        continue;
                    }
                    case 64: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 65: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16448;
                        continue;
                    }
                    case 66: {
                        int ret = r_S(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 67: {
                        int ret = r_Q(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16450;
                        continue;
                    }
                    case 68: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16451;
                        continue;
                    }
                    case 69: {
                        int ret = r_G(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16452;
                        continue;
                    }
                    case 70: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16452;
                        continue;
                    }
                    case 71: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16454;
                        continue;
                    }
                    case 72: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16452;
                        continue;
                    }
                    case 73: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16456;
                        continue;
                    }
                    case 74: {
                        int ret = r_G(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16451;
                        continue;
                    }
                    case 75: {
                        int ret = r_X(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 76: {
                        int ret = r_Y(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16459;
                        continue;
                    }
                    case 77: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16448;
                        continue;
                    }
                    case 78: {
                        int ret = r_T(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 79: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16462;
                        continue;
                    }
                    case 80: {
                        int ret = r_W(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        among_var = 0;
                        break;
                    }
                    case 81: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 82: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 83: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16465;
                        continue;
                    }
                    case 84: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 85: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16468;
                        continue;
                    }
                    case 86: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16468;
                        continue;
                    }
                    case 87: {
                        int ret = r_L(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16468;
                        continue;
                    }
                    case 88: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16471;
                        continue;
                    }
                    case 89: {
                        int ret = r_P(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16468;
                        continue;
                    }
                    case 90: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16473;
                        continue;
                    }
                    case 91: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16474;
                        continue;
                    }
                    case 92: {
                        int ret = r_M(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16468;
                        continue;
                    }
                    case 93: {
                        int ret = r_N(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 94: {
                        int ret = r_BB(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 95: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16478;
                        continue;
                    }
                    case 96: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16479;
                        continue;
                    }
                    case 97: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16465;
                        continue;
                    }
                    case 98: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16466;
                        continue;
                    }
                    case 99: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16482;
                        continue;
                    }
                    case 100: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 8;
                        among_var = 16483;
                        continue;
                    }
                    case 101: {
                        int ret = r_O(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 102: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 103: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16465;
                        continue;
                    }
                    case 104: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16487;
                        continue;
                    }
                    case 105: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 8;
                        among_var = 16488;
                        continue;
                    }
                    case 106: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16488;
                        continue;
                    }
                    case 107: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16481;
                        continue;
                    }
                    case 108: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16481;
                        continue;
                    }
                    case 109: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16481;
                        continue;
                    }
                    case 110: {
                        int ret = r_V(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16464;
                        continue;
                    }
                    case 111: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16494;
                        continue;
                    }
                    case 112: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16495;
                        continue;
                    }
                    case 113: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16496;
                        continue;
                    }
                    case 114: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16496;
                        continue;
                    }
                    case 115: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16432;
                        continue;
                    }
                    case 116: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16401;
                        continue;
                    }
                    case 117: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16441;
                        continue;
                    }
                    case 118: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16441;
                        continue;
                    }
                    case 119: {
                        int ret = r_Y(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16502;
                        continue;
                    }
                    case 120: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16502;
                        continue;
                    }
                    case 121: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16502;
                        continue;
                    }
                    case 122: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16505;
                        continue;
                    }
                    case 123: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16505;
                        continue;
                    }
                    case 124: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16507;
                        continue;
                    }
                    case 125: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16502;
                        continue;
                    }
                    case 126: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16509;
                        continue;
                    }
                    case 127: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16504;
                        continue;
                    }
                    case 128: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16509;
                        continue;
                    }
                    case 129: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16512;
                        continue;
                    }
                    case 130: {
                        int ret = r_C(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16512;
                        continue;
                    }
                    case 131: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 9;
                        among_var = 16513;
                        continue;
                    }
                    case 132: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16512;
                        continue;
                    }
                    case 133: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16512;
                        continue;
                    }
                    case 134: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 9;
                        among_var = 16517;
                        continue;
                    }
                    case 135: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16504;
                        continue;
                    }
                    case 136: {
                        int ret = r_K(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 2;
                        among_var = 16502;
                        continue;
                    }
                    case 137: {
                        int ret = r_Y(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 4;
                        among_var = 16520;
                        continue;
                    }
                    case 138: {
                        int ret = r_F(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16441;
                        continue;
                    }
                    case 139: {
                        int ret = r_E(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 1;
                        among_var = 16441;
                        continue;
                    }
                    case 140: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16501;
                        continue;
                    }
                    case 141: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 5;
                        among_var = 16524;
                        continue;
                    }
                    case 142: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 6;
                        among_var = 16525;
                        continue;
                    }
                    case 143: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 7;
                        among_var = 16524;
                        continue;
                    }
                    case 144: {
                        int ret = r_A(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 9;
                        among_var = 16527;
                        continue;
                    }
                    case 145: {
                        int ret = r_CC(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16501;
                        continue;
                    }
                    case 146: {
                        int ret = r_B(z);
                        if (ret > 0) { z->c = c; among_var = 1; break; }
                        z->c = c0 - 3;
                        among_var = 16501;
                        continue;
                    }
                }
                break;
            } while (1);
            if (!among_var) goto lab0;
        }
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - v_1;
    }
    {
        int v_2 = z->l - z->c;
        {
            int v_3 = z->l - z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1929364 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab1;
            if (!kronuz_snowball_find_among_b(z, a_2)) goto lab1;
            z->c = z->l - v_3;
        }
        z->ket = z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
            if (ret < 0) goto lab1;
            z->c = ret;
        }
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - v_2;
    }
    {
        int v_4 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((89919504 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab2;
        among_var = kronuz_snowball_find_among_b(z, a_3);
        if (!among_var) goto lab2;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_5);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_6);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_7);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_8);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_9);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_10);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_11);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_12);
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                if (z->c <= z->lb || z->p[z->c - 1] != 'a') goto lab3;
                z->c--;
                goto lab2;
            lab3:
                if (z->c <= z->lb || z->p[z->c - 1] != 'i') goto lab4;
                z->c--;
                goto lab2;
            lab4:
                if (z->c <= z->lb || z->p[z->c - 1] != 'o') goto lab5;
                z->c--;
                goto lab2;
            lab5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_14);
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_15);
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_16);
                    if (ret < 0) return ret;
                }
                break;
            case 13:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_17);
                    if (ret < 0) return ret;
                }
                break;
            case 14:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_18);
                    if (ret < 0) return ret;
                }
                break;
            case 15:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_19);
                    if (ret < 0) return ret;
                }
                break;
            case 16:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_20);
                    if (ret < 0) return ret;
                }
                break;
            case 17:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_21);
                    if (ret < 0) return ret;
                }
                break;
            case 18:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_22);
                    if (ret < 0) return ret;
                }
                break;
            case 19:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_23);
                    if (ret < 0) return ret;
                }
                break;
            case 20:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_24);
                    if (ret < 0) return ret;
                }
                break;
            case 21:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_25);
                    if (ret < 0) return ret;
                }
                break;
            case 22:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_26);
                    if (ret < 0) return ret;
                }
                break;
            case 23:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_27);
                    if (ret < 0) return ret;
                }
                break;
            case 24:
                if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab6;
                z->c--;
                goto lab2;
            lab6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_28);
                    if (ret < 0) return ret;
                }
                break;
            case 25:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_29);
                    if (ret < 0) return ret;
                }
                break;
            case 26:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_30);
                    if (ret < 0) return ret;
                }
                break;
            case 27:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_31);
                    if (ret < 0) return ret;
                }
                break;
            case 28:
                if (z->c <= z->lb || z->p[z->c - 1] != 'p') goto lab7;
                z->c--;
                goto lab2;
            lab7:
                if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab8;
                z->c--;
                goto lab2;
            lab8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_32);
                    if (ret < 0) return ret;
                }
                break;
            case 29:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_33);
                    if (ret < 0) return ret;
                }
                break;
            case 30:
                if (z->c <= z->lb || z->p[z->c - 1] != 'm') goto lab9;
                z->c--;
                goto lab2;
            lab9:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_34);
                    if (ret < 0) return ret;
                }
                break;
            case 31:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_35);
                    if (ret < 0) return ret;
                }
                break;
            case 32:
                if (z->c <= z->lb || z->p[z->c - 1] != 'n') goto lab10;
                z->c--;
                goto lab2;
            lab10:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_36);
                    if (ret < 0) return ret;
                }
                break;
            case 33:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_37);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab2:
        z->c = z->l - v_4;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_lovins_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
