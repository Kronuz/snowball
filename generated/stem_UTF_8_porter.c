/* Generated from porter.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_porter.h"

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
extern int kronuz_snowball_porter_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_shortv(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'Y' };
static const symbol s_1[] = { 'Y' };
static const symbol s_2[] = { 's', 's' };
static const symbol s_3[] = { 'i' };
static const symbol s_4[] = { 'e', 'e' };
static const symbol s_5[] = { 'e' };
static const symbol s_6[] = { 'e' };
static const symbol s_7[] = { 'i' };
static const symbol s_8[] = { 't', 'i', 'o', 'n' };
static const symbol s_9[] = { 'e', 'n', 'c', 'e' };
static const symbol s_10[] = { 'a', 'n', 'c', 'e' };
static const symbol s_11[] = { 'a', 'b', 'l', 'e' };
static const symbol s_12[] = { 'e', 'n', 't' };
static const symbol s_13[] = { 'e' };
static const symbol s_14[] = { 'i', 'z', 'e' };
static const symbol s_15[] = { 'a', 't', 'e' };
static const symbol s_16[] = { 'a', 'l' };
static const symbol s_17[] = { 'f', 'u', 'l' };
static const symbol s_18[] = { 'o', 'u', 's' };
static const symbol s_19[] = { 'i', 'v', 'e' };
static const symbol s_20[] = { 'b', 'l', 'e' };
static const symbol s_21[] = { 'a', 'l' };
static const symbol s_22[] = { 'i', 'c' };
static const symbol s_23[] = { 'y' };

static const unsigned short a_0[] = {
    0x0000 , 0x7373 , 0x0003 , 0x0003 , 0x6573 , 0x0007 , 0xC001 , 0x0000 ,
    0x6973 , 0xFFFE , 0x000B , 0x0000 , 0x7373 , 0xFFFF
};

static const unsigned short a_1[] = {
    0x0003 , 0x7A62 , 0x001B , 0x0000 , 0x001E , 0x0000 , 0x0021 , 0x0024 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0027 , 0x002A , 0x002D , 0x0000 ,
    0x0030 , 0x0000 , 0x0033 , 0x0000 , 0x0036 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x003A , 0x0000 , 0x6262 , 0xFFFE , 0x0000 , 0x6464 ,
    0xFFFE , 0x0000 , 0x6666 , 0xFFFE , 0x0000 , 0x6767 , 0xFFFE , 0x0000 ,
    0x6262 , 0xFFFF , 0x0000 , 0x6D6D , 0xFFFE , 0x0000 , 0x6E6E , 0xFFFE ,
    0x0000 , 0x7070 , 0xFFFE , 0x0000 , 0x7272 , 0xFFFE , 0x0000 , 0x6174 ,
    0xFFFF , 0xFFFE , 0x0000 , 0x6969 , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x6467 , 0x0004 , 0x000A , 0x0000 , 0x6565 , 0x0007 , 0x0002 ,
    0x6565 , 0xFFFF , 0x0000 , 0x0002 , 0xFFFE , S(6E69)
};

static const unsigned short a_3[] = {
    0x0000 , 0x7369 , 0x000D , 0x0000 , 0x0000 , 0x005C , 0x0065 , 0x006A ,
    0x0000 , 0x0000 , 0x0000 , 0x0073 , 0x007F , 0x0000 , 0x7463 , 0x0021 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0028 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x004B , 0x0000 , 0x6E6E , 0x0024 , 0x0000 , 0x6165 , 0xFFFD , 0xFFFE ,
    0x0000 , 0x7462 , 0x003D , 0x0000 , 0x0000 , 0xFFFA , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0040 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0043 , 0x0047 , 0x0000 , 0x6161 , 0xFFFC ,
    0x0000 , 0x6161 , 0xFFF7 , 0x0000 , 0x0002 , 0xFFF5 , S(756F), 0x0000 ,
    0x0002 , 0xFFFB , S(6E65), 0x0000 , 0x6969 , 0x004E , 0x0000 , 0x6C76 ,
    0x0052 , 0x0059 , 0x0000 , 0x6169 , 0xFFF7 , 0x0056 , 0x0000 , 0x6262 ,
    0xFFF3 , 0x0000 , 0x6969 , 0xFFF4 , 0x0000 , 0x0005 , 0x0062 , S(6974),
    S(6E6F), S(0061), 0x0001 , 0x6161 , 0xFFF8 , 0x0000 , 0x0004 , 0xFFF7 ,
    S(6C61), S(7369), 0x0000 , 0x0004 , 0x006F , S(7461), S(6F69), 0x0008 ,
    0x0002 , 0xFFF9 , S(7A69), 0x0000 , 0x656F , 0x0077 , 0x007B , 0x0000 ,
    0x0002 , 0xFFF9 , S(7A69), 0x0000 , 0x0002 , 0xFFF8 , S(7461), 0x0000 ,
    0x0003 , 0x0084 , S(656E), S(0073), 0x0000 , 0x7365 , 0x0095 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0099 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0043 , 0x0000 , 0x0002 , 0xFFF4 ,
    S(7669), 0x0000 , 0x0002 , 0xFFF6 , S(7566)
};

static const unsigned short a_4[] = {
    0x0000 , 0x7365 , 0x0011 , 0x0000 , 0x0000 , 0x0000 , 0x0029 , 0x0000 ,
    0x0000 , 0x002E , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0039 , 0x0000 , 0x7A74 , 0x001A , 0x0000 , 0x001F , 0x0000 , 0x0000 ,
    0x0000 , 0x0024 , 0x0000 , 0x0003 , 0xFFFE , S(6369), S(0061), 0x0000 ,
    0x0003 , 0xFFFD , S(7461), S(0069), 0x0000 , 0x0003 , 0xFFFF , S(6C61),
    S(0069), 0x0000 , 0x0004 , 0xFFFE , S(6369), S(7469), 0x0000 , 0x6175 ,
    0x0032 , 0x0036 , 0x0000 , 0x0002 , 0xFFFE , S(6369), 0x0000 , 0x6666 ,
    0xFFFD , 0x0000 , 0x0003 , 0xFFFD , S(656E), S(0073)
};

static const unsigned short a_5[] = {
    0x0000 , 0x7563 , 0x0015 , 0x0000 , 0x0018 , 0x0000 , 0x0000 , 0x0000 ,
    0x0043 , 0x0000 , 0x0000 , 0x0040 , 0x0047 , 0x004B , 0x0000 , 0x0000 ,
    0x0000 , 0x004F , 0x0052 , 0x0056 , 0x0063 , 0x0000 , 0x6969 , 0xFFFF ,
    0x0000 , 0x7A63 , 0x0032 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0039 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0040 , 0x0000 , 0x0015 , 0x0000 , 0x0000 ,
    0x0000 , 0x0015 , 0x0000 , 0x6E6E , 0x0035 , 0x0000 , 0x6165 , 0xFFFF ,
    0xFFFF , 0x0000 , 0x6262 , 0x003C , 0x0000 , 0x6169 , 0xFFFF , 0xFFFF ,
    0x0000 , 0x6161 , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(7469), 0x0000 ,
    0x0002 , 0xFFFF , S(7369), 0x0000 , 0x0002 , 0xFFFE , S(6F69), 0x0000 ,
    0x6565 , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(756F), 0x0000 , 0x6E6E ,
    0x0059 , 0x0000 , 0x6165 , 0xFFFF , 0x005D , 0x0001 , 0x6D6D , 0x0060 ,
    0x0001 , 0x6565 , 0xFFFF , 0x0000 , 0x6F6F , 0xFFFF
};

static const unsigned char g_v[] = { 17, 65, 16, 1 };

static const unsigned char g_v_WXY[] = { 1, 17, 65, 208, 1 };

static int r_shortv(struct kronuz_snowball_SN_env * z) {
    if (kronuz_snowball_out_grouping_b_U(z, g_v_WXY, 89, 121, 0)) return 0;
    if (kronuz_snowball_in_grouping_b_U(z, g_v, 97, 121, 0)) return 0;
    return !kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 0);
}

extern int kronuz_snowball_porter_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int b_Y_found;
    int i_p2;
    int i_p1;
    b_Y_found = 0;
    {
        int v_1 = z->c;
        z->bra = z->c;
        if (z->c == z->l || z->p[z->c] != 'y') goto lab0;
        z->c++;
        z->ket = z->c;
        {
            int ret = kronuz_snowball_slice_from_s(z, 1, s_0);
            if (ret < 0) return ret;
        }
        b_Y_found = 1;
    lab0:
        z->c = v_1;
    }
    {
        int v_2 = z->c;
        while (1) {
            int v_3 = z->c;
            while (1) {
                int v_4 = z->c;
                if (kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 0)) goto lab3;
                z->bra = z->c;
                if (z->c == z->l || z->p[z->c] != 'y') goto lab3;
                z->c++;
                z->ket = z->c;
                z->c = v_4;
                break;
            lab3:
                z->c = v_4;
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab2;
                    z->c = ret;
                }
            }
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_1);
                if (ret < 0) return ret;
            }
            b_Y_found = 1;
            continue;
        lab2:
            z->c = v_3;
            break;
        }
        z->c = v_2;
    }
    i_p1 = z->l;
    i_p2 = z->l;
    {
        int v_5 = z->c;
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        i_p1 = z->c;
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab4;
            z->c += ret;
        }
        i_p2 = z->c;
    lab4:
        z->c = v_5;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_6 = z->l - z->c;
        z->ket = z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != 115) goto lab5;
        among_var = kronuz_snowball_find_among_b(z, a_0);
        if (!among_var) goto lab5;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_2);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_3);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab5:
        z->c = z->l - v_6;
    }
    {
        int v_7 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 103)) goto lab6;
        among_var = kronuz_snowball_find_among_b(z, a_2);
        if (!among_var) goto lab6;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (i_p1 > z->c) goto lab6;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_4);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int v_8 = z->l - z->c;
                    {
                        int ret = kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 1);
                        if (ret < 0) goto lab6;
                        z->c -= ret;
                    }
                    z->c = z->l - v_8;
                }
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int v_9 = z->l - z->c;
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68514004 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = 3; else
                    among_var = kronuz_snowball_find_among_b(z, a_1);
                    z->c = z->l - v_9;
                }
                switch (among_var) {
                    case 1:
                        {
                            int saved_c = z->c;
                            int ret = kronuz_snowball_insert_s(z, z->c, z->c, 1, s_5);
                            z->c = saved_c;
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        z->ket = z->c;
                        {
                            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                            if (ret < 0) goto lab6;
                            z->c = ret;
                        }
                        z->bra = z->c;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        if (z->c != i_p1) goto lab6;
                        {
                            int v_10 = z->l - z->c;
                            if (!r_shortv(z)) goto lab6;
                            z->c = z->l - v_10;
                        }
                        {
                            int saved_c = z->c;
                            int ret = kronuz_snowball_insert_s(z, z->c, z->c, 1, s_6);
                            z->c = saved_c;
                            if (ret < 0) return ret;
                        }
                        break;
                }
                break;
        }
    lab6:
        z->c = z->l - v_7;
    }
    {
        int v_11 = z->l - z->c;
        z->ket = z->c;
        do {
            if (z->c <= z->lb || z->p[z->c - 1] != 'y') goto lab8;
            z->c--;
            break;
        lab8:
            if (z->c <= z->lb || z->p[z->c - 1] != 'Y') goto lab7;
            z->c--;
        } while (0);
        z->bra = z->c;
        {
            int ret = kronuz_snowball_out_grouping_b_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab7;
            z->c -= ret;
        }
        {
            int ret = kronuz_snowball_slice_from_s(z, 1, s_7);
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - v_11;
    }
    {
        int v_12 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((815616 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab9;
        among_var = kronuz_snowball_find_among_b(z, a_3);
        if (!among_var) goto lab9;
        z->bra = z->c;
        if (i_p1 > z->c) goto lab9;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_8);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_9);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_10);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_11);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_12);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_14);
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_15);
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_16);
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_17);
                    if (ret < 0) return ret;
                }
                break;
            case 11:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_18);
                    if (ret < 0) return ret;
                }
                break;
            case 12:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_19);
                    if (ret < 0) return ret;
                }
                break;
            case 13:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_20);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab9:
        z->c = z->l - v_12;
    }
    {
        int v_13 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((528928 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab10;
        among_var = kronuz_snowball_find_among_b(z, a_4);
        if (!among_var) goto lab10;
        z->bra = z->c;
        if (i_p1 > z->c) goto lab10;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_21);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_22);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab10:
        z->c = z->l - v_13;
    }
    {
        int v_14 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((3961384 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab11;
        among_var = kronuz_snowball_find_among_b(z, a_5);
        if (!among_var) goto lab11;
        z->bra = z->c;
        if (i_p2 > z->c) goto lab11;
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                do {
                    if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab12;
                    z->c--;
                    break;
                lab12:
                    if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab11;
                    z->c--;
                } while (0);
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab11:
        z->c = z->l - v_14;
    }
    {
        int v_15 = z->l - z->c;
        z->ket = z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab13;
        z->c--;
        z->bra = z->c;
        do {
            if (i_p2 > z->c) goto lab14;
            break;
        lab14:
            if (i_p1 > z->c) goto lab13;
            {
                int v_16 = z->l - z->c;
                if (!r_shortv(z)) goto lab15;
                goto lab13;
            lab15:
                z->c = z->l - v_16;
            }
        } while (0);
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab13:
        z->c = z->l - v_15;
    }
    {
        int v_17 = z->l - z->c;
        z->ket = z->c;
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab16;
        z->c--;
        z->bra = z->c;
        if (i_p2 > z->c) goto lab16;
        if (z->c <= z->lb || z->p[z->c - 1] != 'l') goto lab16;
        z->c--;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab16:
        z->c = z->l - v_17;
    }
    z->c = z->lb;
    {
        int v_18 = z->c;
        if (!b_Y_found) goto lab17;
        while (1) {
            int v_19 = z->c;
            while (1) {
                int v_20 = z->c;
                z->bra = z->c;
                if (z->c == z->l || z->p[z->c] != 'Y') goto lab19;
                z->c++;
                z->ket = z->c;
                z->c = v_20;
                break;
            lab19:
                z->c = v_20;
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab18;
                    z->c = ret;
                }
            }
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_23);
                if (ret < 0) return ret;
            }
            continue;
        lab18:
            z->c = v_19;
            break;
        }
    lab17:
        z->c = v_18;
    }
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_porter_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
