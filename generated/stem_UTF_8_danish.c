/* Generated from danish.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_danish.h"

#include <stddef.h>

#include "../runtime/snowball_runtime.h"

struct SN_local {
    struct kronuz_snowball_SN_env z;
    int i_p1;
    symbol * s_ch;
};

typedef struct SN_local SN_local;

#ifdef SNOWBALL_BIGENDIAN
#define S(W) ((0x##W & 0xff) << 8 | 0x##W >> 8)
#else
#define S(W) (0x##W)
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern int kronuz_snowball_danish_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_consonant_pair(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 's', 't' };
static const symbol s_1[] = { 'i', 'g' };
static const symbol s_2[] = { 'l', 0xC3, 0xB8, 's' };

static const unsigned short a_0[] = {
    0x0000 , 0x7464 , 0x0013 , 0x0021 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0045 , 0x0000 , 0x0000 , 0x0000 ,
    0x0050 , 0x0057 , 0x0082 , 0x0000 , 0x6565 , 0x0016 , 0x0000 , 0x6872 ,
    0x001A , 0x001E , 0x0001 , 0x0002 , 0xFFFF , S(7465), 0x0000 , 0x6565 ,
    0xFFFF , 0x0001 , 0x7264 , 0x0032 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0041 , 0x0000 , 0x0000 ,
    0x0000 , 0x001E , 0x0000 , 0x656E , 0x0036 , 0x003A , 0x0000 , 0x0002 ,
    0xFFFF , S(7265), 0x0000 , 0x6565 , 0x003D , 0x0001 , 0x0002 , 0xFFFF ,
    S(7265), 0x0000 , 0x6572 , 0xFFFF , 0x001E , 0x0000 , 0x6565 , 0x0048 ,
    0x0001 , 0x6472 , 0x004C , 0x001E , 0x0000 , 0x0002 , 0xFFFF , S(6568),
    0x0000 , 0x6565 , 0x0053 , 0x0001 , 0x6472 , 0x004C , 0x001E , 0x0002 ,
    0x7464 , 0x004C , S(006A), 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x007F , 0x0000 , 0x0000 , 0x0000 , 0x001E ,
    0x0000 , 0x0082 , 0x0001 , 0x7264 , 0x007B , S(0000), 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0041 , 0x0000 ,
    0x0000 , 0x0000 , 0x001E , 0x0000 , 0x0002 , 0x003D , S(6E65), 0x0000 ,
    0x6565 , 0x0053 , S(0000), 0x6565 , 0x003D
};

static const unsigned short a_1[] = {
    0x0000 , 0x6474 , 0x0004 , 0x0007 , 0x0000 , 0x6767 , 0xC001 , 0x0000 ,
    0x6B64 , 0xC001 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 , 0x0000 ,
    0xC001
};

static const unsigned short a_2[] = {
    0x0000 , 0x7467 , 0x0010 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0019 , 0x001D ,
    0x0000 , 0x6969 , 0x0013 , 0x0001 , 0x6C6C , 0x0016 , 0x0001 , 0x6565 ,
    0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(6C65), 0x0000 , 0x0004 , 0xFFFE ,
    S(C36C), S(73B8)
};

static const unsigned char g_undouble_c[] = { 53, 94, 7 };

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 128 };

static const unsigned char g_s_ending[] = { 1, 0, 0, 0, 0, 0, 0, 188, 251, 171, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64 };

static int r_consonant_pair(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        {
            int v_2;
            if (z->c < ((SN_local *)z)->i_p1) return 0;
            v_2 = z->lb; z->lb = ((SN_local *)z)->i_p1;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 116)) { z->lb = v_2; return 0; }
            if (!kronuz_snowball_find_among_b(z, a_1)) { z->lb = v_2; return 0; }
            z->bra = z->c;
            z->lb = v_2;
        }
        z->c = z->l - v_1;
    }
    {
        int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
        if (ret < 0) return 0;
        z->c = ret;
    }
    z->bra = z->c;
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

extern int kronuz_snowball_danish_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    ((SN_local *)z)->i_p1 = z->l;
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
        ((SN_local *)z)->i_p1 = z->c;
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
        if (((SN_local *)z)->i_p1 >= z->c) goto lab3;
        ((SN_local *)z)->i_p1 = z->c;
    lab3:
        z->c = v_3;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_4 = z->l - z->c;
        {
            int v_5;
            if (z->c < ((SN_local *)z)->i_p1) goto lab4;
            v_5 = z->lb; z->lb = ((SN_local *)z)->i_p1;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1851440 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_5; goto lab4; }
            among_var = kronuz_snowball_find_among_b(z, a_0);
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
                if (kronuz_snowball_in_grouping_b_U(z, g_s_ending, 39, 229, 0)) goto lab4;
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
        int v_6 = z->l - z->c;
        {
            int ret = r_consonant_pair(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - v_6;
    }
    {
        int v_7 = z->l - z->c;
        {
            int v_8 = z->l - z->c;
            z->ket = z->c;
            if (!(kronuz_snowball_eq_s_b(z, 2, s_0))) goto lab6;
            z->bra = z->c;
            if (!(kronuz_snowball_eq_s_b(z, 2, s_1))) goto lab6;
            {
                int ret = kronuz_snowball_slice_del(z);
                if (ret < 0) return ret;
            }
        lab6:
            z->c = z->l - v_8;
        }
        {
            int v_9;
            if (z->c < ((SN_local *)z)->i_p1) goto lab5;
            v_9 = z->lb; z->lb = ((SN_local *)z)->i_p1;
            z->ket = z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1572992 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_9; goto lab5; }
            among_var = kronuz_snowball_find_among_b(z, a_2);
            if (!among_var) { z->lb = v_9; goto lab5; }
            z->bra = z->c;
            z->lb = v_9;
        }
        switch (among_var) {
            case 1:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int v_10 = z->l - z->c;
                    {
                        int ret = r_consonant_pair(z);
                        if (ret < 0) return ret;
                    }
                    z->c = z->l - v_10;
                }
                break;
            case 2:
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_2);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab5:
        z->c = z->l - v_7;
    }
    {
        int v_11 = z->l - z->c;
        {
            int v_12;
            if (z->c < ((SN_local *)z)->i_p1) goto lab7;
            v_12 = z->lb; z->lb = ((SN_local *)z)->i_p1;
            z->ket = z->c;
            if (kronuz_snowball_in_grouping_b_U(z, g_undouble_c, 98, 116, 0)) { z->lb = v_12; goto lab7; }
            z->bra = z->c;
            {
                int ret = kronuz_snowball_slice_to(z, &((SN_local *)z)->s_ch);
                if (ret < 0) return ret;
            }
            z->lb = v_12;
        }
        if (!(kronuz_snowball_eq_v_b(z, ((SN_local *)z)->s_ch))) goto lab7;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - v_11;
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

extern struct kronuz_snowball_SN_env * kronuz_snowball_danish_create_env(void) {
    struct kronuz_snowball_SN_env * z = kronuz_snowball_SN_new_env(sizeof(SN_local));
    if (z) {
        if ((((SN_local *)z)->s_ch = kronuz_snowball_create_s()) == NULL) {
            kronuz_snowball_danish_close_env(z);
            return NULL;
        }
    }
    return z;
}

extern void kronuz_snowball_danish_close_env(struct kronuz_snowball_SN_env * z) {
    if (!z) return;
    kronuz_snowball_lose_s(((SN_local *)z)->s_ch);
    kronuz_snowball_SN_delete_env(z);
}

