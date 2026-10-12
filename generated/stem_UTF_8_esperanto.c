/* Generated from esperanto.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_esperanto.h"

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
extern int kronuz_snowball_esperanto_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static const symbol s_0[] = { 0xC4, 0x89 };
static const symbol s_1[] = { 0xC4, 0x9D };
static const symbol s_2[] = { 0xC4, 0xA5 };
static const symbol s_3[] = { 0xC4, 0xB5 };
static const symbol s_4[] = { 0xC5, 0x9D };
static const symbol s_5[] = { 0xC5, 0xAD };
static const symbol s_6[] = { 'a' };
static const symbol s_7[] = { 'e' };
static const symbol s_8[] = { 'i' };
static const symbol s_9[] = { 'o' };
static const symbol s_10[] = { 'u' };
static const symbol s_11[] = { 's', 't' };
static const symbol s_12[] = { 'e' };
static const symbol s_13[] = { 'a' };
static const symbol s_14[] = { 'u', 'n' };
static const symbol s_15[] = { 'u' };
static const symbol s_16[] = { 'a', 0xC5, 0xAD };
static const symbol s_17[] = { 'o' };

static const unsigned short a_0[] = {
    0x000E , 0xC32D , 0xFFF3 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0099 , 0x0000 , 0x0000 , 0x0000 , 0x009C , 0x009F , 0x0000 , 0x00A2 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF4 , 0x0000 ,
    0x00A5 , 0x0000 , 0x00A8 , 0x0000 , 0xFFF4 , 0xFFF4 , 0xFFF4 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00AB , 0x0000 , 0x7878 , 0xFFFF , 0x0000 , 0x7878 , 0xFFFE , 0x0000 ,
    0x7878 , 0xFFFD , 0x0000 , 0x7878 , 0xFFFC , 0x0000 , 0x7878 , 0xFFFB ,
    0x0000 , 0x7878 , 0xFFFA , 0x0000 , 0xBAA1 , 0xFFF9 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF8 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFF7 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF6 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFF5
};

static const unsigned short a_1[] = {
    0x0000 , 0x7561 , 0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x001A , 0x0000 ,
    0x7373 , 0xC001 , 0x3FFF , 0x7373 , 0xC001
};

static const unsigned short a_2[] = {
    0x0000 , 0x6969 , 0x0003 , 0x0000 , 0x9D63 , 0xC001 , 0x0000 , 0x0000 ,
    0x0000 , 0xC001 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0040 , 0xC001 ,
    0x0047 , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0xC001 , 0x0000 , 0x0000 ,
    0x004A , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x004D ,
    0x3FFF , 0x699D , 0xC001 , 0x0044 , 0x0000 , 0xC5C5 , 0xC001 , 0x3FFF ,
    0x6F6F , 0xC001 , 0x3FFF , 0x6969 , 0xC001 , 0x0000 , 0xC4C5 , 0xC001 ,
    0x0051 , 0x3FFF , 0x696C , 0xC001 , 0x0055 , 0x0000 , 0x0002 , 0xC001 ,
    S(616D)
};

static const unsigned short a_3[] = {
    0x0000 , 0x7A62 , 0x001B , 0x0000 , 0x001F , 0x0000 , 0x0000 , 0x0029 ,
    0x0000 , 0x0033 , 0x0000 , 0x003D , 0x0000 , 0x0000 , 0x0057 , 0x0000 ,
    0x0000 , 0x0000 , 0x0062 , 0x0000 , 0x008D , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0093 , 0x0000 , 0x0002 , 0xC001 , S(6D61), 0x0000 ,
    0x0003 , 0x0024 , S(6162), S(006C), 0x3FFF , 0x0003 , 0xC001 , S(616D),
    S(006C), 0x0000 , 0x0003 , 0x002E , S(6F6D), S(0072), 0x3FFF , 0x0004 ,
    0xC001 , S(6F70), S(7473), 0x0000 , 0x6464 , 0x0036 , 0x0000 , 0x616F ,
    0xC001 , 0x003A , 0x0000 , 0x6868 , 0xC001 , 0x0000 , 0x736E , 0x0045 ,
    0x0000 , 0x0000 , 0x0000 , 0x0048 , 0x0052 , 0x0000 , 0x6161 , 0xC001 ,
    0x0000 , 0x0003 , 0x004D , S(89C4), S(0069), 0x3FFF , 0x0003 , 0xC001 ,
    S(7574), S(0074), 0x0000 , 0x0003 , 0xC001 , S(7270), S(0065), 0x0000 ,
    0x6565 , 0x005A , 0x0000 , 0x6D70 , 0x005E , 0x0045 , 0x0000 , 0x0002 ,
    0xC001 , S(6C61), 0x0000 , 0x7465 , 0x0074 , 0x0000 , 0x007E , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0083 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0088 , 0x0000 , 0x0002 , 0x0078 , S(6968),
    0x3FFF , 0x0006 , 0xC001 , S(6E61), S(6174), S(ADC5), 0x0000 , 0x0003 ,
    0xC001 , S(616D), S(006C), 0x0000 , 0x0003 , 0xC001 , S(6E61), S(006B),
    0x0000 , 0x0003 , 0xC001 , S(6F6B), S(006E), 0x0000 , 0x0005 , 0xC001 ,
    S(6E61), S(7473), S(0061), 0x0000 , 0x0003 , 0xC001 , S(766B), S(0061)
};

static const unsigned short a_4[] = {
    0x0000 , 0x7575 , 0x0003 , 0x0000 , 0x696E , 0x0007 , 0x000B , 0x0000 ,
    0x0002 , 0xC001 , S(6C61), 0x0000 , 0x7575 , 0xC001
};

static const unsigned short a_5[] = {
    0x0000 , 0x7561 , 0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x007D , 0x0000 ,
    0x0000 , 0x0000 , 0x00A5 , 0x00DE , 0x0000 , 0x0000 , 0x0000 , 0x00E4 ,
    0x00EC , 0x0000 , 0x0000 , 0x0000 , 0x00F3 , 0x0000 , 0x00F8 , 0x0000 ,
    0xA568 , 0x0057 , 0x0000 , 0x005D , 0x0000 , 0x0063 , 0x0000 , 0x0067 ,
    0x0000 , 0x0000 , 0x0000 , 0x006C , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0078 , 0x0000 ,
    0x6161 , 0x005A , 0x3FFF , 0x6868 , 0xC001 , 0x0000 , 0x0006 , 0xC001 ,
    S(6168), S(656C), S(756C), 0x0000 , 0x0002 , 0xC001 , S(6F68), 0x0000 ,
    0x0004 , 0xC001 , S(6F68), S(6173), 0x0000 , 0x7475 , 0x0070 , 0x0075 ,
    0x0000 , 0x0003 , 0xC001 , S(616D), S(006C), 0x0000 , 0x6868 , 0xC001 ,
    0x0000 , 0x0004 , 0xC001 , S(A5C4), S(C461), 0x0000 , 0x7264 , 0x008E ,
    0x0000 , 0x0000 , 0x0000 , 0x0099 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00A0 , 0x0000 , 0x736B ,
    0x0099 , 0x0099 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x009C , 0x0000 , 0x6565 , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(6964),
    0x0000 , 0x0004 , 0xC001 , S(616D), S(746C), 0x0000 , 0x8964 , 0x00CD ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D4 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D9 , 0x0000 , 0x0007 , 0xC001 ,
    S(6964), S(6C72), S(6469), S(0069), 0x0000 , 0x0004 , 0xC001 , S(616D),
    S(706C), 0x0000 , 0x0004 , 0xC001 , S(616D), S(C46C), 0x0000 , 0x0005 ,
    0xC001 , S(616D), S(6B6C), S(0061), 0x0000 , 0x0003 , 0x00E9 , S(6D61),
    S(0065), 0x3FFF , 0x7474 , 0xC001 , 0x0000 , 0x6872 , 0x00F0 , 0x00A0 ,
    0x0000 , 0x6F6F , 0xC001 , 0x0000 , 0x0004 , 0xC001 , S(696D), S(756E),
    0x0000 , 0x6875 , 0x00FC , 0x00FF , 0x0000 , 0x7575 , 0xC001 , 0x0000 ,
    0x6D6D , 0xC001
};

static const unsigned short a_6[] = {
    0x0000 , 0x6975 , 0x0004 , 0x0008 , 0x0000 , 0x0002 , 0xC001 , S(7274),
    0x0000 , 0x646E , 0xC001 , 0x000C , 0x0000 , 0x7575 , 0xC001
};

static const unsigned short a_7[] = {
    0x0000 , 0x6B74 , 0x0004 , 0x0008 , 0x0000 , 0x0002 , 0xC001 , S(6564),
    0x0000 , 0x0003 , 0xC001 , S(6563), S(006E)
};

static const unsigned short a_8[] = {
    0x0000 , 0x896B , 0x0021 , 0x0000 , 0x0000 , 0x0026 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x002A , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0036 , 0x3FFF , 0x0003 , 0xC001 , S(656B), S(006C), 0x0000 , 0x0002 ,
    0xC001 , S(656E), 0x3FFF , 0x6C6D , 0x002E , 0x0032 , 0x0000 , 0x0002 ,
    0xC001 , S(756D), 0x0000 , 0x0002 , 0xC001 , S(6173), 0x0000 , 0xC4C4 ,
    0xC001
};

static const unsigned short a_9[] = {
    0x0000 , 0x7561 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 ,
    0x0000 , 0x0000 , 0xC001 , 0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x001B ,
    0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x002C , 0x0000 , 0xC001 , 0x0001 ,
    0x616F , 0xC001 , 0xC001 , 0x0001 , 0x6F61 , 0xC001 , 0x0000 , 0x0000 ,
    0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0017 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x7561 , 0xC001 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xC001
};

static const unsigned char g_vowel[] = { 17, 65, 16 };

static const unsigned char g_aou[] = { 1, 64, 16 };

static const unsigned char g_digit[] = { 255, 3 };

extern int kronuz_snowball_esperanto_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int b_foreign;
    {
        int v_1 = z->c;
        b_foreign = 0;
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
                        int ret = kronuz_snowball_slice_from_s(z, 2, s_5);
                        if (ret < 0) return ret;
                    }
                    break;
                case 7:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_6);
                        if (ret < 0) return ret;
                    }
                    b_foreign = 1;
                    break;
                case 8:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_7);
                        if (ret < 0) return ret;
                    }
                    b_foreign = 1;
                    break;
                case 9:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_8);
                        if (ret < 0) return ret;
                    }
                    b_foreign = 1;
                    break;
                case 10:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_9);
                        if (ret < 0) return ret;
                    }
                    b_foreign = 1;
                    break;
                case 11:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_10);
                        if (ret < 0) return ret;
                    }
                    b_foreign = 1;
                    break;
                case 12:
                    b_foreign = 1;
                    break;
                case 13:
                    b_foreign = 0;
                    break;
                case 14:
                    {
                        int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                        if (ret < 0) goto lab0;
                        z->c = ret;
                    }
                    break;
            }
            continue;
        lab0:
            z->c = v_2;
            break;
        }
        if (b_foreign) return 0;
        z->c = v_1;
    }
    {
        int v_3 = z->c;
        z->bra = z->c;
        if (z->c == z->l || z->p[z->c] != '\'') goto lab1;
        z->c++;
        z->ket = z->c;
        if (!(kronuz_snowball_eq_s(z, 2, s_11))) goto lab1;
        if (z->c >= z->l || z->p[z->c + 0] >> 5 != 3 || !((2130434 >> (z->p[z->c + 0] & 0x1f)) & 1)) goto lab1;
        if (!kronuz_snowball_find_among(z, a_1)) goto lab1;
        if (z->c < z->l) goto lab1;
        {
            int ret = kronuz_snowball_slice_from_s(z, 1, s_12);
            if (ret < 0) return ret;
        }
    lab1:
        z->c = v_3;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_4 = z->l - z->c;
        z->ket = z->c;
        {
            int v_5 = z->l - z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'n') { z->c = z->l - v_5; goto lab3; }
            z->c--;
        lab3:
            ;
        }
        z->bra = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) goto lab2;
        if (!kronuz_snowball_find_among_b(z, a_2)) goto lab2;
        do {
            if (z->c > z->lb) goto lab4;
            break;
        lab4:
            if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab2;
            z->c--;
        } while (0);
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        return 0;
    lab2:
        z->c = z->l - v_4;
    }
    {
        int v_6 = z->l - z->c;
        z->ket = z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != '\'') goto lab5;
        z->c--;
        z->bra = z->c;
        do {
            int v_7 = z->l - z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab6;
            z->c--;
            if (z->c > z->lb) goto lab6;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                if (ret < 0) return ret;
            }
            break;
        lab6:
            z->c = z->l - v_7;
            if (!(kronuz_snowball_eq_s_b(z, 2, s_14))) goto lab7;
            if (z->c > z->lb) goto lab7;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_15);
                if (ret < 0) return ret;
            }
            break;
        lab7:
            z->c = z->l - v_7;
            if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68438676 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab8;
            if (!kronuz_snowball_find_among_b(z, a_3)) goto lab8;
            do {
                if (z->c > z->lb) goto lab9;
                break;
            lab9:
                if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab8;
                z->c--;
            } while (0);
            {
                int ret = kronuz_snowball_slice_from_s(z, 3, s_16);
                if (ret < 0) return ret;
            }
            break;
        lab8:
            z->c = z->l - v_7;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_17);
                if (ret < 0) return ret;
            }
        } while (0);
    lab5:
        z->c = z->l - v_6;
    }
    {
        int v_8 = z->l - z->c;
        z->ket = z->c;
        z->bra = z->c;
        {
            int v_9 = z->l - z->c;
            do {
                int v_10 = z->l - z->c;
                {
                    int v_11 = z->l - z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'n') { z->c = z->l - v_11; goto lab12; }
                    z->c--;
                lab12:
                    ;
                }
                z->bra = z->c;
                if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab11;
                z->c--;
                break;
            lab11:
                z->c = z->l - v_10;
                {
                    int v_12 = z->l - z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'n') { z->c = z->l - v_12; goto lab13; }
                    z->c--;
                lab13:
                    ;
                }
                {
                    int v_13 = z->l - z->c;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'j') { z->c = z->l - v_13; goto lab14; }
                    z->c--;
                lab14:
                    ;
                }
                z->bra = z->c;
                if (kronuz_snowball_in_grouping_b_U(z, g_aou, 97, 117, 0)) goto lab10;
            } while (0);
            if (z->c <= z->lb || z->p[z->c - 1] != 'i') goto lab10;
            z->c--;
            {
                int v_14 = z->l - z->c;
                if (!kronuz_snowball_find_among_b(z, a_8)) { z->c = z->l - v_14; goto lab15; }
            lab15:
                ;
            }
            do {
                if (z->c > z->lb) goto lab16;
                break;
            lab16:
                if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab10;
                z->c--;
            } while (0);
            z->c = z->l - v_9;
        }
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        return 0;
    lab10:
        z->c = z->l - v_8;
    }
    {
        int v_15 = z->l - z->c;
        if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((2672162 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab17;
        if (!kronuz_snowball_find_among_b(z, a_5)) goto lab17;
        do {
            if (z->c > z->lb) goto lab18;
            break;
        lab18:
            if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab17;
            z->c--;
        } while (0);
        return 0;
    lab17:
        z->c = z->l - v_15;
    }
    {
        int v_16 = z->l - z->c;
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 105 && z->p[z->c - 1] != 117)) goto lab19;
        if (!kronuz_snowball_find_among_b(z, a_6)) goto lab19;
        if (z->c - 2 <= z->lb || (z->p[z->c - 1] != 107 && z->p[z->c - 1] != 116)) goto lab19;
        if (!kronuz_snowball_find_among_b(z, a_7)) goto lab19;
        return 0;
    lab19:
        z->c = z->l - v_16;
    }
    {
        int v_17 = z->l - z->c;
        z->ket = z->c;
        {
            int v_18 = z->l - z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'n') { z->c = z->l - v_18; goto lab21; }
            z->c--;
        lab21:
            ;
        }
        {
            int v_19 = z->l - z->c;
            if (z->c <= z->lb || z->p[z->c - 1] != 'j') { z->c = z->l - v_19; goto lab22; }
            z->c--;
        lab22:
            ;
        }
        z->bra = z->c;
        if (z->c - 2 <= z->lb || z->p[z->c - 1] != 117) goto lab20;
        if (!kronuz_snowball_find_among_b(z, a_4)) goto lab20;
        do {
            if (z->c > z->lb) goto lab23;
            break;
        lab23:
            if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab20;
            z->c--;
        } while (0);
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        return 0;
    lab20:
        z->c = z->l - v_17;
    }
    {
        int v_20 = z->l - z->c;
        do {
            int v_21 = z->l - z->c;
            {
                int i; for (i = 2; i > 0; i--) {
                    {
                        int ret = kronuz_snowball_out_grouping_b_U(z, g_vowel, 97, 117, 1);
                        if (ret < 0) goto lab24;
                        z->c -= ret;
                    }
                }
            }
            break;
        lab24:
            z->c = z->l - v_21;
            while (1) {
                if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab26;
                z->c--;
                break;
            lab26:
                {
                    int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                    if (ret < 0) goto lab25;
                    z->c = ret;
                }
            }
            {
                int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                if (ret < 0) goto lab25;
                z->c = ret;
            }
            break;
        lab25:
            z->c = z->l - v_21;
            {
                int ret = kronuz_snowball_out_grouping_b_U(z, g_digit, 48, 57, 1);
                if (ret < 0) return 0;
                z->c -= ret;
            }
        } while (0);
        z->c = z->l - v_20;
    }
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((2672162 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = kronuz_snowball_find_among_b(z, a_9);
    if (!among_var) return 0;
    switch (among_var) {
        case 1:
            {
                int v_22 = z->l - z->c;
                do {
                    if (z->c <= z->lb || z->p[z->c - 1] != '-') goto lab27;
                    z->c--;
                    break;
                lab27:
                    if (kronuz_snowball_in_grouping_b_U(z, g_digit, 48, 57, 0)) return 0;
                } while (0);
                z->c = z->l - v_22;
            }
            break;
    }
    {
        int v_23 = z->l - z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != '-') { z->c = z->l - v_23; goto lab28; }
        z->c--;
    lab28:
        ;
    }
    z->bra = z->c;
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_esperanto_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
