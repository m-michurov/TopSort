#include "topsort.h"

inline STACK * initStack(
        size_t size)
{
    STACK * stack = (STACK *) allocate(sizeof(STACK));

    stack->stack = (size_t *) allocate(sizeof(size_t) * size);

    return stack;
}

GRAPH * initGraph(
        size_t size)
{
    GRAPH * new_graph = (GRAPH *) allocate(sizeof(GRAPH));

    new_graph->adjacency_list = (short **) allocate((size + 1) * sizeof(short *));
    new_graph->colours = (COLOUR *) allocate((size + 1) * sizeof(COLOUR));
    new_graph->size = size;

    size += 1;

    for (size_t k = 1; k < size; k++) {
        new_graph->adjacency_list[k] = (short *) allocate(sizeof(short));

        new_graph->colours[k] = WHITE;
    }

    return  new_graph;
}

void addVertex(
        GRAPH * graph,
        short src,
        short dst)
{
    if (graph == NULL)
        return;

    size_t pos;

    for (pos = 0; graph->adjacency_list[src][pos] > 0 && graph->adjacency_list[src][pos] != dst; pos++);

    graph->adjacency_list[src] = (short *) reallocate(graph->adjacency_list[src], (pos + 2) * sizeof(short));

    graph->adjacency_list[src][pos++] = dst;
    graph->adjacency_list[src][pos] = 0;
}

static void dfs(
        size_t vertex,
        GRAPH * graph,
        STACK * stack)
{
    if (graph->colours[vertex] == BLACK)
        return;

    if (graph->colours[vertex] == GREY) SORT_ERROR;

    graph->colours[vertex] = GREY;

    for (size_t pos = 0; graph->adjacency_list[vertex][pos] > 0; pos++) {
        dfs((size_t)graph->adjacency_list[vertex][pos], graph, stack);
    }

    graph->colours[vertex] = BLACK;

    stack->stack[stack->stack_pos++] = vertex;
}

inline void topSort(
        GRAPH * graph,
        STACK * stack)
{
    for (size_t k = 1; k < graph->size + 1; k++)
        dfs(k, graph, stack);
}
/*
void freeStack(
        STACK * stack)
{
    if (stack == NULL)
        return;

    free(stack->stack);
    free(stack);
}

void freeGraph(
        GRAPH * graph)
{
    if (graph == NULL)
        return;

    free(graph->colours);

    for (size_t k = 0; k < graph->size; k++)
        free(graph->adjacency_list[k]);

    free(graph->adjacency_list);
    free(graph);
}
*/