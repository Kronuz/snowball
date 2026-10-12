
#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for memset */
#include "snowball_runtime.h"

extern struct kronuz_snowball_SN_env * kronuz_snowball_SN_new_env(int alloc_size)
{
    struct kronuz_snowball_SN_env * z = (struct kronuz_snowball_SN_env *) malloc(alloc_size);
    if (z == NULL) return NULL;
    /* This memset() will initialise z->p to all-bits-zero which (at least
     * theoretically) may not be the NULL pointer representation, but that's OK
     * as immediately afterwards we assign to z->p.
     */
    memset(z, 0, alloc_size);
    z->p = kronuz_snowball_create_s();
    if (z->p == NULL) {
        kronuz_snowball_SN_delete_env(z);
        return NULL;
    }
    return z;
}

extern void kronuz_snowball_SN_delete_env(struct kronuz_snowball_SN_env * z)
{
    if (z == NULL) return;
    if (z->p) kronuz_snowball_lose_s(z->p);
    free(z);
}

extern int kronuz_snowball_SN_set_current(struct kronuz_snowball_SN_env * z, int size, const symbol * s)
{
    int err = kronuz_snowball_replace_s(z, 0, z->l, size, s);
    z->c = 0;
    return err;
}
