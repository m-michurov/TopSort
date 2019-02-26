#include "topsort.h"

inline STACK * initStack(
        size_t size)
{
    STACK * stack = malloc(sizeof(STACK));

    if (stack == NULL) MEM_ERROR;

    stack->stack = malloc(sizeof(size_t) * size);

    if (stack->stack == NULL) MEM_ERROR;

    stack->stack_pos = 0;

    return stack;
}

GRAPH * initGraph(
        size_t size)
{
    GRAPH * new_graph = (GRAPH *)malloc(sizeof(GRAPH));

    if (new_graph == NULL) MEM_ERROR;

    new_graph->adjacency_list = (short **)malloc((size + 1) * sizeof(short *));
    new_graph->colours = (COLOUR *)malloc((size + 1) * sizeof(COLOUR));
    new_graph->size = size;

    if (new_graph->adjacency_list == NULL) MEM_ERROR;

    size += 1;

    for (size_t k = 1; k < size; k++) {
        new_graph->adjacency_list[k] = malloc(sizeof(short));

        if (new_graph->adjacency_list[k] == NULL) MEM_ERROR;

        new_graph->adjacency_list[k][0] = 0;

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

    graph->adjacency_list[src] = realloc(graph->adjacency_list[src], (pos + 2) * sizeof(short));

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
