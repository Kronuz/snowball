/* Generated from swedish.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_swedish.h"

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
extern int kronuz_snowball_swedish_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_et_condition(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'e', 't' };
static const symbol s_1[] = { 0xC3, 0xB6, 's' };
static const symbol s_2[] = { 'f', 'u', 'l', 'l' };

static const unsigned short a_0[] = {
    0x0000 , 0x7462 , 0x0015 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xC001 , 0x0000 , 0x0000 , 0x0019 , 0x0000 , 0x0026 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x002A , 0x0000 , 0x0002 , 0xC001 ,
    S(6166), 0x0000 , 0x6161 , 0x001C , 0x0000 , 0x7470 , 0xC001 , 0x0000 ,
    0xC001 , 0x0000 , 0x0023 , 0x0000 , 0x7373 , 0xC001 , 0x0000 , 0x0002 ,
    0xC001 , S(6F6B), 0x0000 , 0x6569 , 0x002E , 0x0031 , 0x0000 , 0x6969 ,
    0xC001 , 0x0000 , 0x7863 , 0xC001 , 0xC001 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0049 , 0xC001 , 0xC001 , 0x0000 ,
    0xC001 , 0x0000 , 0xC001 , 0xC001 , 0xC001 , 0xC001 , 0x004D , 0x0000 ,
    0xC001 , 0x0000 , 0x6169 , 0xC001 , 0xC001 , 0x0000 , 0x696B , 0xC001 ,
    0xC001
};

static const unsigned short a_1[] = {
    0x0000 , 0x7461 , 0x0016 , 0x0000 , 0x0000 , 0x0030 , 0x0033 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0052 ,
    0x0000 , 0x0000 , 0x0000 , 0x0074 , 0x0085 , 0x00B5 , 0x0001 , 0x0002 ,
    0x001A , S(6E72), 0x0000 , 0x6F61 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 ,
    0x002B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFF , 0x0001 , 0x0003 , 0xFFFF , S(6568), S(0074),
    0x0000 , 0x6161 , 0xFFFF , 0x0001 , 0x7464 , 0x0046 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x004A ,
    0x0000 , 0x0000 , 0x0000 , 0x0030 , 0x0000 , 0x004E , 0x0000 , 0x616E ,
    0xFFFF , 0x0030 , 0x0000 , 0x0002 , 0xFFFF , S(7261), 0x0000 , 0x0002 ,
    0xFFFF , S(7361), 0x0000 , 0x6572 , 0x0056 , 0x0071 , 0x0001 , 0x7464 ,
    0x0069 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0030 , 0x0000 ,
    0x006D , 0x0000 , 0x0002 , 0xFFFF , S(6E61), 0x0000 , 0x0002 , 0xFFFF ,
    S(6568), 0x0000 , 0x6565 , 0xFFFF , 0x0000 , 0x6F61 , 0xFFFF , 0x0000 ,
    0x0000 , 0x0000 , 0x002B , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0002 , 0x6E61 , 0x0095 ,
    S(0000), S(0000), 0x0000 , 0x00AA , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x00AD , 0x0001 , 0x0002 , 0x0099 ,
    S(6E72), 0x0000 , 0x6F61 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0xFFFF ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0xFFFF , 0x0001 , 0x6464 , 0x0046 , 0x0000 , 0x6572 , 0x00B1 ,
    0x0071 , 0x0001 , 0x7274 , 0x0030 , 0x006D , 0x0000 , 0x7361 , 0xFFFF ,
    S(0000), 0x0000 , 0x0000 , 0x00CA , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0030 , 0x0003 , 0x6468 , 0x0069 , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x7464 , 0x0013 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0017 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001A , 0x0000 , 0x6467 , 0xC001 , 0xC001 , 0x0000 ,
    0x6E6E , 0xC001 , 0x0000 , 0x7464 , 0xC001 , 0x0000 , 0x0000 , 0xC001 ,
    0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001
};

static const unsigned short a_3[] = {
    0x0000 , 0x7467 , 0x0010 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0016 , 0x001A ,
    0x0000 , 0x6969 , 0x0013 , 0x0001 , 0x6C6C , 0xFFFF , 0x0000 , 0x0002 ,
    0xFFFF , S(6C65), 0x0000 , 0x6C73 , 0x001E , 0x0023 , 0x0000 , 0x0003 ,
    0xFFFD , S(7566), S(006C), 0x0000 , 0x0002 , 0xFFFE , S(B6C3)
};

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 32 };

static const unsigned char g_s_ending[] = { 119, 127, 149 };

static const unsigned char g_ost_ending[] = { 173, 58 };

static int r_et_condition(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 246, 0)) return 0;
        if (kronuz_snowball_in_grouping_b_U(z, g_v, 97, 246, 0)) return 0;
        if (z->c <= z->lb) return 0;
        z->c = z->l - v_1;
        {
            int v_2 = z->l - z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1059076 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab0;
            if (!kronuz_snowball_find_among_b(z, a_0)) goto lab0;
            return 0;
        lab0:
            z->c = z->l - v_2;
        }
    }
    return 1;
}

extern int kronuz_snowball_swedish_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_x;
    int i_p1;
    {
        int v_1 = z->c;
        i_p1 = z->l;
        {
            int v_2 = z->c;
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
                if (ret < 0) goto lab0;
                z->c = ret;
            }
            i_x = z->c;
            z->c = v_2;
        }
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 246, 1);
            if (ret < 0) goto lab0;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 246, 1);
            if (ret < 0) goto lab0;
            z->c += ret;
        }
        i_p1 = z->c;
        if (i_p1 >= i_x) goto lab1;
        i_p1 = i_x;
    lab1:
    lab0:
        z->c = v_1;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_3 = z->l - z->c;
        {
            int v_4;
            if (z->c < i_p1) goto lab2;
            v_4 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1851442 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_4; goto lab2; }
            among_var = kronuz_snowball_find_among_b(z, a_1);
            if (!among_var) { z->lb = v_4; goto lab2; }
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
                do {
                    int v_5 = z->l - z->c;
                    if (!(kronuz_snowball_eq_s_b(z, 2, s_0))) goto lab3;
                    if (!r_et_condition(z)) goto lab3;
                    z->bra = z->c;
                    break;
                lab3:
                    z->c = z->l - v_5;
                    if (kronuz_snowball_in_grouping_b_U(z, g_s_ending, 98, 121, 0)) goto lab2;
                } while (0);
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                if (!r_et_condition(z)) goto lab2;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab2:
        z->c = z->l - v_3;
    }
    {
        int v_6 = z->l - z->c;
        {
            int v_7;
            if (z->c < i_p1) goto lab4;
            v_7 = z->lb; z->lb = i_p1;
            {
                int v_8 = z->l - z->c;
                if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1064976 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_7; goto lab4; }
                if (!kronuz_snowball_find_among_b(z, a_2)) { z->lb = v_7; goto lab4; }
                z->c = z->l - v_8;
                z->ket = z->c;
                {
                    int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
                    if (ret < 0) { z->lb = v_7; goto lab4; }
                    z->c = ret;
                }
                z->bra = z->c;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
            }
            z->lb = v_7;
        }
    lab4:
        z->c = z->l - v_6;
    }
    {
        int v_9 = z->l - z->c;
        {
            int v_10;
            if (z->c < i_p1) goto lab5;
            v_10 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1572992 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_10; goto lab5; }
            among_var = kronuz_snowball_find_among_b(z, a_3);
            if (!among_var) { z->lb = v_10; goto lab5; }
            z->bra = z->c;
            z->lb = v_10;
        }
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                if (kronuz_snowball_in_grouping_b_U(z, g_ost_ending, 105, 118, 0)) goto lab5;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 3, s_1);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_2);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab5:
        z->c = z->l - v_9;
    }
    z->c = z->lb;
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_swedish_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
