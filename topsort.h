#pragma once

#ifndef TOPSORT_TOPSORT_H
#define TOPSORT_TOPSORT_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "definitions.h"

typedef enum {
    WHITE,
    GREY,
    BLACK
} COLOUR;


typedef struct
{
    size_t size;
    short ** adjacency_list;
    COLOUR * colours;
} GRAPH;


typedef struct
{
    size_t * stack;
    int stack_pos;
} STACK;

STACK * initStack(
        size_t size);

GRAPH * initGraph(
        size_t size);

void addVertex(
        GRAPH *graph,
        short src,
        short dst);

void topSort(
        GRAPH * graph,
        STACK * stack);

#endif
