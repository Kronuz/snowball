/* Generated from dutch_porter.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_dutch_porter.h"

#include <stddef.h>

#include "../runtime/snowball_runtime.h"

struct SN_local {
    struct kronuz_snowball_SN_env z;
    int i_p1;
    unsigned char b_e_found;
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
extern int kronuz_snowball_dutch_porter_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_undouble(struct kronuz_snowball_SN_env * z);
static int r_en_ending(struct kronuz_snowball_SN_env * z);
static int r_e_ending(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'g', 'e', 'm' };
static const symbol s_1[] = { 'a' };
static const symbol s_2[] = { 'e' };
static const symbol s_3[] = { 'i' };
static const symbol s_4[] = { 'o' };
static const symbol s_5[] = { 'u' };
static const symbol s_6[] = { 'Y' };
static const symbol s_7[] = { 'I' };
static const symbol s_8[] = { 'Y' };
static const symbol s_9[] = { 'h', 'e', 'i', 'd' };
static const symbol s_10[] = { 'h', 'e', 'i', 'd' };
static const symbol s_11[] = { 'e', 'n' };
static const symbol s_12[] = { 'i', 'g' };
static const symbol s_13[] = { 'y' };
static const symbol s_14[] = { 'i' };

static const unsigned short a_0[] = {
    0x0006 , 0xC3C3 , 0x0003 , 0x0000 , 0xBCA1 , 0xFFFF , 0x0000 , 0x0000 ,
    0xFFFF , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0xFFFE , 0x0000 , 0xFFFE ,
    0x0000 , 0xFFFD , 0x0000 , 0xFFFD , 0x0000 , 0x0000 , 0x0000 , 0xFFFC ,
    0x0000 , 0x0000 , 0xFFFC , 0x0000 , 0x0000 , 0x0000 , 0xFFFB , 0x0000 ,
    0xFFFB
};

static const unsigned short a_1[] = {
    0x0003 , 0x4959 , 0xFFFE , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x7464 , 0x0013 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0016 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0019 , 0x0000 , 0x6464 , 0xC001 , 0x0000 , 0x6B6B ,
    0xC001 , 0x0000 , 0x7474 , 0xC001
};

static const unsigned short a_3[] = {
    0x0000 , 0x7365 , 0x0011 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0018 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0xFFFD , 0x0000 , 0x6E73 , 0x0015 , 0xFFFD , 0x0000 , 0x6565 , 0xFFFE ,
    0x0000 , 0x6565 , 0x001B , 0x0002 , 0x0003 , 0xFFFF , S(6568), S(0064)
};

static const unsigned short a_4[] = {
    0x0000 , 0x7264 , 0x0011 , 0x0000 , 0x0000 , 0x0015 , 0x0000 , 0x0000 ,
    0x0000 , 0x001C , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0021 , 0x0000 , 0x0002 , 0xFFFF , S(6E65), 0x0000 , 0x696E , 0xFFFE ,
    0x0019 , 0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x0003 , 0xFFFD , S(696C),
    S(006A), 0x0000 , 0x6161 , 0x0024 , 0x0000 , 0x6162 , 0x0028 , 0xFFFB ,
    0x0000 , 0x6262 , 0xFFFC
};

static const unsigned short a_5[] = {
    0x0000 , 0x7561 , 0x0017 , 0x0000 , 0x0000 , 0x0000 , 0x001A , 0x0000 ,
    0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x001D , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0020 , 0x0000 ,
    0x6161 , 0xC001 , 0x0000 , 0x6565 , 0xC001 , 0x0000 , 0x6F6F , 0xC001 ,
    0x0000 , 0x7575 , 0xC001
};

static const unsigned char g_v[] = { 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128 };

static const unsigned char g_v_I[] = { 1, 0, 0, 17, 65, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128 };

static const unsigned char g_v_j[] = { 17, 67, 16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128 };

static int r_undouble(struct kronuz_snowball_SN_env * z) {
    {
        int v_1 = z->l - z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1050640 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
        if (!kronuz_snowball_find_among_b(z, a_2)) return 0;
        z->c = z->l - v_1;
    }
    z->ket = z->c;
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

static int r_e_ending(struct kronuz_snowball_SN_env * z) {
    ((SN_local *)z)->b_e_found = 0;
    z->ket = z->c;
    if (z->c <= z->lb || z->p[z->c - 1] != 'e') return 0;
    z->c--;
    z->bra = z->c;
    if (((SN_local *)z)->i_p1 > z->c) return 0;
    {
        int v_1 = z->l - z->c;
        if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 232, 0)) return 0;
        z->c = z->l - v_1;
    }
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    ((SN_local *)z)->b_e_found = 1;
    return r_undouble(z);
}

static int r_en_ending(struct kronuz_snowball_SN_env * z) {
    if (((SN_local *)z)->i_p1 > z->c) return 0;
    {
        int v_1 = z->l - z->c;
        if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 232, 0)) return 0;
        z->c = z->l - v_1;
        if (!(kronuz_snowball_eq_s_b(z, 3, s_0))) goto lab0;
        return 0;
    lab0:
        ;
    }
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    return r_undouble(z);
}

extern int kronuz_snowball_dutch_porter_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    int i_x;
    int i_p2;
    {
        int v_1 = z->c;
        {
            int v_2 = z->c;
            while (1) {
                int v_3 = z->c;
                z->bra = z->c;
                if (z->c + 1 >= z->l || z->p[z->c + 1] >> 5 != 5 || !((340306450 >> (z->p[z->c + 1] & 0x1f)) & 1)) among_var = 6; else
                among_var = kronuz_snowball_find_among(z, a_0);
                z->ket = z->c;
                switch (among_var) {
                    case 1:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_1);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_2);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_3);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_4);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 5:
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_5);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 6:
                        {
                            int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                            if (ret < 0) goto lab1;
                            z->c = ret;
                        }
                        break;
                }
                continue;
            lab1:
                z->c = v_3;
                break;
            }
            z->c = v_2;
        }
        {
            int v_4 = z->c;
            z->bra = z->c;
            if (z->c == z->l || z->p[z->c] != 'y') { z->c = v_4; goto lab2; }
            z->c++;
            z->ket = z->c;
            {
                int ret = kronuz_snowball_slice_from_s(z, 1, s_6);
                if (ret < 0) return ret;
            }
        lab2:
            ;
        }
        while (1) {
            int v_5 = z->c;
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 232, 1);
                if (ret < 0) goto lab3;
                z->c += ret;
            }
            {
                int v_6 = z->c;
                z->bra = z->c;
                do {
                    int v_7 = z->c;
                    if (z->c == z->l || z->p[z->c] != 'i') goto lab5;
                    z->c++;
                    z->ket = z->c;
                    {
                        int v_8 = z->c;
                        if (kronuz_snowball_in_grouping_U(z, g_v, 97, 232, 0)) goto lab6;
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_7);
                            if (ret < 0) return ret;
                        }
                    lab6:
                        z->c = v_8;
                    }
                    break;
                lab5:
                    z->c = v_7;
                    if (z->c == z->l || z->p[z->c] != 'y') { z->c = v_6; goto lab4; }
                    z->c++;
                    z->ket = z->c;
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_8);
                        if (ret < 0) return ret;
                    }
                } while (0);
            lab4:
                ;
            }
            continue;
        lab3:
            z->c = v_5;
            break;
        }
        z->c = v_1;
    }
    {
        int v_9 = z->c;
        ((SN_local *)z)->i_p1 = z->l;
        i_p2 = z->l;
        {
            int v_10 = z->c;
            {
                int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 3);
                if (ret < 0) goto lab7;
                z->c = ret;
            }
            i_x = z->c;
            z->c = v_10;
        }
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 232, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 232, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        ((SN_local *)z)->i_p1 = z->c;
        if (((SN_local *)z)->i_p1 >= i_x) goto lab8;
        ((SN_local *)z)->i_p1 = i_x;
    lab8:
        {
            int ret = kronuz_snowball_out_grouping_U(z, g_v, 97, 232, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        {
            int ret = kronuz_snowball_in_grouping_U(z, g_v, 97, 232, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        i_p2 = z->c;
    lab7:
        z->c = v_9;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_11 = z->l - z->c;
        z->ket = z->c;
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((540704 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab10;
        among_var = kronuz_snowball_find_among_b(z, a_3);
        if (!among_var) goto lab10;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (((SN_local *)z)->i_p1 > z->c) goto lab10;
                {
                    int ret = kronuz_snowball_slice_from_s(z, 4, s_9);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = r_en_ending(z);
                    if (ret == 0) goto lab10;
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                if (((SN_local *)z)->i_p1 > z->c) goto lab10;
                if (kronuz_snowball_out_grouping_b_U(z, g_v_j, 97, 232, 0)) goto lab10;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab10:
        z->c = z->l - v_11;
    }
    {
        int v_12 = z->l - z->c;
        {
            int ret = r_e_ending(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - v_12;
    }
    {
        int v_13 = z->l - z->c;
        z->ket = z->c;
        if (!(kronuz_snowball_eq_s_b(z, 4, s_10))) goto lab11;
        z->bra = z->c;
        if (i_p2 > z->c) goto lab11;
        if (z->c <= z->lb || z->p[z->c - 1] != 'c') goto lab12;
        z->c--;
        goto lab11;
    lab12:
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        z->ket = z->c;
        if (!(kronuz_snowball_eq_s_b(z, 2, s_11))) goto lab11;
        z->bra = z->c;
        {
            int ret = r_en_ending(z);
            if (ret == 0) goto lab11;
            if (ret < 0) return ret;
        }
    lab11:
        z->c = z->l - v_13;
    }
    {
        int v_14 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((264336 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab13;
        among_var = kronuz_snowball_find_among_b(z, a_4);
        if (!among_var) goto lab13;
        z->bra = z->c;
        switch (among_var) {
            case 1:
                if (i_p2 > z->c) goto lab13;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                do {
                    int v_15 = z->l - z->c;
                    z->ket = z->c;
                    if (!(kronuz_snowball_eq_s_b(z, 2, s_12))) goto lab14;
                    z->bra = z->c;
                    if (i_p2 > z->c) goto lab14;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab15;
                    z->c--;
                    goto lab14;
                lab15:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    break;
                lab14:
                    z->c = z->l - v_15;
                    {
                        int ret = r_undouble(z);
                        if (ret == 0) goto lab13;
                        if (ret < 0) return ret;
                    }
                } while (0);
                break;
            case 2:
                if (i_p2 > z->c) goto lab13;
                if (z->c <= z->lb || z->p[z->c - 1] != 'e') goto lab16;
                z->c--;
                goto lab13;
            lab16:
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                if (i_p2 > z->c) goto lab13;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                {
                    int ret = r_e_ending(z);
                    if (ret == 0) goto lab13;
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                if (i_p2 > z->c) goto lab13;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                if (i_p2 > z->c) goto lab13;
                if (!((SN_local *)z)->b_e_found) goto lab13;
                {
                    int ret = kronuz_snowball_slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
    lab13:
        z->c = z->l - v_14;
    }
    {
        int v_16 = z->l - z->c;
        if (kronuz_snowball_out_grouping_b_U(z, g_v_I, 73, 232, 0)) goto lab17;
        {
            int v_17 = z->l - z->c;
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((2129954 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab17;
            if (!kronuz_snowball_find_among_b(z, a_5)) goto lab17;
            if (kronuz_snowball_out_grouping_b_U(z, g_v, 97, 232, 0)) goto lab17;
            z->c = z->l - v_17;
        }
        z->ket = z->c;
        {
            int ret = kronuz_snowball_skip_b_utf8(z->p, z->c, z->lb, 1);
            if (ret < 0) goto lab17;
            z->c = ret;
        }
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
    lab17:
        z->c = z->l - v_16;
    }
    z->c = z->lb;
    {
        int v_18 = z->c;
        while (1) {
            int v_19 = z->c;
            z->bra = z->c;
            if (z->c >= z->l || (z->p[z->c + 0] != 73 && z->p[z->c + 0] != 89)) among_var = 3; else
            among_var = kronuz_snowball_find_among(z, a_1);
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_13);
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {
                        int ret = kronuz_snowball_slice_from_s(z, 1, s_14);
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_skip_utf8(z->p, z->c, z->l, 1);
                        if (ret < 0) goto lab19;
                        z->c = ret;
                    }
                    break;
            }
            continue;
        lab19:
            z->c = v_19;
            break;
        }
        z->c = v_18;
    }
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_dutch_porter_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(SN_local));
}
