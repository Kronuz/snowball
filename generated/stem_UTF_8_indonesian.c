/* Generated from indonesian.sbl by Snowball 3.1.1 - https://snowballstem.org/ */

#include "stem_UTF_8_indonesian.h"

#include <stddef.h>

#include "../runtime/snowball_runtime.h"

struct SN_local {
    struct kronuz_snowball_SN_env z;
    int i_prefix;
    int i_measure;
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
extern int kronuz_snowball_indonesian_stem(struct kronuz_snowball_SN_env * z);
#ifdef __cplusplus
}
#endif

static int r_remove_suffix(struct kronuz_snowball_SN_env * z);
static int r_remove_second_order_prefix(struct kronuz_snowball_SN_env * z);

static const symbol s_0[] = { 'a', 'j', 'a', 'r' };
static const symbol s_1[] = { 'a', 'j', 'a', 'r' };
static const symbol s_2[] = { 'e', 'r' };
static const symbol s_3[] = { 's' };
static const symbol s_4[] = { 's' };
static const symbol s_5[] = { 'p' };
static const symbol s_6[] = { 'p' };

static const unsigned short a_0[] = {
    0x0000 , 0x686E , 0x0004 , 0x000B , 0x0000 , 0x6161 , 0x0007 , 0x0000 ,
    0x6B6C , 0xFFFF , 0xFFFF , 0x0000 , 0x0002 , 0xFFFF , S(7570)
};

static const unsigned short a_1[] = {
    0x0000 , 0x6175 , 0x0004 , 0x0008 , 0x0000 , 0x0002 , 0xFFFF , S(796E),
    0x0000 , 0x6B6D , 0xFFFF , 0xFFFF
};

static const unsigned short a_2[] = {
    0x0000 , 0x696E , 0xFFFE , 0x0004 , 0x0000 , 0x6161 , 0xFFFF
};

static const unsigned short a_3[] = {
    0x0000 , 0x7464 , 0x0013 , 0x0000 , 0x0000 , 0x0000 , 0x0000 , 0x0000 ,
    0x0000 , 0x0016 , 0x0000 , 0x0019 , 0x0000 , 0x0000 , 0x0023 , 0x0000 ,
    0x0000 , 0x0000 , 0x002D , 0x0000 , 0x6969 , 0xFFFF , 0x0000 , 0x6565 ,
    0xFFFD , 0x0000 , 0x6565 , 0x001C , 0x0001 , 0x6D6E , 0xFFFB , 0x0020 ,
    0x0002 , 0x6767 , 0xFFFF , 0x0000 , 0x6565 , 0x0026 , 0x0000 , 0x6D6E ,
    0xFFFA , 0x002A , 0x0004 , 0x6767 , 0xFFFD , 0x0000 , 0x0002 , 0xFFFF ,
    S(7265)
};

static const unsigned short a_4[] = {
    0x0000 , 0x6270 , 0x0004 , 0x0007 , 0x0000 , 0x6565 , 0xFFFE , 0x0000 ,
    0x6565 , 0xFFFF
};

static const unsigned char g_vowel[] = { 17, 65, 16 };

static int r_remove_suffix(struct kronuz_snowball_SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c <= z->lb || (z->p[z->c - 1] != 105 && z->p[z->c - 1] != 110)) return 0;
    among_var = kronuz_snowball_find_among_b(z, a_2);
    if (!among_var) return 0;
    z->bra = z->c;
    switch (among_var) {
        case 1:
            do {
                int v_1 = z->l - z->c;
                if (((SN_local *)z)->i_prefix == 3) goto lab0;
                if (((SN_local *)z)->i_prefix == 2) goto lab0;
                if (z->c <= z->lb || z->p[z->c - 1] != 'k') goto lab0;
                z->c--;
                z->bra = z->c;
                break;
            lab0:
                z->c = z->l - v_1;
                if (((SN_local *)z)->i_prefix == 1) return 0;
            } while (0);
            break;
        case 2:
            if (((SN_local *)z)->i_prefix > 2) return 0;
            if (z->c <= z->lb || z->p[z->c - 1] != 's') goto lab1;
            z->c--;
            return 0;
        lab1:
            break;
    }
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    ((SN_local *)z)->i_measure -= 1;
    return 1;
}

