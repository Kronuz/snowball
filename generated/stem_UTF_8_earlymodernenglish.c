/* Generated from earlymodernenglish.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_earlymodernenglish.h"

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
extern int kronuz_snowball_earlymodernenglish_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_shortv(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'p', 'a', 's', 't' };
static const symbol s_1[] = { 's', 'k', 'i' };
static const symbol s_2[] = { 's', 'k', 'y' };
static const symbol s_3[] = { 'i', 'd', 'l' };
static const symbol s_4[] = { 'g', 'e', 'n', 't', 'l' };
static const symbol s_5[] = { 'u', 'g', 'l', 'i' };
static const symbol s_6[] = { 'e', 'a', 'r', 'l', 'i' };
static const symbol s_7[] = { 'o', 'n', 'l', 'i' };
static const symbol s_8[] = { 's', 'i', 'n', 'g', 'l' };
static const symbol s_9[] = { 'a', 'e' };
static const symbol s_10[] = { 'o', 'e' };
static const symbol s_11[] = { 's' };
static const symbol s_12[] = { 'Y' };
static const symbol s_13[] = { 'Y' };
static const symbol s_14[] = { 'o', 'v', 'e', 'r' };
static const symbol s_15[] = { 's', 's' };
static const symbol s_16[] = { 'i' };
static const symbol s_17[] = { 'i', 'e' };
static const symbol s_18[] = { 'e', 'v', 'e', 'r' };
static const symbol s_19[] = { 'l', 'y' };
static const symbol s_20[] = { 'e', 'e' };
static const symbol s_21[] = { 'i', 'e' };
static const symbol s_22[] = { 'e' };
static const symbol s_23[] = { 'e' };
static const symbol s_24[] = { 'i' };
static const symbol s_25[] = { 't', 'i', 'o', 'n' };
static const symbol s_26[] = { 'e', 'n', 'c', 'e' };
static const symbol s_27[] = { 'a', 'n', 'c', 'e' };
static const symbol s_28[] = { 'a', 'b', 'l', 'e' };
static const symbol s_29[] = { 'e', 'n', 't' };
static const symbol s_30[] = { 'i', 'z', 'e' };
static const symbol s_31[] = { 'a', 't', 'e' };
static const symbol s_32[] = { 'a', 'l' };
static const symbol s_33[] = { 'f', 'u', 'l' };
static const symbol s_34[] = { 'o', 'u', 's' };
static const symbol s_35[] = { 'i', 'v', 'e' };
static const symbol s_36[] = { 'b', 'l', 'e' };
static const symbol s_37[] = { 'o', 'g' };
static const symbol s_38[] = { 'o', 'g' };
static const symbol s_39[] = { 'l', 'e', 's', 's' };
static const symbol s_40[] = { 't', 'i', 'o', 'n' };
static const symbol s_41[] = { 'a', 't', 'e' };
static const symbol s_42[] = { 'a', 'l' };
static const symbol s_43[] = { 'i', 'c' };
static const symbol s_44[] = { 'e', 'n' };
static const symbol s_45[] = { 'e', 'r' };
static const symbol s_46[] = { 'e', 'r', 'i' };
static const symbol s_47[] = { 'i', 'l', 'i' };
static const symbol s_48[] = { 'y' };

static const unsigned short a_0[] = {
    0x0004 , 0xC3C5 , 0x0004 , 0x0007 , 0x0000 , 0xA6A6 , 0xFFFF , 0x0000 ,
    0x93BF , 0xFFFE , 0xFFFD
};

static const unsigned short a_1[] = {
    0x0000 , 0x6F74 , 0x0004 , 0x0009 , 0x0000 , 0x0003 , 0xFFFF , S(6527),
    S(0072), 0x0000 , 0x2768 , 0xFFFE , 0x000D , 0x0000 , 0x2727 , 0xFFFE
};

static const unsigned short a_2[] = {
    0x0000 , 0x7561 , 0x0017 , 0x0000 , 0x001C , 0x0000 , 0x0022 , 0x0000 ,
    0x0027 , 0x0000 , 0x002C , 0x0000 , 0x0000 , 0x0031 , 0x0000 , 0x0000 ,
    0x0036 , 0x003B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0040 , 0x0000 ,
    0x0004 , 0xC001 , S(7372), S(6E65), 0x0000 , 0x0005 , 0xC001 , S(6D6F),
    S(756D), S(006E), 0x0000 , 0x0004 , 0xC001 , S(656D), S(6772), 0x0000 ,
    0x0004 , 0xC001 , S(6E65), S(7265), 0x0000 , 0x0004 , 0xC001 , S(746E),
    S(7265), 0x0000 , 0x0004 , 0xC001 , S(7461), S(7265), 0x0000 , 0x0004 ,
    0xC001 , S(6772), S(6E61), 0x0000 , 0x0003 , 0xC001 , S(7361), S(0074),
    0x0000 , 0x0006 , 0xC001 , S(696E), S(6576), S(7372)
};

static const unsigned short a_3[] = {
    0x0000 , 0x2773 , 0x0004 , 0x0008 , 0x0001 , 0x0002 , 0xFFFF , S(7327),
    0x0000 , 0x2727 , 0xFFFF
};

static const unsigned short a_4[] = {
    0x0000 , 0x7364 , 0x0012 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x001A , 0x001F , 0x0000 , 0x0002 , 0xFFFE , S(6569), 0x0000 , 0x0002 ,
    0xFFFB , S(696C), 0x0000 , 0x0003 , 0xFFFC , S(2765), S(0065), 0x0003 ,
    0x7565 , 0x0032 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001 ,
    0x0000 , 0xC001 , 0x0000 , 0x6973 , 0xFFFE , 0x0036 , 0x0000 , 0x7373 ,
    0xFFFF
};

static const unsigned short a_5[] = {
    0x0000 , 0x6363 , 0x0003 , 0x0000 , 0x7863 , 0x001B , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x001F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0023 , 0x0000 , 0x0002 , 0xFFFF , S(7573), 0x0000 ,
    0x0002 , 0xFFFF , S(7270), 0x0000 , 0x6565 , 0xFFFF
};

static const unsigned short a_6[] = {
    0x0000 , 0x796E , 0x000E , 0x0000 , 0x0000 , 0x0000 , 0x001D , 0x0000 ,
    0x002A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x656E ,
    0x0012 , 0x0016 , 0x0000 , 0x0002 , 0xFFFE , S(7665), 0x0000 , 0x6169 ,
    0x001A , 0xFFFE , 0x0000 , 0x6363 , 0xFFFE , 0x0000 , 0x7272 , 0x0020 ,
    0x0000 , 0x6165 , 0x0024 , 0x0027 , 0x0000 , 0x6565 , 0xFFFE , 0x0000 ,
    0x6868 , 0xFFFE , 0x0000 , 0x0002 , 0xFFFE , S(756F)
};

static const unsigned short a_7[] = {
    0x3FFF , 0x7964 , 0x0018 , 0x0000 , 0x0000 , 0x001F , 0x0023 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0027 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0070 ,
    0x0000 , 0x2765 , 0xFFFE , 0x001C , 0x0002 , 0x6565 , 0xFFFF , 0x0000 ,
    0x0002 , 0xFFFD , S(6E69), 0x0000 , 0x0002 , 0xFFFE , S(7465), 0x0000 ,
    0x2773 , 0xFFFE , 0x002B , 0x0000 , 0x6527 , 0xFFFE , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x006C , 0xFFFE , 0x0000 , 0x2765 , 0xFFFE , 0xFFFE ,
    0x0000 , 0x6C6C , 0x0073 , 0x0000 , 0x6467 , 0x0077 , 0x007B , 0x0000 ,
    0x2765 , 0xFFFE , 0x001C , 0x0000 , 0x0002 , 0xFFFE , S(6E69)
};

static const unsigned short a_8[] = {
    0x0003 , 0x7A62 , 0x001B , 0x0000 , 0x001E , 0x0000 , 0x0021 , 0x0024 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0027 , 0x002A , 0x002D , 0x0000 ,
    0x0030 , 0x0000 , 0x0033 , 0x0000 , 0x0036 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x003A , 0x0000 , 0x6262 , 0xFFFE , 0x0000 , 0x6464 ,
    0xFFFE , 0x0000 , 0x6666 , 0xFFFE , 0x0000 , 0x6767 , 0xFFFE , 0x0000 ,
    0x6262 , 0xFFFF , 0x0000 , 0x6D6D , 0xFFFE , 0x0000 , 0x6E6E , 0xFFFE ,
    0x0000 , 0x7070 , 0xFFFE , 0x0000 , 0x7272 , 0xFFFE , 0x0000 , 0x6174 ,
    0xFFFF , 0xFFFE , 0x0000 , 0x6969 , 0xFFFF
};

static const unsigned short a_9[] = {
    0x0000 , 0x7469 , 0x000E , 0x0000 , 0x0000 , 0x006B , 0x0074 , 0x0079 ,
    0x0000 , 0x0000 , 0x0000 , 0x0082 , 0x008E , 0x00B0 , 0x0000 , 0x7463 ,
    0x0022 , 0x0000 , 0x0000 , 0x0000 , 0x0029 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x002C , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x005A , 0x0000 , 0x6E6E , 0x0025 , 0x0000 , 0x6165 , 0xFFFD ,
    0xFFFE , 0x0000 , 0x6F6F , 0xFFF2 , 0x0010 , 0x7462 , 0x0041 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0044 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x004B ,
    0x0056 , 0x000C , 0x6161 , 0xFFFC , 0x0000 , 0x6175 , 0xFFF8 , 0x0048 ,
    0x0000 , 0x6666 , 0xFFF7 , 0x0000 , 0x7375 , 0x004F , 0x0053 , 0x0000 ,
    0x0002 , 0xFFF1 , S(656C), 0x0000 , 0x6F6F , 0xFFF6 , 0x0000 , 0x0002 ,
    0xFFFB , S(6E65), 0x0000 , 0x6969 , 0x005D , 0x0000 , 0x6C76 , 0x0061 ,
    0x0068 , 0x0000 , 0x6169 , 0xFFF8 , 0x0065 , 0x0000 , 0x6262 , 0xFFF4 ,
    0x0000 , 0x6969 , 0xFFF5 , 0x0000 , 0x0005 , 0x0071 , S(6974), S(6E6F),
    S(0061), 0x0001 , 0x6161 , 0xFFF9 , 0x0000 , 0x0004 , 0xFFF8 , S(6C61),
    S(7369), 0x0000 , 0x0004 , 0x007E , S(7461), S(6F69), 0x0007 , 0x0002 ,
    0xFFFA , S(7A69), 0x0000 , 0x656F , 0x0086 , 0x008A , 0x0000 , 0x0002 ,
    0xFFFA , S(7A69), 0x0000 , 0x0002 , 0xFFF9 , S(7461), 0x0000 , 0x0003 ,
    0x0093 , S(656E), S(0073), 0x0000 , 0x7365 , 0x00A4 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00A8 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00AC , 0x0000 , 0x0002 , 0xFFF5 , S(7669),
    0x0000 , 0x0002 , 0xFFF7 , S(7566), 0x0000 , 0x0002 , 0xFFF6 , S(756F),
    0x0000 , 0x0004 , 0xFFF3 , S(676F), S(7369)
};

static const unsigned short a_10[] = {
    0x0000 , 0x7365 , 0x0011 , 0x0000 , 0x0000 , 0x0000 , 0x0029 , 0x0000 ,
    0x0000 , 0x002E , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0044 , 0x0000 , 0x7A74 , 0x001A , 0x0000 , 0x001F , 0x0000 , 0x0000 ,
    0x0000 , 0x0024 , 0x0000 , 0x0003 , 0xFFFC , S(6369), S(0061), 0x0000 ,
    0x0003 , 0xFFFA , S(7461), S(0069), 0x0000 , 0x0003 , 0xFFFD , S(6C61),
    S(0069), 0x0000 , 0x0004 , 0xFFFC , S(6369), S(7469), 0x0000 , 0x6175 ,
    0x0032 , 0x0041 , 0x0000 , 0x636E , 0x0036 , 0x0039 , 0x0000 , 0x6969 ,
    0xFFFC , 0x0000 , 0x0003 , 0x003E , S(6974), S(006F), 0x0001 , 0x6161 ,
    0xFFFE , 0x0000 , 0x6666 , 0xFFFB , 0x0000 , 0x0003 , 0xFFFB , S(656E),
    S(0073)
};

static const unsigned short a_11[] = {
    0x0000 , 0x7463 , 0x0014 , 0x0000 , 0x0017 , 0x0000 , 0x0000 , 0x0000 ,
    0x0042 , 0x0000 , 0x0000 , 0x003F , 0x0046 , 0x004A , 0x0000 , 0x0000 ,
    0x0000 , 0x004E , 0x0051 , 0x0055 , 0x0000 , 0x6969 , 0xFFFF , 0x0000 ,
    0x7A63 , 0x0031 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0038 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x003F , 0x0000 , 0x0014 , 0x0000 , 0x0000 , 0x0000 ,
    0x0014 , 0x0000 , 0x6E6E , 0x0034 , 0x0000 , 0x6165 , 0xFFFF , 0xFFFF ,
    0x0000 , 0x6262 , 0x003B , 0x0000 , 0x6169 , 0xFFFF , 0xFFFF , 0x0000 ,
    0x6161 , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(7469), 0x0000 , 0x0002 ,
    0xFFFF , S(7369), 0x0000 , 0x0002 , 0xFFFE , S(6F69), 0x0000 , 0x6565 ,
    0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(756F), 0x0000 , 0x6E6E , 0x0058 ,
    0x0000 , 0x6165 , 0xFFFF , 0x005C , 0x0001 , 0x6D6D , 0x005F , 0x0001 ,
    0x6565 , 0xFFFF
};

static const unsigned short a_12[] = {
    0x0000 , 0x7364 , 0x0012 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0016 ,
    0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0x0020 , 0x0000 , 0x0000 , 0x0000 ,
    0x0023 , 0x0026 , 0x0000 , 0x0002 , 0xFFFD , S(6E27), 0x0000 , 0x6C72 ,
    0x001A , 0x001D , 0x0000 , 0x2727 , 0xFFFA , 0x0000 , 0x2727 , 0xFFFB ,
    0x0000 , 0x2727 , 0xFFFD , 0x0000 , 0x2727 , 0xFFFC , 0x0000 , 0x0004 ,
    0xFFFC , S(7227), S(756F)
};

static const unsigned short a_13[] = {
    0x0000 , 0x7561 , 0x0017 , 0x0025 , 0x002A , 0x0000 , 0x0030 , 0x0000 ,
    0x0035 , 0x003B , 0x0040 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0045 ,
    0x004A , 0x0000 , 0x0000 , 0x0000 , 0x004F , 0x0000 , 0x0063 , 0x0000 ,
    0x6E74 , 0x001B , 0x0020 , 0x0000 , 0x0003 , 0xC001 , S(6564), S(0073),
    0x0000 , 0x0003 , 0xC001 , S(616C), S(0073), 0x0000 , 0x0003 , 0xC001 ,
    S(6169), S(0073), 0x0000 , 0x0005 , 0xC001 , S(736F), S(6F6D), S(0073),
    0x0000 , 0x0004 , 0xFFFA , S(7261), S(796C), 0x0000 , 0x0005 , 0xFFFC ,
    S(6E65), S(6C74), S(0079), 0x0000 , 0x0003 , 0xC001 , S(776F), S(0065),
    0x0000 , 0x0003 , 0xFFFD , S(6C64), S(0079), 0x0000 , 0x0003 , 0xC001 ,
    S(7765), S(0073), 0x0000 , 0x0003 , 0xFFF9 , S(6C6E), S(0079), 0x0000 ,
    0x696B , 0x0053 , 0x0058 , 0x0000 , 0x0004 , 0xFFF8 , S(676E), S(796C),
    0x0000 , 0x6979 , 0x005C , 0xC001 , 0x0000 , 0x6573 , 0x0060 , 0xFFFF ,
    0x0000 , 0x7373 , 0xFFFE , 0x0000 , 0x0003 , 0xFFFB , S(6C67), S(0079)
};

static const unsigned char g_aeo[] = { 17, 64 };

static const unsigned char g_v[] = { 17, 65, 16, 1 };

static const unsigned char g_v_WXY[] = { 1, 17, 65, 208, 1 };

static const unsigned char g_valid_LI[] = { 55, 141, 2 };

static int r_shortv(struct kronuz_snowball_SN_env * z) {
    do {
        int v_1 = z->l - z->c;
        if (kronuz_snowball_out_grouping_b_U(z, g_v_WXY, 89, 121, 0)) goto lab0;
        if (kronuz_snowball_in_grouping_b_U(z, g_v, 97, 121, 0)) goto lab0;
        if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab0;
        break;
    lab0:
        z->c = z->l - v_1;
        if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
        if (kronuz_snowball_in_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
        if (z->c > z->lb) goto lab1;
        break;
    lab1:
        z->c = z->l - v_1;
        if (!(kronuz_snowball_eq_s_b(z, 4, s_0))) return 0;
    } while (0);
    return 1;
}

extern int kronuz_snowball_earlymodernenglish_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int b_Y_found;
    int i_p2;
    int i_p1;
    do {
        int v_1 = z->c;
        z->bra = z->c;
        if (z->c + 2 >= z->l || z->p[z->c + 2] >> 5 != 3 || !((42750482 >> (z->p[z->c + 2] & 0x1f)) & 1)) goto lab0;
        among_var = kronuz_snowball_find_among(z, a_13);
        if (!among_var) goto lab0;
        z->ket = z->c;
        if (z->c < z->l) goto lab0;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_1);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_2);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_3);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_4);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_5);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_6);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_7);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_8);
                    if (ret < 0) return ret;
                }
                break;
        }
        break;
    lab0:
        z->c = v_1;
        {
            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
            if (ret < 0) goto lab2;
            z->c = ret;
        }
        goto lab1;
    lab2:
        break;
    lab1:
        z->c = v_1;
        {
            int v_2 = z->c;
            while (1) {
                int v_3 = z->c;
                z->bra = z->c;
                among_var = kronuz_snowball_find_among(z, a_0);
                z->ket = z->c;
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_9);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_10);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_11);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {
                            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                            if (ret < 0) goto lab5;
                            z->c = ret;
                        }
                        break;
                }
                continue;
            lab5:
                z->c = v_3;
                break;
            }
            z->c = v_2;
        }
        b_Y_found = 0;
        {
            int v_4 = z->c;
            z->bra = z->c;
            if (z->c == z->l || z->p[z->c] != '\'') goto lab6;
            z->c++;
            z->ket = z->c;
            {
                int ret = kronuz_snowball_slice_del(z);
                if (ret < 0) return ret;
            }
        lab6:
            z->c = v_4;
        }
        {
            int v_5 = z->c;
            z->bra = z->c;
            if (z->c == z->l || z->p[z->c] != 'y') goto lab7;
            z->c++;
            z->ket = z->c;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_12);
                if (ret < 0) return ret;
            }
            b_Y_found = 1;
        lab7:
            z->c = v_5;
        }
        {
            int v_6 = z->c;
            while (1) {
                int v_7 = z->c;
                while (1) {
                    int v_8 = z->c;
                    if (kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 0)) goto lab10;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 'y') goto lab10;
                    z->c++;
                    z->ket = z->c;
                    z->c = v_8;
                    break;
                lab10:
                    z->c = v_8;
                    {
                        int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                        if (ret < 0) goto lab9;
                        z->c = ret;
                    }
                }
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                    if (ret < 0) return ret;
                }
                b_Y_found = 1;
                continue;
            lab9:
                z->c = v_7;
                break;
            }
            z->c = v_6;
        }
        {
            int v_9 = z->c;
            z->bra = z->c;
            if (z->c + 1 >= z->l || (z->p[z->c + 1] != 39 && z->p[z->c + 1] != 104)) goto lab11;
            among_var = kronuz_snowball_find_among(z, a_1);
            if (!among_var) goto lab11;
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_14);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    if (z->c >= z->l) goto lab11;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab11:
            z->c = v_9;
        }
        i_p1 = z->l;
        i_p2 = z->l;
        {
            int v_10 = z->c;
            do {
                int v_11 = z->c;
                if (z->c + 3 >= z->l || z->p[z->c + 3] >> 5 != 3 || !((5513250 >> (z->p[z->c + 3] & 0x1f)) & 1)) goto lab14;
                if (!kronuz_snowball_find_among(z, a_2)) goto lab14;
                break;
            lab14:
                z->c = v_11;
                {
                    int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 121, 1);
                    if (ret < 0) goto lab13;
                    z->c += ret;
                }
                {
                    int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 1);
                    if (ret < 0) goto lab13;
                    z->c += ret;
                }
            } while (0);
            i_p1 = z->c;
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 121, 1);
                if (ret < 0) goto lab13;
                z->c += ret;
            }
            {
                int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 1);
                if (ret < 0) goto lab13;
                z->c += ret;
            }
            i_p2 = z->c;
        lab13:
            z->c = v_10;
        }
        z->lb = z->c; z->c = z->l;
        {
            int v_12 = z->l - z->c;
            {
                int v_13 = z->l - z->c;
                z->ket = z->c;
                if (z->c <= z->lb || (z->p[z->c - 1] != 39 && z->p[z->c - 1] != 115)) { z->c = z->l - v_13; goto lab16; }
                if (!kronuz_snowball_find_among_b(z, a_3)) { z->c = z->l - v_13; goto lab16; }
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            lab16:
                ;
            }
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((786480 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab15;
            among_var = kronuz_snowball_find_among_b(z, a_4);
            if (!among_var) goto lab15;
            z->bra = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_15);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    do {
                        int v_14 = z->l - z->c;
                        {
                            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 2);
                            if (ret < 0) goto lab17;
                            z->c = ret;
                        }
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_16);
                            if (ret < 0) return ret;
                        }
                        break;
                    lab17:
                        z->c = z->l - v_14;
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_17);
                            if (ret < 0) return ret;
                        }
                    } while (0);
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                        if (ret < 0) goto lab15;
                        z->c = ret;
                    }
                    {
                        int ret = kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 1);
                        if (ret < 0) goto lab15;
                        z->c -= ret;
                    }
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_18);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    if (i_p1 > z->c) goto lab15;
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_19);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab15:
            z->c = z->l - v_12;
        }
        {
            int v_15 = z->l - z->c;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((34603408 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = -1; else
            among_var = kronuz_snowball_find_among_b(z, a_7);
            z->bra = z->c;
            do {
                int v_16 = z->l - z->c;
                switch (among_var) {
                    case 1:
                        {
                            int v_17 = z->l - z->c;
                            if (i_p1 > z->c) goto lab20;
                            do {
                                int v_18 = z->l - z->c;
                                if (z->c - 2 <= z->lb || z->p[z->c - 1] != 99) goto lab21;
                                if (!kronuz_snowball_find_among_b(z, a_5)) goto lab21;
                                if (z->c > z->lb) goto lab21;
                                break;
                            lab21:
                                z->c = z->l - v_18;
                                {
                                    int ret = kronuz_snowball_slice_from_s(z, 2, s_20);
                                    if (ret < 0) return ret;
                                }
                            } while (0);
                        lab20:
                            z->c = z->l - v_17;
                        }
                        break;
                    case 2:
                        goto lab19;
                        break;
                    case 3:
                        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((34881536 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab19;
                        among_var = kronuz_snowball_find_among_b(z, a_6);
                        if (!among_var) goto lab19;
                        switch (among_var) {
                            case 1:
                                {
                                    int v_19 = z->l - z->c;
                                    if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab19;
                                    if (z->c > z->lb) goto lab19;
                                    z->c = z->l - v_19;
                                }
                                z->bra = z->c;
                                {
                                    int ret = kronuz_snowball_slice_from_s(z, 2, s_21);
                                    if (ret < 0) return ret;
                                }
                                break;
                            case 2:
                                if (z->c > z->lb) goto lab19;
                                break;
                        }
                        break;
                }
                break;
            lab19:
                z->c = z->l - v_16;
                {
                    int v_20 = z->l - z->c;
                    {
                        int ret = kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 1);
                        if (ret < 0) goto lab18;
                        z->c -= ret;
                    }
                    z->c = z->l - v_20;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                z->ket = z->c;
                z->bra = z->c;
                {
                    int v_21 = z->l - z->c;
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68514004 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = 3; else
                    among_var = kronuz_snowball_find_among_b(z, a_8);
                    switch (among_var) {
                        case 1:
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 1, s_22);
                                if (ret < 0) return ret;
                            }
                            goto lab18;
                            break;
                        case 2:
                            {
                                int v_22 = z->l - z->c;
                                if (kronuz_snowball_in_grouping_b_U(z, g_aeo, 97, 111, 0)) goto lab22;
                                if (z->c > z->lb) goto lab22;
                                goto lab18;
                            lab22:
                                z->c = z->l - v_22;
                            }
                            break;
                        case 3:
                            if (z->c != i_p1) goto lab18;
                            {
                                int v_23 = z->l - z->c;
                                if (!r_shortv(z)) goto lab18;
                                z->c = z->l - v_23;
                            }
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 1, s_23);
                                if (ret < 0) return ret;
                            }
                            goto lab18;
                            break;
                    }
                    z->c = z->l - v_21;
                }
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                    if (ret < 0) goto lab18;
                    z->c = ret;
                }
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            } while (0);
        lab18:
            z->c = z->l - v_15;
        }
        {
            int v_24 = z->l - z->c;
            z->ket = z->c;
            do {
                if (z->c <= z->lb || z->p[z->c - 1] != 'y') goto lab24;
                z->c--;
                break;
            lab24:
                if (z->c <= z->lb || z->p[z->c - 1] != 'Y') goto lab23;
                z->c--;
            } while (0);
            z->bra = z->c;
            if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab23;
            if (z->c <= z->lb) goto lab23;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_24);
                if (ret < 0) return ret;
            }
        lab23:
            z->c = z->l - v_24;
        }
        {
            int v_25 = z->l - z->c;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1864192 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab25;
            among_var = kronuz_snowball_find_among_b(z, a_9);
            if (!among_var) goto lab25;
            z->bra = z->c;
            if (i_p1 > z->c) goto lab25;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_25);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_26);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_27);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_28);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_29);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_30);
                        if (ret < 0) return ret;
                    }
                    break;
                case 7:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_31);
                        if (ret < 0) return ret;
                    }
                    break;
                case 8:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_32);
                        if (ret < 0) return ret;
                    }
                    break;
                case 9:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_33);
                        if (ret < 0) return ret;
                    }
                    break;
                case 10:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_34);
                        if (ret < 0) return ret;
                    }
                    break;
                case 11:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_35);
                        if (ret < 0) return ret;
                    }
                    break;
                case 12:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_36);
                        if (ret < 0) return ret;
                    }
                    break;
                case 13:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_37);
                        if (ret < 0) return ret;
                    }
                    break;
                case 14:
                    if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab25;
                    z->c--;
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_38);
                        if (ret < 0) return ret;
                    }
                    break;
                case 15:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_39);
                        if (ret < 0) return ret;
                    }
                    break;
                case 16:
                    if (kronuz_snowball_in_grouping_b_U(z, g_valid_LI, 99, 116, 0)) goto lab25;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab25:
            z->c = z->l - v_25;
        }
        {
            int v_26 = z->l - z->c;
            z->ket = z->c;
            if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((528928 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab26;
            among_var = kronuz_snowball_find_among_b(z, a_10);
            if (!among_var) goto lab26;
            z->bra = z->c;
            if (i_p1 > z->c) goto lab26;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 4, s_40);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_41);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_42);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_43);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    if (i_p2 > z->c) goto lab26;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab26:
            z->c = z->l - v_26;
        }
        {
            int v_27 = z->l - z->c;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1864232 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab27;
            among_var = kronuz_snowball_find_among_b(z, a_11);
            if (!among_var) goto lab27;
            z->bra = z->c;
            if (i_p2 > z->c) goto lab27;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    do {
                        if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab28;
                        z->c--;
                        break;
                    lab28:
                        if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab27;
                        z->c--;
                    } while (0);
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab27:
            z->c = z->l - v_27;
        }
        {
            int v_28 = z->l - z->c;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((807472 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab29;
            among_var = kronuz_snowball_find_among_b(z, a_12);
            if (!among_var) goto lab29;
            z->bra = z->c;
            switch (among_var) {
                case 1:
                    do {
                        if (i_p2 > z->c) goto lab30;
                        break;
                    lab30:
                        if (i_p1 > z->c) goto lab29;
                        {
                            int v_29 = z->l - z->c;
                            if (!r_shortv(z)) goto lab31;
                            goto lab29;
                        lab31:
                            z->c = z->l - v_29;
                        }
                    } while (0);
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    if (i_p2 > z->c) goto lab29;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab29;
                    z->c--;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_44);
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_45);
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_46);
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 3, s_47);
                        if (ret < 0) return ret;
                    }
                    break;
            }
        lab29:
            z->c = z->l - v_28;
        }
        z->c = z->lb;
        {
            int v_30 = z->c;
            if (!b_Y_found) goto lab32;
            while (1) {
                int v_31 = z->c;
                while (1) {
                    int v_32 = z->c;
                    z->bra = z->c;
                    if (z->c == z->l || z->p[z->c] != 'Y') goto lab34;
                    z->c++;
                    z->ket = z->c;
                    z->c = v_32;
                    break;
                lab34:
                    z->c = v_32;
                    {
                        int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                        if (ret < 0) goto lab33;
                        z->c = ret;
                    }
                }
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_48);
                    if (ret < 0) return ret;
                }
                continue;
            lab33:
                z->c = v_31;
                break;
            }
        lab32:
            z->c = v_30;
        }
    } while (0);
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_earlymodernenglish_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
