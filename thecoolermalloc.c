#include "thecoolermalloc.h"

static void * allocated_memory[MAX_ALLOC_COUNT] = { NULL };
static size_t ptr_arr_pos = 0;


void * allocate(
        size_t size)
{
    if (ptr_arr_pos == MAX_ALLOC_COUNT) ALLOC_COUNT_ERROR;

    char * new = malloc(size);

    if (new == NULL) MEM_ERROR;

    memset(new, 0, size);

    allocated_memory[ptr_arr_pos++] = new;

    return new;
}


void * reallocate(
        void * src,
        size_t new_size)
{
    if (src == NULL) REALLOC_NULL_ERROR;

    size_t idx = 0;
    for (idx = 0; idx < ptr_arr_pos && src != allocated_memory[idx]; idx++ );

    src = realloc(src, new_size);

    if (src == NULL) MEM_ERROR;

    allocated_memory[idx] = src;

    return src;
}


void freeall(
        void)
{
    for (size_t idx = 0; idx < ptr_arr_pos; idx++) {
        free(allocated_memory[idx]);

        allocated_memory[idx] = NULL;
    }
}


void freeone(
        void * dst)
{
    if (dst == NULL)
        return;

    size_t idx = 0;
    for (idx = 0; idx < ptr_arr_pos && dst != allocated_memory[idx]; idx++ );

    if (idx < ptr_arr_pos) {
        allocated_memory[idx] = NULL;

        free(dst);
    }
}