static int r_remove_second_order_prefix(struct kronuz_snowball_SN_env * z) {
    int among_var;
    z->bra = z->c;
    if (z->c + 1 >= z->l || z->p[z->c + 1] != 101) return 0;
    among_var = kronuz_snowball_find_among(z, a_4);
    if (!among_var) return 0;
    switch (among_var) {
        case 1:
            do {
                int v_1 = z->c;
                if (z->c == z->l || z->p[z->c] != 'r') goto lab0;
                z->c++;
                z->ket = z->c;
                ((SN_local *)z)->i_prefix = 2;
                break;
            lab0:
                z->c = v_1;
                if (z->c == z->l || z->p[z->c] != 'l') goto lab1;
                z->c++;
                z->ket = z->c;
                if (!(kronuz_snowball_eq_s(z, 4, s_0))) goto lab1;
                break;
            lab1:
                z->c = v_1;
                z->ket = z->c;
                ((SN_local *)z)->i_prefix = 2;
            } while (0);
            break;
        case 2:
            do {
                int v_2 = z->c;
                if (z->c == z->l || z->p[z->c] != 'r') goto lab2;
                z->c++;
                z->ket = z->c;
                break;
            lab2:
                z->c = v_2;
                if (z->c == z->l || z->p[z->c] != 'l') goto lab3;
                z->c++;
                z->ket = z->c;
                if (!(kronuz_snowball_eq_s(z, 4, s_1))) goto lab3;
                break;
            lab3:
                z->c = v_2;
                z->ket = z->c;
                if (kronuz_snowball_out_grouping_U(z, g_vowel, 97, 117, 0)) return 0;
                if (!(kronuz_snowball_eq_s(z, 2, s_2))) return 0;
            } while (0);
            ((SN_local *)z)->i_prefix = 4;
            break;
    }
    ((SN_local *)z)->i_measure -= 1;
    {
        int ret = kronuz_snowball_slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

extern int kronuz_snowball_indonesian_stem(struct kronuz_snowball_SN_env * z) {
    int among_var;
    ((SN_local *)z)->i_measure = 0;
    {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            {
                int ret = kronuz_snowball_out_grouping_U(z, g_vowel, 97, 117, 1);
                if (ret < 0) goto lab1;
                z->c += ret;
            }
            ((SN_local *)z)->i_measure += 1;
            continue;
        lab1:
            z->c = v_2;
            break;
        }
        z->c = v_1;
    }
    if (((SN_local *)z)->i_measure < 3) return 0;
    ((SN_local *)z)->i_prefix = 0;
    z->lb = z->c; z->c = z->l;
    {
        int v_3 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 2 <= z->lb || (z->p[z->c - 1] != 104 && z->p[z->c - 1] != 110)) goto lab2;
        if (!kronuz_snowball_find_among_b(z, a_0)) goto lab2;
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        ((SN_local *)z)->i_measure -= 1;
    lab2:
        z->c = z->l - v_3;
    }
    if (((SN_local *)z)->i_measure < 3) return 0;
    {
        int v_4 = z->l - z->c;
        z->ket = z->c;
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 117)) goto lab3;
        if (!kronuz_snowball_find_among_b(z, a_1)) goto lab3;
        z->bra = z->c;
        {
            int ret = kronuz_snowball_slice_del(z);
            if (ret < 0) return ret;
        }
        ((SN_local *)z)->i_measure -= 1;
    lab3:
        z->c = z->l - v_4;
    }
    z->c = z->lb;
    if (((SN_local *)z)->i_measure < 3) return 0;
    do {
        int v_5 = z->c;
        {
            int v_6 = z->c;
            z->bra = z->c;
            if (z->c + 1 >= z->l || (z->p[z->c + 1] != 105 && z->p[z->c + 1] != 101)) goto lab4;
            among_var = kronuz_snowball_find_among(z, a_3);
            if (!among_var) goto lab4;
            z->ket = z->c;
            switch (among_var) {
                case 1:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    ((SN_local *)z)->i_prefix = 1;
                    ((SN_local *)z)->i_measure -= 1;
                    break;
                case 2:
                    do {
                        int v_7 = z->c;
                        if (z->c == z->l || z->p[z->c] != 'y') goto lab5;
                        z->c++;
                        {
                            int v_8 = z->c;
                            if (kronuz_snowball_in_grouping_U(z, g_vowel, 97, 117, 0)) goto lab5;
                            z->c = v_8;
                        }
                        z->ket = z->c;
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_3);
                            if (ret < 0) return ret;
                        }
                        ((SN_local *)z)->i_prefix = 1;
                        ((SN_local *)z)->i_measure -= 1;
                        break;
                    lab5:
                        z->c = v_7;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        ((SN_local *)z)->i_prefix = 1;
                        ((SN_local *)z)->i_measure -= 1;
                    } while (0);
                    break;
                case 3:
                    {
                        int ret = kronuz_snowball_slice_del(z);
                        if (ret < 0) return ret;
                    }
                    ((SN_local *)z)->i_prefix = 3;
                    ((SN_local *)z)->i_measure -= 1;
                    break;
                case 4:
                    do {
                        int v_9 = z->c;
                        if (z->c == z->l || z->p[z->c] != 'y') goto lab6;
                        z->c++;
                        {
                            int v_10 = z->c;
                            if (kronuz_snowball_in_grouping_U(z, g_vowel, 97, 117, 0)) goto lab6;
                            z->c = v_10;
                        }
                        z->ket = z->c;
                        {
                            int ret = kronuz_snowball_slice_from_s(z, 1, s_4);
                            if (ret < 0) return ret;
                        }
                        ((SN_local *)z)->i_prefix = 3;
                        ((SN_local *)z)->i_measure -= 1;
                        break;
                    lab6:
                        z->c = v_9;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                        ((SN_local *)z)->i_prefix = 3;
                        ((SN_local *)z)->i_measure -= 1;
                    } while (0);
                    break;
                case 5:
                    ((SN_local *)z)->i_prefix = 1;
                    ((SN_local *)z)->i_measure -= 1;
                    do {
                        int v_11 = z->c;
                        {
                            int v_12 = z->c;
                            if (kronuz_snowball_in_grouping_U(z, g_vowel, 97, 117, 0)) goto lab7;
                            z->c = v_12;
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 1, s_5);
                                if (ret < 0) return ret;
                            }
                        }
                        break;
                    lab7:
                        z->c = v_11;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                    } while (0);
                    break;
                case 6:
                    ((SN_local *)z)->i_prefix = 3;
                    ((SN_local *)z)->i_measure -= 1;
                    do {
                        int v_13 = z->c;
                        {
                            int v_14 = z->c;
                            if (kronuz_snowball_in_grouping_U(z, g_vowel, 97, 117, 0)) goto lab8;
                            z->c = v_14;
                            {
                                int ret = kronuz_snowball_slice_from_s(z, 1, s_6);
                                if (ret < 0) return ret;
                            }
                        }
                        break;
                    lab8:
                        z->c = v_13;
                        {
                            int ret = kronuz_snowball_slice_del(z);
                            if (ret < 0) return ret;
                        }
                    } while (0);
                    break;
            }
            {
                int v_15 = z->c;
                {
                    int v_16 = z->c;
                    if (((SN_local *)z)->i_measure < 3) goto lab9;
                    z->lb = z->c; z->c = z->l;
                    {
                        int ret = r_remove_suffix(z);
                        if (ret == 0) goto lab9;
                        if (ret < 0) return ret;
                    }
                    z->c = z->lb;
                    z->c = v_16;
                }
                if (((SN_local *)z)->i_measure < 3) goto lab9;
                {
                    int ret = r_remove_second_order_prefix(z);
                    if (ret == 0) goto lab9;
                    if (ret < 0) return ret;
                }
            lab9:
                z->c = v_15;
            }
            z->c = v_6;
        }
        break;
    lab4:
        z->c = v_5;
        {
            int v_17 = z->c;
            {
                int ret = r_remove_second_order_prefix(z);
                if (ret < 0) return ret;
            }
            z->c = v_17;
        }
        {
            int v_18 = z->c;
            if (((SN_local *)z)->i_measure < 3) goto lab10;
            z->lb = z->c; z->c = z->l;
            {
                int ret = r_remove_suffix(z);
                if (ret == 0) goto lab10;
                if (ret < 0) return ret;
            }
            z->c = z->lb;
        lab10:
            z->c = v_18;
        }
    } while (0);
    return 1;
}

extern struct kronuz_snowball_SN_env * kronuz_snowball_indonesian_create_env(void) {
    return kronuz_snowball_SN_new_env(sizeof(SN_local));
}
