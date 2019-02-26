#include <stdio.h>

#include "definitions.h"
#include "topsort.h"

int main(
        void)
{
    int edges = 0,
        vertices = 0,
        src = 0,
        dst = 0;

    STACK * stack;
    GRAPH * graph;

    if (scanf("%d", &edges) == EOF) LINE_NUM_ERROR;
    if (scanf("%d", &vertices) == EOF) LINE_NUM_ERROR;
    if (!(edges > -1 && edges < 1001)) VERTEX_NUM_ERROR;
    if (!(vertices > -1 && vertices < (edges - 1) * edges / 2 + 1)) EDGE_NUM_ERROR;

    graph = initGraph((size_t)edges);
    stack = initStack((size_t)edges);

    for (size_t k = 0; k < vertices; k++) {
        if (scanf("%d %d", &src, &dst) == EOF) LINE_NUM_ERROR;

        if (!(src > 0 && src < edges + 1) || !(dst > 0 && dst < edges + 1)) VERTEX_INPUT_ERROR;

        addVertex(graph, (short)src, (short)dst);
    }

    topSort(graph, stack);

    while (stack->stack_pos > 0)
        printf("%d ", stack->stack[--stack->stack_pos]);

    return 0;
}