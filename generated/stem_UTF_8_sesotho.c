/* Generated from sesotho.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_sesotho.h"

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
extern int kronuz_snowball_sesotho_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif


static const unsigned short a_0[] = {
    0x0000 , 0x7362 , 0x0014 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x001B , 0x001F , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0030 , 0x0000 , 0x616F , 0xC001 , 0x0018 ,
    0x0000 , 0x6969 , 0xC001 , 0x0000 , 0x6569 , 0xC001 , 0xC001 , 0x0000 ,
    0x6F61 , 0xC001 , 0x0000 , 0x0000 , 0x0000 , 0xC001 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xC001 ,
    0x0000 , 0x6565 , 0xC001
};

static const unsigned short a_1[] = {
    0x0000 , 0x6761 , 0x0009 , 0x0000 , 0x0000 , 0x0000 , 0x001D , 0x0000 ,
    0x0025 , 0x0001 , 0x776C , 0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x001A , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 ,
    0x6565 , 0xFFFF , 0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x6C73 , 0x001A ,
    0x0021 , 0x0000 , 0x0002 , 0xFFFF , S(7465), 0x0000 , 0x6E6E , 0x0028 ,
    0x0000 , 0x6F61 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0xFFFF , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x6F61 , 0x0011 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x001C , 0x0000 , 0x6E6F , 0x0015 , 0xFFFF , 0x0000 , 0x6161 , 0x0018 ,
    0x0001 , 0x0002 , 0xFFFF , S(796E), 0x0000 , 0x0002 , 0xFFFF , S(6E61)
};

static const unsigned char g_v[] = { 17, 65, 16 };

extern int kronuz_snowball_sesotho_stem(struct kronuz_snowball_SN_env * z) {
    int i_pV;
    {
        int v_1 = z->c;
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 117, 1);
            if (ret < 0) return 0;
            z->c += ret;
        }
        i_pV = z->c;
        z->c = v_1;
    }
    {
        int v_2 = z->c;
        {
            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 2);
            if (ret < 0) return 0;
            z->c = ret;
        }
        if (z->c <= i_pV) goto lab0;
        i_pV = z->c;
    lab0:
        z->c = v_2;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_3 = z->l - z->c;
        {
            int v_4;
            if (z->c < i_pV) goto lab1;
            v_4 = z->lb; z->lb = i_pV;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((33282 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_4; goto lab1; }
            if (!kronuz_snowball_find_among_b(z, a_2)) { z->lb = v_4; goto lab1; }
            z->bra = z->c;
            {
                int ret = kronuz_snowball_slice_del(z);
                if (ret < 0) return ret;
            }
            z->lb = v_4;
        }
    lab1:
        z->c = z->l - v_3;
    }
    {
        int v_5 = z->l - z->c;
        {
            int v_6;
            if (z->c < i_pV) goto lab2;
            v_6 = z->lb; z->lb = i_pV;
            z->ket = z->c;
            if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((162 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = v_6; goto lab2; }
            if (!kronuz_snowball_find_among_b(z, a_1)) { z->lb = v_6; goto lab2; }
            z->bra = z->c;
            {
                int ret = kronuz_snowball_slice_del(z);
                if (ret < 0) return ret;
            }
            z->lb = v_6;
        }
    lab2:
        z->c = z->l - v_5;
    }
    z->c = z->lb;
    {
        int v_7 = z->c;
        z->bra = z->c;
        if (z->c + 1 >= z->l || z->p[z->c + 1] >> 5 != 3 || !((33314 >> (z->p[z->c + 1] & 0x1f)) & 1)) goto lab3;
        if (!kronuz_snowball_find_among(z, a_0)) goto lab3;
        z->ket = z->c;
        {
            int v_8 = z->c;
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                if (ret < 0) goto lab3;
                z->c = ret;
            }
            if (z->c >= z->l) goto lab3;
            z->c = v_8;
        }
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 117, 1);
            if (ret < 0) goto lab3;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab3:
        z->c = v_7;
    }
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_sesotho_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(struct kronuz_snowball_SN_env));
}
