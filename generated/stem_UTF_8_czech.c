/* Generated from czech.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_czech.h"

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
extern int kronuz_snowball_czech_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_palatalise_i(struct kronuz_snowball_SN_env * z);
static int r_palatalise_e(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'k' };
static const symbol s_1[] = { 0xC3, 0xAD, 'n', 'k' };
static const symbol s_2[] = { 'k' };
static const symbol s_3[] = { 0xC3, 0xAD, 'n', 'k' };
static const symbol s_4[] = { 'c', 'k' };
static const symbol s_5[] = { 's', 'k' };
static const symbol s_6[] = { 'e', 't' };
static const symbol s_7[] = { 't', 0xC5, 0x99 };
static const symbol s_8[] = { 'b' };
static const symbol s_9[] = { 'c' };
static const symbol s_10[] = { 'k' };
static const symbol s_11[] = { 0xC5, 0x88, 'k' };
static const symbol s_12[] = { 'n' };
static const symbol s_13[] = { 't' };
static const symbol s_14[] = { 'v' };
static const symbol s_15[] = { 't' };

static const unsigned short a_0[] = {
    0x0000 , 0x6363 , 0x0003 , 0x0001 , 0x6E76 , 0x0007 , 0x000B , 0x3FFF ,
    0x0002 , 0xFFFE , S(ADC3), 0x0000 , 0x616F , 0xC001 , 0xC001
};

static const unsigned short a_1[] = {
    0x0000 , 0x6374 , 0x0004 , 0x0010 , 0x0001 , 0x6E76 , 0x0008 , 0x000C ,
    0x3FFF , 0x0002 , 0xFFFE , S(ADC3), 0x0000 , 0x616F , 0xC001 , 0xC001 ,
    0x0000 , 0x8DA1 , 0x0014 , 0x0017 , 0x0000 , 0xC4C4 , 0xFFFD , 0x0000 ,
    0xC5C5 , 0x001A , 0x0004 , 0xAD65 , 0x0065 , 0x0000 , 0x0000 , 0x0000 ,
    0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0069 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x006D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x006D , 0x0000 , 0x646C , 0xC001 ,
    0xC001 , 0x0000 , 0x0002 , 0xC001 , S(6F70), 0x0000 , 0xC3C3 , 0xC001
};

static const unsigned short a_2[] = {
    0x0000 , 0x6E76 , 0x0004 , 0x0007 , 0x0000 , 0x6969 , 0xFFFE , 0x0000 ,
    0x6FAF , 0xFFFF , 0x000B , 0x0000 , 0xC5C5 , 0xFFFF
};

static const unsigned short a_3[] = {
    0x0002 , 0xBE6C , 0x0055 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0058 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x005B , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x005E ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x005E , 0x0001 , 0x7474 , 0xFFFE ,
    0x0001 , 0x6565 , 0xFFFE , 0x0000 , 0xC4C4 , 0x0058 , 0x0000 , 0xC5C5 ,
    0xFFFF
};

static const unsigned short a_4[] = {
    0x0000 , 0x746C , 0x000B , 0x0000 , 0x000F , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0012 , 0x0000 , 0x0002 , 0xC001 , S(626F), 0x0000 ,
    0x7373 , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(6F64)
};

static const unsigned short a_5[] = {
    0x0000 , 0x8D63 , 0x002D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001 ,
    0x0000 , 0x0000 , 0x0030 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0033 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0037 , 0x0000 , 0x7575 , 0xC001 ,
    0x0000 , 0x6F6F , 0xC001 , 0x0000 , 0x0002 , 0xC001 , S(616B), 0x0000 ,
    0xC4C4 , 0xC001
};

static const unsigned short a_6[] = {
    0x0000 , 0xBD61 , 0x005F , 0x0066 , 0x0069 , 0x0000 , 0x006C , 0x0000 ,
    0x0000 , 0x0076 , 0x00DE , 0x0000 , 0x0153 , 0x0000 , 0x015A , 0x0000 ,
    0x01BF , 0x0000 , 0x0000 , 0x0000 , 0x01C6 , 0x01C9 , 0x01CD , 0x01D1 ,
    0x0000 , 0x0000 , 0x01BB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x01D4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0073 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x00D8 , 0x0000 , 0x0000 , 0x0000 , 0x0149 , 0x0000 ,
    0x0000 , 0x0000 , 0x01D8 , 0x0000 , 0x0000 , 0x0000 , 0x00DB , 0x0000 ,
    0x01DF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D8 , 0x0001 ,
    0x6D74 , 0x0063 , 0x0063 , 0x0000 , 0x6161 , 0xFFFF , 0x0000 , 0x6565 ,
    0xFFFC , 0x0000 , 0x6565 , 0xFFFB , 0x0002 , 0x7474 , 0x006F , 0x0000 ,
    0x659B , 0xFFFD , 0x0073 , 0x0000 , 0xC4C4 , 0xFFFF , 0x0000 , 0x6363 ,
    0x0079 , 0x0000 , 0xBD65 , 0x00D4 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D8 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00DB , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x00D8 , 0x0002 , 0x0002 , 0xFFFF , S(7461),
    0x0000 , 0xC3C3 , 0xFFFF , 0x0000 , 0xC3C3 , 0xFFF4 , 0x000C , 0x766D ,
    0x00EA , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x014C ,
    0x0000 , 0x0150 , 0x0001 , 0xBD61 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0xFFFE , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0073 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0149 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00DB , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00D8 , 0x0000 , 0xC5C5 , 0xFFF5 , 0x0000 , 0x659B , 0xFFFD , 0x0073 ,
    0x0000 , 0x6F6F , 0xFFFF , 0x0000 , 0x659B , 0xFFFA , 0x0157 , 0x0000 ,
    0xC4C4 , 0xFFF9 , 0x0000 , 0xBD65 , 0x01B5 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0073 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00D8 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x00D8 , 0x0000 , 0x0000 , 0x0000 , 0x00DB , 0x0000 , 0x01B8 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00D8 , 0x0002 , 0x7474 , 0x014C ,
    0x0000 , 0xC5C5 , 0x01BB , 0x0001 , 0x0002 , 0xFFFF , S(7461), 0x0001 ,
    0x6868 , 0x01C2 , 0x0000 , 0xA9AD , 0x00D8 , 0x00DB , 0x0000 , 0x7575 ,
    0xFFFF , 0x0000 , 0x6165 , 0xFFFF , 0xFFF7 , 0x0001 , 0x6D6F , 0x01C2 ,
    0xFFFF , 0x0000 , 0x6565 , 0xFFF6 , 0x0000 , 0x0002 , 0xFFF8 , S(C565),
    0x0000 , 0xC3C3 , 0x01DB , 0x0001 , 0x0002 , 0xFFFF , S(766F), 0x0000 ,
    0xC5C5 , 0xFFFF
};

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 17, 4, 18, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64 };

static const unsigned char g_v_or_syllabic_c[] = { 17, 73, 18, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 17, 4, 18, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64 };

static const unsigned char g_ev_ending[] = { 73, 20, 4 };

static const unsigned char g_env_ending[] = { 71, 66, 23, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 16 };

static int r_palatalise_e(struct kronuz_snowball_SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != 99) return 0;
    among_var = kronuz_snowball_find_among_b(z, a_0);
    if (!among_var) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_0);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {
                int ret = kronuz_snowball_slice_from_s(z, 4, s_1);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_palatalise_i(struct kronuz_snowball_SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c <= z->lb || (z->p[z->c - 1] != 99 && z->p[z->c - 1] != 116)) return 0;
    among_var = kronuz_snowball_find_among_b(z, a_1);
    if (!among_var) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_2);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {
                int ret = kronuz_snowball_slice_from_s(z, 4, s_3);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {
                int ret = kronuz_snowball_slice_from_s(z, 2, s_4);
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {
                int ret = kronuz_snowball_slice_from_s(z, 2, s_5);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int kronuz_snowball_czech_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_x;
    int i_p1;
    {
        int v_1 = z->c;
        {
            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        i_x = z->c;
        z->c = v_1;
    }
    i_p1 = z->l;
    {
        int v_2 = z->c;
        do {
            if (kronuz_snowball_in_grouping_U(z, g_v, 97, 367, 0)) goto lab1;
            break;
        lab1:
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                if (ret < 0) goto lab0;
                z->c = ret;
            }
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_v_or_syllabic_c, 97, 367, 1);
                if (ret < 0) goto lab0;
                z->c += ret;
            }
        } while (0);
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 367, 1);
            if (ret < 0) goto lab0;
            z->c += ret;
        }
        i_p1 = z->c;
        if (i_p1 >= i_x) goto lab2;
        i_p1 = i_x;
    lab2:
    lab0:
        z->c = v_2;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_3 = z->l - z->c;
        {
            int v_4;
            if (z->c < i_p1) goto lab3;
            v_4 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            among_var = kronuz_snowball_find_among_b(z, a_6);
            if (!among_var) { z->lb = v_4; goto lab3; }
            z->bra = z->c;
            z->lb = v_4;
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
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int v_5 = z->l - z->c;
                    {
                        int ret = r_palatalise_e(z);
                        if (ret == 0) { z->c = z->l - v_5; goto lab4; }
                        if (ret < 0) return ret;
                    }
                lab4:
                    ;
                }
                break;
            case 3:
                among_var = kronuz_snowball_find_among_b(z, a_3);
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 2, s_6);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                break;
            case 4:
                {
                    int v_6 = z->l - z->c;
                    if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 367, 0)) goto lab3;
                    z->c = z->l - v_6;
                }
                if (!(kronuz_snowball_eq_s_b(z, 3, s_7))) goto lab5;
                goto lab3;
            lab5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_8);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int v_7 = z->l - z->c;
                    if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 367, 0)) goto lab3;
                    z->c = z->l - v_7;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int ret = kronuz_snowball_insert_s(z, z->c, z->c, 1, s_9);
                    if (ret < 0) return ret;
                }
                {
                    int v_8 = z->l - z->c;
                    {
                        int ret = r_palatalise_e(z);
                        if (ret == 0) { z->c = z->l - v_8; goto lab6; }
                        if (ret < 0) return ret;
                    }
                lab6:
                    ;
                }
                break;
            case 6:
                {
                    int v_9 = z->l - z->c;
                    if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 367, 0)) goto lab3;
                    z->c = z->l - v_9;
                }
                {
                    int v_10 = z->l - z->c;
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1069056 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab7;
                    if (!kronuz_snowball_find_among_b(z, a_4)) goto lab7;
                    goto lab3;
                lab7:
                    z->c = z->l - v_10;
                }
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_10);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                if (z->c <= z->lb || z->p[z->c - 1] != 'n') goto lab3;
                z->c--;
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_11);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int v_11 = z->l - z->c;
                    if (kronuz_snowball_in_grouping_b_U(z, g_env_ending, 98, 382, 0)) goto lab3;
                    z->c = z->l - v_11;
                }
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_12);
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                if (!kronuz_snowball_find_among_b(z, a_5)) goto lab3;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                if (kronuz_snowball_in_grouping_b_U(z, g_ev_ending, 104, 122, 0)) goto lab3;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_14);
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_15);
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int v_12 = z->l - z->c;
                    {
                        int ret = r_palatalise_i(z);
                        if (ret == 0) { z->c = z->l - v_12; goto lab8; }
                        if (ret < 0) return ret;
                    }
                lab8:
                    ;
                }
                break;
        }
    lab3:
        z->c = z->l - v_3;
    }
    {
        int v_13 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 110 && z->p[z->c - 1] != 118)) goto lab9;
        among_var = kronuz_snowball_find_among_b(z, a_2);
        if (!among_var) goto lab9;
        z->bra = z->c;
        if (i_p1 > z->c) goto lab9;
        switch (among_var) {
            case 1:
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
                {
                    int v_14 = z->l - z->c;
                    {
                        int ret = r_palatalise_i(z);
                        if (ret == 0) { z->c = z->l - v_14; goto lab10; }
                        if (ret < 0) return ret;
                    }
                lab10:
                    ;
                }
                break;
        }
    lab9:
        z->c = z->l - v_13;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_czech_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
