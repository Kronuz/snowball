/* Generated from estonian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_estonian.h"

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
extern int kronuz_snowball_estonian_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_LONGV(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'j', 'o', 'o' };
static const symbol s_1[] = { 's', 'a', 'a' };
static const symbol s_2[] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_3[] = { 'k', 'e', 'e', 's', 'i' };
static const symbol s_4[] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_5[] = { 'l', 0xC3, 0xB5, 'i' };
static const symbol s_6[] = { 'l', 'o', 'o' };
static const symbol s_7[] = { 'k', 0xC3, 0xA4, 'i', 's', 'i' };
static const symbol s_8[] = { 's', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_9[] = { 't', 'o', 'o' };
static const symbol s_10[] = { 'v', 0xC3, 0xB5, 'i', 's', 'i' };
static const symbol s_11[] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a' };
static const symbol s_12[] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 's', 'i' };
static const symbol s_13[] = { 'l', 'u', 'g', 'e' };
static const symbol s_14[] = { 'p', 0xC3, 0xB5, 'd', 'e' };
static const symbol s_15[] = { 'l', 'a', 'd', 'u' };
static const symbol s_16[] = { 't', 'e', 'g', 'i' };
static const symbol s_17[] = { 'n', 0xC3, 0xA4, 'g', 'i' };
static const symbol s_18[] = { 'a' };
static const symbol s_19[] = { 'l', 'a', 's', 'e' };
static const symbol s_20[] = { 'm', 'i', 's', 'e' };
static const symbol s_21[] = { 'l', 'i', 's', 'e' };
static const symbol s_22[] = { 'i', 'k', 'u' };
static const symbol s_23[] = { 'e' };
static const symbol s_24[] = { 't' };
static const symbol s_25[] = { 'k' };
static const symbol s_26[] = { 'p' };
static const symbol s_27[] = { 't' };

static const unsigned short a_0[] = {
    0x0000 , 0x6969 , 0x0003 , 0x0000 , 0x676B , 0xFFFF , 0xFFFE
};

static const unsigned short a_1[] = {
    0x0000 , 0x7361 , 0x0015 , 0xFFFD , 0x0000 , 0x001D , 0x0026 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0043 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0047 , 0x0000 , 0x6474 , 0xFFFD ,
    0x0019 , 0x0000 , 0x0002 , 0xFFFF , S(616D), 0x0000 , 0x0003 , 0x0022 ,
    S(736B), S(0069), 0x0001 , 0x0002 , 0xFFFF , S(756E), 0x0000 , 0x746D ,
    0x0030 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0037 , 0x003F ,
    0x0003 , 0x0002 , 0x0034 , S(6973), 0x0001 , 0x6B6B , 0x0022 , 0x0000 ,
    0x0002 , 0x003B , S(6B61), 0x0002 , 0x6474 , 0xFFFF , 0xFFFF , 0x0000 ,
    0x0002 , 0x0034 , S(6973), 0x0003 , 0x0002 , 0x0034 , S(6973), 0x0000 ,
    0x0002 , 0x004B , S(6B61), 0x0000 , 0x6474 , 0xFFFF , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0xBC61 , 0x005E , 0x0000 , 0x0000 , 0x0000 , 0x0061 , 0x0000 ,
    0x0000 , 0x0000 , 0x0064 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0067 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006A , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006D , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0072 , 0x0077 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x007C , 0x0000 , 0x6161 ,
    0xC001 , 0x0000 , 0x6565 , 0xC001 , 0x0000 , 0x6969 , 0xC001 , 0x0000 ,
    0x6F6F , 0xC001 , 0x0000 , 0x7575 , 0xC001 , 0x0000 , 0x0003 , 0xC001 ,
    S(A4C3), S(00C3), 0x0000 , 0x0003 , 0xC001 , S(B5C3), S(00C3), 0x0000 ,
    0x0003 , 0xC001 , S(B6C3), S(00C3), 0x0000 , 0x0003 , 0xC001 , S(BCC3),
    S(00C3)
};

static const unsigned short a_3[] = {
    0x0000 , 0x7465 , 0x0012 , 0x0000 , 0x0000 , 0x0000 , 0x0028 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0028 , 0x0000 , 0x6E73 , 0x0016 , 0x0021 , 0x0000 , 0x6169 ,
    0x001A , 0x001D , 0x0000 , 0x6C6C , 0xFFFF , 0x0000 , 0x6C6D , 0xFFFD ,
    0xFFFE , 0x0000 , 0x7373 , 0x0024 , 0x0000 , 0x6169 , 0x001A , 0x001D ,
    0x0000 , 0x7373 , 0x0024
};

static const unsigned short a_4[] = {
    0x0000 , 0x7461 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x001A , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0021 , 0x0024 , 0x0000 , 0x6774 ,
    0xFFFF , 0xFFFF , 0x0000 , 0x6C73 , 0xFFFF , 0x001E , 0x0000 , 0x7373 ,
    0xFFFF , 0x0001 , 0x6B6B , 0xFFFF , 0x0002 , 0x6C73 , 0xFFFF , 0xFFFF
};

static const unsigned short a_5[] = {
    0x0002 , 0x7374 , 0x0004 , 0xC001 , 0x0000 , 0x6169 , 0x0008 , 0x000B ,
    0x0000 , 0x6C6C , 0xFFFF , 0x0000 , 0x6C6D , 0xFFFF , 0xFFFF
};

static const unsigned short a_6[] = {
    0x0000 , 0x6465 , 0x0004 , 0x0008 , 0x0004 , 0x0002 , 0xFFFE , S(6973),
    0x0000 , 0x7464 , 0x001B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0020 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFD , 0x0004 , 0x0004 , 0xFFFF , S(6B69), S(756B),
    0x0000 , 0x696B , 0xFFFF , 0x0024 , 0x0000 , 0x6969 , 0xFFFF
};

static const unsigned short a_7[] = {
    0x0000 , 0x6175 , 0x0004 , 0x0007 , 0x0000 , 0x7676 , 0xC001 , 0x0000 ,
    0x7464 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xC001
};

static const unsigned short a_8[] = {
    0x0000 , 0x746B , 0x000C , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x000F ,
    0x0000 , 0x0000 , 0x0000 , 0x0012 , 0x0000 , 0x6B6B , 0xFFFF , 0x0000 ,
    0x7070 , 0xFFFE , 0x0000 , 0x7474 , 0xFFFD
};

static const unsigned short a_9[] = {
    0x0000 , 0x6D61 , 0x000F , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0012 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 ,
    0x6D6D , 0xFFFE , 0x0000 , 0x0002 , 0xFFFF , S(616D)
};

static const unsigned short a_10[] = {
    0x0000 , 0x766A , 0x000F , 0x0119 , 0x01B4 , 0x0352 , 0x039F , 0x0000 ,
    0x03F5 , 0x0000 , 0x0000 , 0x0431 , 0x050A , 0x0000 , 0x0622 , 0x0000 ,
    0xC36F , 0x0066 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0094 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x009D , 0x0000 , 0x6F6F ,
    0x0069 , 0x0000 , 0x7662 , 0xFFFF , 0x0000 , 0x0080 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0085 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x008D , 0x0000 , 0x0090 ,
    0x0001 , 0x0004 , 0xFFFF , S(6B61), S(6573), 0x0000 , 0x6165 , 0x0089 ,
    0xFFFF , 0x0001 , 0x0002 , 0xFFFF , S(6174), 0x0000 , 0x6565 , 0xFFFF ,
    0x0000 , 0x0002 , 0xFFFF , S(6461), 0x0000 , 0x0002 , 0x0098 , S(6175),
    0x0001 , 0x0003 , 0xFFFF , S(736B), S(0065), 0x0000 , 0xA4B5 , 0x00A1 ,
    0x0103 , 0x0000 , 0x69C3 , 0x00A5 , 0x00BB , 0x000C , 0x7464 , 0xFFF4 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00B8 , 0xFFF4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B8 ,
    0x0000 , 0x6565 , 0xFFF4 , 0x0000 , 0xA4A4 , 0x00BE , 0x0000 , 0x7662 ,
    0xFFF4 , 0x0000 , 0x00D5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x00DE , 0x0000 , 0x00F7 , 0xFFF4 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00B8 , 0x0000 , 0x00FF , 0x000C , 0x6169 , 0x00D9 ,
    0xFFF4 , 0x000C , 0x0003 , 0xFFF4 , S(736B), S(0065), 0x0000 , 0x7373 ,
    0x00E1 , 0x000C , 0x6969 , 0x00E4 , 0x0000 , 0x7464 , 0xFFF4 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B8 ,
    0xFFF4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00B8 , 0x0000 ,
    0x6165 , 0x00FB , 0xFFF4 , 0x000C , 0x0002 , 0xFFF4 , S(6174), 0x0000 ,
    0x0002 , 0xFFF4 , S(6461), 0x0000 , 0x6969 , 0x0106 , 0x0001 , 0x7464 ,
    0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x008D , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x008D , 0x0000 , 0x65C3 , 0x011D , 0x0168 , 0x0000 , 0x6565 , 0x0120 ,
    0x0000 , 0x7662 , 0xFFFC , 0x0000 , 0x0137 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x013C , 0x0000 , 0x0158 , 0xFFFC , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xFFFC , 0x0160 , 0x0000 , 0x0164 , 0x0004 ,
    0x0004 , 0xFFFC , S(6B61), S(6573), 0x0000 , 0x7373 , 0x013F , 0x0004 ,
    0x6969 , 0x0142 , 0x0000 , 0x7464 , 0xFFFC , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0155 , 0xFFFC , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0155 , 0x0000 , 0x6565 , 0xFFFC ,
    0x0000 , 0x6165 , 0x015C , 0xFFFC , 0x0004 , 0x0002 , 0xFFFC , S(6174),
    0x0000 , 0x6165 , 0xFFFC , 0xFFFC , 0x0000 , 0x0002 , 0xFFFC , S(6461),
    0x0000 , 0x0002 , 0x016C , S(69A4), 0x0000 , 0x7661 , 0x0184 , 0xFFF8 ,
    0x0000 , 0x0189 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x018C , 0x0000 , 0x01A8 , 0xFFF8 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xFFF8 , 0x01A5 , 0x0000 , 0x01B0 , 0x0008 , 0x0003 , 0xFFF8 , S(736B),
    S(0065), 0x0008 , 0x6969 , 0xFFF8 , 0x0000 , 0x7373 , 0x018F , 0x0008 ,
    0x6969 , 0x0192 , 0x0000 , 0x7464 , 0xFFF8 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01A5 , 0xFFF8 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x01A5 , 0x0000 , 0x6565 , 0xFFF8 ,
    0x0000 , 0x6165 , 0x01AC , 0xFFF8 , 0x0008 , 0x0002 , 0xFFF8 , S(6174),
    0x0000 , 0x0002 , 0xFFF8 , S(6461), 0x0000 , 0xC361 , 0x0219 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0253 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x02D0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x02D9 , 0x0000 , 0x6F6F , 0x021C , 0x0000 , 0x7662 , 0xFFF0 , 0x0000 ,
    0xFFF0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0233 ,
    0x0000 , 0x024C , 0xFFF0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x024C , 0x0000 , 0x024F , 0x0000 , 0x7373 , 0x0236 , 0x0010 , 0x6969 ,
    0x0239 , 0x0000 , 0x7464 , 0xFFF0 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x024C , 0xFFF0 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x024C , 0x0000 , 0x6565 , 0xFFF0 , 0x0000 ,
    0x0002 , 0xFFF0 , S(6461), 0x0000 , 0x656F , 0x0257 , 0x028E , 0x0000 ,
    0x7662 , 0xFFF2 , 0x0000 , 0xFFF2 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x026E , 0x0000 , 0x0287 , 0xFFF2 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0287 , 0x0000 , 0x028A , 0x0000 , 0x7373 ,
    0x0271 , 0x000E , 0x6969 , 0x0274 , 0x0000 , 0x7464 , 0xFFF2 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0287 ,
    0xFFF2 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0287 , 0x0000 ,
    0x6565 , 0xFFF2 , 0x0000 , 0x0002 , 0xFFF2 , S(6461), 0x0000 , 0x7662 ,
    0xFFF9 , 0x0000 , 0x02A5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x02A8 , 0x0000 , 0x02C4 , 0xFFF9 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x02C1 , 0x0000 , 0x02CC , 0x0007 , 0x6969 , 0xFFF9 ,
    0x0000 , 0x7373 , 0x02AB , 0x0007 , 0x6969 , 0x02AE , 0x0000 , 0x7464 ,
    0xFFF9 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x02C1 , 0xFFF9 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x02C1 , 0x0000 , 0x6565 , 0xFFF9 , 0x0000 , 0x6165 , 0x02C8 , 0xFFF9 ,
    0x0007 , 0x0002 , 0xFFF9 , S(6174), 0x0000 , 0x0002 , 0xFFF9 , S(6461),
    0x0000 , 0x0002 , 0x02D4 , S(6175), 0x0007 , 0x0003 , 0xFFF9 , S(736B),
    S(0065), 0x0000 , 0xBCB5 , 0x02E3 , 0x02FC , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0348 , 0x0000 , 0x6969 , 0x02E6 , 0x0006 , 0x7464 ,
    0xFFFA , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x02F9 , 0xFFFA , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x02F9 , 0x0000 , 0x6565 , 0xFFFA , 0x0000 , 0x0002 , 0x0300 , S(B6C3),
    0x0000 , 0x7662 , 0xFFFB , 0x0000 , 0x0317 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0320 , 0x0000 , 0x033C , 0xFFFB , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0339 , 0x0000 , 0x0344 , 0x0005 ,
    0x6169 , 0x031B , 0xFFFB , 0x0000 , 0x0003 , 0xFFFB , S(736B), S(0065),
    0x0000 , 0x7373 , 0x0323 , 0x0005 , 0x6969 , 0x0326 , 0x0000 , 0x7464 ,
    0xFFFB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0339 , 0xFFFB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0339 , 0x0000 , 0x6565 , 0xFFFB , 0x0000 , 0x6165 , 0x0340 , 0xFFFB ,
    0x0005 , 0x0002 , 0xFFFB , S(6174), 0x0000 , 0x0002 , 0xFFFB , S(6461),
    0x0000 , 0x0003 , 0x034D , S(BCC3), S(0061), 0x0005 , 0x0003 , 0xFFFB ,
    S(736B), S(0065), 0x0000 , 0x0004 , 0x0357 , S(BCC3), S(BCC3), 0x0000 ,
    0x7661 , 0x036F , 0xFFF3 , 0x0000 , 0x0374 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0377 , 0x0000 , 0x0393 , 0xFFF3 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xFFF3 , 0x0390 , 0x0000 , 0x039B , 0x000D ,
    0x0003 , 0xFFF3 , S(736B), S(0065), 0x000D , 0x6969 , 0xFFF3 , 0x0000 ,
    0x7373 , 0x037A , 0x000D , 0x6969 , 0x037D , 0x0000 , 0x7464 , 0xFFF3 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0390 , 0xFFF3 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0390 ,
    0x0000 , 0x6565 , 0xFFF3 , 0x0000 , 0x6165 , 0x0397 , 0xFFF3 , 0x000D ,
    0x0002 , 0xFFF3 , S(6174), 0x0000 , 0x0002 , 0xFFF3 , S(6461), 0x0000 ,
    0x0002 , 0x03A3 , S(A4C3), 0x0000 , 0x6865 , 0x03A9 , 0x0000 , 0x03E0 ,
    0x03E9 , 0x0000 , 0x7662 , 0xFFEE , 0x0000 , 0xFFEE , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x03C0 , 0x0000 , 0x03D9 , 0xFFEE ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x03D9 , 0x0000 , 0x03DC ,
    0x0000 , 0x7373 , 0x03C3 , 0x0012 , 0x6969 , 0x03C6 , 0x0000 , 0x7464 ,
    0xFFEE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x03D9 , 0xFFEE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x03D9 , 0x0000 , 0x6565 , 0xFFEE , 0x0000 , 0x0002 , 0xFFEE , S(6461),
    0x0000 , 0x0003 , 0x03E5 , S(6D65), S(0061), 0x0012 , 0x0002 , 0xFFEE ,
    S(6174), 0x0000 , 0x6174 , 0x03ED , 0x03F2 , 0x0012 , 0x0003 , 0xFFEE ,
    S(736B), S(0065), 0x0000 , 0x6969 , 0xFFEE , 0x0000 , 0x0003 , 0x03FA ,
    S(B5C3), S(0065), 0x0000 , 0x7662 , 0xFFF1 , 0x0000 , 0xFFF1 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0411 , 0x0000 , 0x042A ,
    0xFFF1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x042A , 0x0000 ,
    0x042D , 0x0000 , 0x7373 , 0x0414 , 0x000F , 0x6969 , 0x0417 , 0x0000 ,
    0x7464 , 0xFFF1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x042A , 0xFFF1 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x042A , 0x0000 , 0x6565 , 0xFFF1 , 0x0000 , 0x0002 , 0xFFF1 ,
    S(6461), 0x0000 , 0x61C3 , 0x0435 , 0x0494 , 0x0000 , 0x6169 , 0x0439 ,
    0x0481 , 0x0000 , 0x7662 , 0xFFFE , 0x0000 , 0x0450 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0459 , 0x0000 , 0x0475 , 0xFFFE ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0472 , 0x0000 , 0x047D ,
    0x0002 , 0x6169 , 0x0454 , 0xFFFE , 0x0002 , 0x0003 , 0xFFFE , S(736B),
    S(0065), 0x0000 , 0x7373 , 0x045C , 0x0002 , 0x6969 , 0x045F , 0x0000 ,
    0x7464 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0472 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0472 , 0x0000 , 0x6565 , 0xFFFE , 0x0000 , 0x6165 , 0x0479 ,
    0xFFFE , 0x0002 , 0x0002 , 0xFFFE , S(6174), 0x0000 , 0x0002 , 0xFFFE ,
    S(6461), 0x0002 , 0x7464 , 0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0472 , 0xFFFE , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0472 , 0x0000 , 0xBCB5 , 0x049E , 0x04B7 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0500 , 0x0000 , 0x6969 ,
    0x04A1 , 0x0009 , 0x7464 , 0xFFF7 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04B4 , 0xFFF7 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x04B4 , 0x0000 , 0x6565 , 0xFFF7 , 0x0000 ,
    0x0002 , 0x04BB , S(B6C3), 0x0000 , 0x7662 , 0xFFF7 , 0x0000 , 0x04D2 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04DB , 0x0000 ,
    0x04F4 , 0xFFF7 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04B4 ,
    0x0000 , 0x04FC , 0x0009 , 0x6169 , 0x04D6 , 0xFFF7 , 0x0000 , 0x0003 ,
    0xFFF7 , S(736B), S(0065), 0x0000 , 0x7373 , 0x04DE , 0x0009 , 0x6969 ,
    0x04E1 , 0x0000 , 0x7464 , 0xFFF7 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x04B4 , 0xFFF7 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x04B4 , 0x0000 , 0x6165 , 0x04F8 , 0xFFF7 ,
    0x0009 , 0x0002 , 0xFFF7 , S(6174), 0x0000 , 0x0002 , 0xFFF7 , S(6461),
    0x0000 , 0x0003 , 0x0505 , S(BCC3), S(0061), 0x0009 , 0x0003 , 0xFFF7 ,
    S(736B), S(0065), 0x0000 , 0xC365 , 0x056B , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x05BD , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0602 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x060B , 0x0000 , 0x6865 , 0x0571 , 0x0000 , 0x05A8 ,
    0x05B1 , 0x0000 , 0x7662 , 0xFFEF , 0x0000 , 0xFFEF , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0588 , 0x0000 , 0x05A1 , 0xFFEF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x05A1 , 0x0000 , 0x05A4 ,
    0x0000 , 0x7373 , 0x058B , 0x0011 , 0x6969 , 0x058E , 0x0000 , 0x7464 ,
    0xFFEF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x05A1 , 0xFFEF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x05A1 , 0x0000 , 0x6565 , 0xFFEF , 0x0000 , 0x0002 , 0xFFEF , S(6461),
    0x0000 , 0x0003 , 0x05AD , S(6D65), S(0061), 0x0011 , 0x0002 , 0xFFEF ,
    S(6174), 0x0000 , 0x6174 , 0x05B5 , 0x05BA , 0x0011 , 0x0003 , 0xFFEF ,
    S(736B), S(0065), 0x0000 , 0x6969 , 0xFFEF , 0x0000 , 0x6F6F , 0x05C0 ,
    0x0000 , 0x7662 , 0xFFF6 , 0x0000 , 0x05D7 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x05DA , 0x0000 , 0x05F6 , 0xFFF6 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x05F3 , 0x0000 , 0x05FE , 0x000A ,
    0x6969 , 0xFFF6 , 0x0000 , 0x7373 , 0x05DD , 0x000A , 0x6969 , 0x05E0 ,
    0x0000 , 0x7464 , 0xFFF6 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x05F3 , 0xFFF6 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x05F3 , 0x0000 , 0x6565 , 0xFFF6 , 0x0000 , 0x6165 ,
    0x05FA , 0xFFF6 , 0x000A , 0x0002 , 0xFFF6 , S(6174), 0x0000 , 0x0002 ,
    0xFFF6 , S(6461), 0x0000 , 0x0002 , 0x0606 , S(6175), 0x000A , 0x0003 ,
    0xFFF6 , S(736B), S(0065), 0x0000 , 0x0002 , 0x060F , S(69B5), 0x000A ,
    0x7464 , 0xFFF6 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x05F3 , 0xFFF6 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x05F3 , 0x0000 , 0x69C3 , 0x0626 , 0x067E , 0x0000 , 0x6969 ,
    0x0629 , 0x0000 , 0x7661 , 0x0641 , 0xFFFD , 0x0000 , 0x0646 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0649 , 0x0000 , 0x0665 ,
    0xFFFD , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x066D , 0x0662 , 0x0000 ,
    0x067A , 0x0003 , 0x0003 , 0xFFFD , S(736B), S(0065), 0x0003 , 0x6969 ,
    0xFFFD , 0x0000 , 0x7373 , 0x064C , 0x0003 , 0x6969 , 0x064F , 0x0000 ,
    0x7464 , 0xFFFD , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0662 , 0xFFFD , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0662 , 0x0000 , 0x6565 , 0xFFFD , 0x0000 , 0x6165 , 0x0669 ,
    0xFFFD , 0x0003 , 0x0002 , 0xFFFD , S(6174), 0x0000 , 0x6969 , 0x0670 ,
    0x0000 , 0x746D , 0x0662 , 0xFFFD , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0662 , 0x0000 , 0x0002 , 0xFFFD , S(6461), 0x0000 , 0x0002 ,
    0x0682 , S(69B5), 0x0000 , 0x7662 , 0xFFF5 , 0x0000 , 0x0699 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x06A2 , 0x0000 , 0x06BE ,
    0xFFF5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF5 , 0x06BB , 0x0000 ,
    0x06C6 , 0x000B , 0x6169 , 0x069D , 0xFFF5 , 0x000B , 0x0003 , 0xFFF5 ,
    S(736B), S(0065), 0x0000 , 0x7373 , 0x06A5 , 0x000B , 0x6969 , 0x06A8 ,
    0x0000 , 0x7464 , 0xFFF5 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x06BB , 0xFFF5 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x06BB , 0x0000 , 0x6565 , 0xFFF5 , 0x0000 , 0x6165 ,
    0x06C2 , 0xFFF5 , 0x000B , 0x0002 , 0xFFF5 , S(6174), 0x0000 , 0x0002 ,
    0xFFF5 , S(6461)
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_RV[] = { 1, 0, 0, 0, 0, 0, 0, 68, 4, 65 };

static const unsigned char g_KI[] = { 117, 66, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 16 };

static const unsigned char g_GI[] = { 21, 123, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static int r_LONGV(struct kronuz_snowball_SN_env * z) {
    return kronuz_snowball_find_among_b(z, a_2) != 0;
}

extern int kronuz_snowball_estonian_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_p1;
    {
        int v_1 = z->c;
        z->bra = z->c;
        among_var = kronuz_snowball_find_among(z, a_10);
        if (!among_var) goto lab0;
        z->ket = z->c;
        if (z->c < z->l) goto lab0;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_0);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_1);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_2);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_3);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_4);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_5);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_6);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_7);
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_8);
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_9);
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 6, s_10);
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 7, s_11);
                    if (ret < 0) return ret;
                }
                break;
            case 13:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 7, s_12);
                    if (ret < 0) return ret;
                }
                break;
            case 14:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_13);
                    if (ret < 0) return ret;
                }
                break;
            case 15:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_14);
                    if (ret < 0) return ret;
                }
                break;
            case 16:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_15);
                    if (ret < 0) return ret;
                }
                break;
            case 17:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_16);
                    if (ret < 0) return ret;
                }
                break;
            case 18:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 5, s_17);
                    if (ret < 0) return ret;
                }
                break;
        }
        return 0;
    lab0:
        z->c = v_1;
    }
    {
        int v_2 = z->c;
        i_p1 = z->l;
        do {
            int v_3 = z->c;
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 2);
                if (ret < 0) goto lab2;
                z->c = ret;
            }
            while (1) {
                if (z->c == z->l || z->p[z->c] != '\'') goto lab3;
                z->c++;
                break;
            lab3:
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab2;
                    z->c = ret;
                }
            }
            break;
        lab2:
            z->c = v_3;
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_V1, 97, 252, 1);
                if (ret < 0) goto lab1;
                z->c += ret;
            }
            {
                int ret = kronuz_snowball_in_grouping_U(z, g_V1, 97, 252, 1);
                if (ret < 0) goto lab1;
                z->c += ret;
            }
        } while (0);
        i_p1 = z->c;
    lab1:
        z->c = v_2;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_4 = z->l - z->c;
        {
            int v_5;
            if (z->c < i_p1) goto lab4;
            v_5 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) { z->lb = v_5; goto lab4; }
            among_var = kronuz_snowball_find_among_b(z, a_0);
            if (!among_var) { z->lb = v_5; goto lab4; }
            z->bra = z->c;
            z->lb = v_5;
        }
        {
            int v_6 = z->l - z->c;
            {
                int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 4);
                if (ret < 0) goto lab4;
                z->c = ret;
            }
            z->c = z->l - v_6;
        }
        switch (among_var) {
            case 1:
                {
                    int v_7 = z->l - z->c;
                    if (kronuz_snowball_in_grouping_b_U(z, g_GI, 97, 252, 0)) goto lab4;
                    z->c = z->l - v_7;
                    {
                        int v_8 = z->l - z->c;
                        if (!r_LONGV(z)) goto lab5;
                        goto lab4;
                    lab5:
                        z->c = z->l - v_8;
                    }
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                if (kronuz_snowball_in_grouping_b_U(z, g_KI, 98, 382, 0)) goto lab4;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab4:
        z->c = z->l - v_4;
    }
    {
        int v_9 = z->l - z->c;
        do {
            int v_10 = z->l - z->c;
            {
                int v_11;
                if (z->c < i_p1) goto lab7;
                v_11 = z->lb; z->lb = i_p1;
                z->ket = z->c;
                if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((540726 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_11; goto lab7; }
                among_var = kronuz_snowball_find_among_b(z, a_1);
                if (!among_var) { z->lb = v_11; goto lab7; }
                z->bra = z->c;
                z->lb = v_11;
            }
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_18);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    if (kronuz_snowball_in_grouping_b_U(z, g_V1, 97, 252, 0)) goto lab7;
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        lab7:
            z->c = z->l - v_10;
            {
                int v_12 = z->l - z->c;
                {
                    int v_13;
                    if (z->c < i_p1) goto lab8;
                    v_13 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c - 3 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1049120 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_13; goto lab8; }
                    among_var = kronuz_snowball_find_among_b(z, a_3);
                    if (!among_var) { z->lb = v_13; goto lab8; }
                    z->bra = z->c;
                    z->lb = v_13;
                }
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 4, s_19);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 4, s_20);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 4, s_21);
                            if (ret < 0) return ret;
                        }
                        break;
                }
            lab8:
                z->c = z->l - v_12;
            }
            {
                int v_14 = z->l - z->c;
                {
                    int v_15;
                    if (z->c < i_p1) goto lab9;
                    v_15 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1576994 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_15; goto lab9; }
                    among_var = kronuz_snowball_find_among_b(z, a_4);
                    if (!among_var) { z->lb = v_15; goto lab9; }
                    z->bra = z->c;
                    z->lb = v_15;
                }
                switch (among_var) {
                    case 1:
                        do {
                            if (kronuz_snowball_in_grouping_b_U(z, g_RV, 39, 117, 0)) goto lab10;
                            break;
                        lab10:
                            if (!r_LONGV(z)) goto lab9;
                        } while (0);
                        break;
                    case 2:
                        {
                            int v_16 = z->l - z->c;
                            {
                                int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 4);
                                if (ret < 0) goto lab9;
                                z->c = ret;
                            }
                            z->c = z->l - v_16;
                        }
                        break;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            lab9:
                z->c = z->l - v_14;
            }
            {
                int v_17 = z->l - z->c;
                {
                    int v_18;
                    if (z->c < i_p1) goto lab11;
                    v_18 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = v_18; goto lab11; }
                    among_var = kronuz_snowball_find_among_b(z, a_6);
                    if (!among_var) { z->lb = v_18; goto lab11; }
                    z->bra = z->c;
                    z->lb = v_18;
                }
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 3, s_22);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int v_19 = z->l - z->c;
                            if (!r_LONGV(z)) goto lab12;
                            goto lab11;
                        lab12:
                            z->c = z->l - v_19;
                        }
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        do {
                            int v_20 = z->l - z->c;
                            {
                                int v_21 = z->l - z->c;
                                {
                                    int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 4);
                                    if (ret < 0) goto lab13;
                                    z->c = ret;
                                }
                                z->c = z->l - v_21;
                            }
                            if (z->c <= z->lb || (z->p[z->c - 1] != 115 && z->p[z->c - 1] != 116)) among_var = 2; else
                            among_var = kronuz_snowball_find_among_b(z, a_5);
                            switch (among_var) {
                                case 1:
                                    {
                                        int ret = kronuz_snowball_slice_from_s(z, 1, s_23);
                                        if (ret < 0) return ret;
                                    }
                                    break;
                                case 2:
                                    {
                                        int ret = kronuz_snowball_slice_del(z);
                                        if (ret < 0) return ret;
                                    }
                                    break;
                            }
                            break;
                        lab13:
                            z->c = z->l - v_20;
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 1, s_24);
                                if (ret < 0) return ret;
                            }
                        } while (0);
                        break;
                    case 4:
                        do {
                            if (kronuz_snowball_in_grouping_b_U(z, g_RV, 39, 117, 0)) goto lab14;
                            break;
                        lab14:
                            if (!r_LONGV(z)) goto lab11;
                        } while (0);
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                }
            lab11:
                z->c = z->l - v_17;
            }
            {
                int v_22 = z->l - z->c;
                {
                    int v_23;
                    if (z->c < i_p1) goto lab15;
                    v_23 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((8706 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_23; goto lab15; }
                    among_var = kronuz_snowball_find_among_b(z, a_9);
                    if (!among_var) { z->lb = v_23; goto lab15; }
                    z->bra = z->c;
                    z->lb = v_23;
                }
                switch (among_var) {
                    case 1:
                        if (kronuz_snowball_in_grouping_b_U(z, g_RV, 39, 117, 0)) goto lab15;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                }
            lab15:
                z->c = z->l - v_22;
            }
            {
                int v_24 = z->l - z->c;
                {
                    int v_25;
                    if (z->c < i_p1) goto lab16;
                    v_25 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'i') { z->lb = v_25; goto lab16; }
                    z->c--;
                    z->bra = z->c;
                    z->lb = v_25;
                }
                if (kronuz_snowball_in_grouping_b_U(z, g_RV, 39, 117, 0)) goto lab16;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            lab16:
                z->c = z->l - v_24;
            }
            {
                int v_26 = z->l - z->c;
                {
                    int v_27;
                    if (z->c < i_p1) goto lab17;
                    v_27 = z->lb; z->lb = i_p1;
                    z->ket = z->c;
                    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 117)) { z->lb = v_27; goto lab17; }
                    if (!kronuz_snowball_find_among_b(z, a_7)) { z->lb = v_27; goto lab17; }
                    z->bra = z->c;
                    z->lb = v_27;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            lab17:
                z->c = z->l - v_26;
            }
        } while (0);
        z->c = z->l - v_9;
    }
    {
        int v_28 = z->l - z->c;
        if (kronuz_snowball_in_grouping_b_U(z, g_V1, 97, 252, 0)) goto lab18;
        if (i_p1 > z->c) goto lab18;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab18;
        among_var = kronuz_snowball_find_among_b(z, a_8);
        if (!among_var) goto lab18;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_25);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_26);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_27);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab18:
        z->c = z->l - v_28;
    }
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != '\'') return 0;
    z->c--;
    z->bra = z->c;
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_estonian_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
