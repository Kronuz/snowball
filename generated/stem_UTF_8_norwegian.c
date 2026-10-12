/* Generated from norwegian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_norwegian.h"

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
extern int kronuz_snowball_norwegian_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static const symbol s_0[] = { 'e', 'r' };

static const unsigned short a_0[] = {
    0x0001 , 0x7664 , 0x0015 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0019 , 0x0000 , 0x001D , 0x0000 , 0x0000 , 0x0024 , 0x0000 ,
    0x0000 , 0x0000 , 0x002E , 0x0000 , 0x0039 , 0x0000 , 0x0002 , 0xC001 ,
    S(6E69), 0x0000 , 0x6B6E , 0xC001 , 0xC001 , 0x0000 , 0x6D6D , 0x0020 ,
    0x0000 , 0x616F , 0xC001 , 0xC001 , 0x0000 , 0x6170 , 0x0028 , 0xC001 ,
    0x0000 , 0x6B6B , 0x002B , 0x3FFF , 0x7373 , 0xFFFF , 0x0000 , 0x6C73 ,
    0xC001 , 0x0032 , 0x0000 , 0x61B8 , 0xC001 , 0x0036 , 0x0000 , 0xC3C3 ,
    0xC001 , 0x3FFF , 0x6169 , 0x003D , 0x0040 , 0x0000 , 0x6868 , 0xFFFF ,
    0x0000 , 0x6767 , 0xFFFF
};

static const unsigned short a_1[] = {
    0x0000 , 0x7461 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0016 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x003E ,
    0x0000 , 0x0000 , 0x0000 , 0x0041 , 0x0045 , 0x0069 , 0x0001 , 0x7464 ,
    0x0029 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0031 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x003A , 0x0000 , 0x656E , 0xFFFF , 0x002D , 0x0000 , 0x6165 , 0xFFFF ,
    0xFFFF , 0x0000 , 0x6165 , 0xFFFF , 0x0035 , 0x0001 , 0x0003 , 0xFFFF ,
    S(6568), S(0074), 0x0000 , 0x0002 , 0xFFFC , S(7265), 0x0000 , 0x6565 ,
    0x0035 , 0x0000 , 0x6165 , 0xFFFF , S(0035), S(0003), 0x7461 , 0xFFFF ,
    S(0000), S(0000), 0x0000 , 0x005B , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x003E , 0x0000 , 0x0000 , 0x0000 ,
    0x0066 , 0x0000 , 0x0063 , 0x0001 , 0x646E , 0x005F , 0x003E , 0x0000 ,
    0x656E , 0xFFFF , 0x0063 , 0x0000 , 0x6565 , 0xFFFF , 0x0000 , 0x6565 ,
    0xFFFE , 0x0000 , 0x7365 , 0x007A , S(0000), S(0000), 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x007D , 0x0080 , 0x0001 , 0x6868 , 0xFFFF , 0x0000 , 0x6565 , 0xFFFC ,
    0x0000 , 0x6161 , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x7474 , 0x0003 , 0x0000 , 0x6476 , 0xC001 , 0xC001
};

static const unsigned short a_3[] = {
    0x0000 , 0x7667 , 0x0012 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0020 , 0x0000 ,
    0x0000 , 0x0024 , 0x0000 , 0x6569 , 0x0016 , 0x001C , 0x0000 , 0x6C6C ,
    0x0019 , 0x0001 , 0x6565 , 0xFFFF , 0x0001 , 0x656C , 0xFFFF , 0x0019 ,
    0x0000 , 0x0002 , 0xFFFF , S(6C65), 0x0000 , 0x0002 , 0x0028 , S(6F6C),
    0x0001 , 0x6573 , 0xFFFF , 0x002C , 0x0001 , 0x0003 , 0xFFFF , S(6568),
    S(0074)
};

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 2, 142 };

static const unsigned char g_s_ending[] = { 119, 125, 148, 1 };

extern int kronuz_snowball_norwegian_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_p1;
    i_p1 = z->l;
    {
        int v_1 = z->c;
        do {
            int v_2 = z->c;
            while (1) {
                if (z->c == z->l || z->p[z->c] != '\'') goto lab2;
                z->c++;
                break;
            lab2:
                {
                    int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab1;
                    z->c = ret;
                }
            }
            break;
        lab1:
            z->c = v_2;
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 248, 1);
                if (ret < 0) goto lab0;
                z->c += ret;
            }
            {
                int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 248, 1);
                if (ret < 0) goto lab0;
                z->c += ret;
            }
        } while (0);
        i_p1 = z->c;
    lab0:
        z->c = v_1;
    }
    {
        int v_3 = z->c;
        {
            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
            if (ret < 0) return 0;
            z->c = ret;
        }
        if (i_p1 >= z->c) goto lab3;
        i_p1 = z->c;
    lab3:
        z->c = v_3;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_4 = z->l - z->c;
        {
            int v_5;
            if (z->c < i_p1) goto lab4;
            v_5 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1851426 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_5; goto lab4; }
            among_var = kronuz_snowball_find_among_b(z, a_1);
            if (!among_var) { z->lb = v_5; goto lab4; }
            z->bra = z->c;
            z->lb = v_5;
        }
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((5318672 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = 1; else
                among_var = kronuz_snowball_find_among_b(z, a_0);
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                break;
            case 3:
                do {
                    int v_6 = z->l - z->c;
                    if (kronuz_snowball_in_grouping_b_U(z, g_s_ending, 98, 122, 0)) goto lab5;
                    break;
                lab5:
                    if (z->c <= z->lb || z->p[z->c - 1] != 'r') goto lab6;
                    z->c--;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab7;
                    z->c--;
                    goto lab6;
                lab7:
                    break;
                lab6:
                    z->c = z->l - v_6;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'k') goto lab4;
                    z->c--;
                    if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 248, 0)) goto lab4;
                } while (0);
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 2, s_0);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab4:
        z->c = z->l - v_4;
    }
    {
        int v_7 = z->l - z->c;
        {
            int v_8 = z->l - z->c;
            {
                int v_9;
                if (z->c < i_p1) goto lab8;
                v_9 = z->lb; z->lb = i_p1;
                z->ket = z->c;
                if (z->c - 1 <= z->lb || z->p[z->c - 1] != 116) { z->lb = v_9; goto lab8; }
                if (!kronuz_snowball_find_among_b(z, a_2)) { z->lb = v_9; goto lab8; }
                z->bra = z->c;
                z->lb = v_9;
            }
            z->c = z->l - v_8;
        }
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
            if (ret < 0) goto lab8;
            z->c = ret;
        }
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab8:
        z->c = z->l - v_7;
    }
    {
        int v_10 = z->l - z->c;
        {
            int v_11;
            if (z->c < i_p1) goto lab9;
            v_11 = z->lb; z->lb = i_p1;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((4718720 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_11; goto lab9; }
            if (!kronuz_snowball_find_among_b(z, a_3)) { z->lb = v_11; goto lab9; }
            z->bra = z->c;
            z->lb = v_11;
        }
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab9:
        z->c = z->l - v_10;
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

extern struct kronuz_snowball_SN_env * kronuz_snowball_norwegian_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
