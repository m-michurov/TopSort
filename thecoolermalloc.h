#pragma once

#ifndef THECOOLERMALLOC_H
#define THECOOLERMALLOC_H

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <memory.h>

#define ALLOC_COUNT_ERROR   do {puts("MAXIMUM ALLOCATIONS LIMIT EXCEEDED");    exit(EXIT_SUCCESS);} while(0)
#define REALLOC_NULL_ERROR  {puts("UNABLE TO REALLOCATE NULL POINTER");     exit(EXIT_SUCCESS);};

#ifndef MEM_ERROR
#define MEM_ERROR           {puts("UNABLE TO ALLOCATE MEMORY");             exit(EXIT_SUCCESS);};
#endif

#define MAX_ALLOC_COUNT 65535

void * allocate(
        size_t size);

void * reallocate(
        void * src,
        size_t new_size);

void freeall(
        void);

void freeone(
        void * dst);

#endif
