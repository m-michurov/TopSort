#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "definitions.h"

typedef struct st_Graph GRAPH;
typedef struct st_Vertex VERTEX;
typedef struct st_Stack STACK;

struct st_Graph
{
    size_t size;
    VERTEX * vertices;
    short ** adjacency_list;
    COLOUR * colours;
};

struct st_Vertex
{
    unsigned short * adjacency_list;
};

struct st_Stack
{
    size_t * stack;
    int stack_pos;
};

GRAPH * initGraph(
        size_t size)
{
    size += 1;

    GRAPH * new_graph = (GRAPH *)malloc(sizeof(GRAPH));

    if (new_graph == NULL) MEM_ERROR;

    new_graph->vertices = (VERTEX *)malloc((size + 1) * sizeof(VERTEX));
    new_graph->adjacency_list = (short **)malloc((size + 1) * sizeof(short *));
    new_graph->colours = (COLOUR *)malloc((size + 1) * sizeof(COLOUR));

    if (new_graph->vertices == NULL) MEM_ERROR;

    for (size_t k = 1; k < size; k++) {
        new_graph->vertices[k].adjacency_list = malloc(sizeof(short));

        if (new_graph->vertices[k].adjacency_list == NULL) MEM_ERROR;

        new_graph->vertices[k].adjacency_list[0] = 0;

        new_graph->adjacency_list[k] = malloc(sizeof(short));

        if (new_graph->adjacency_list[k] == NULL) MEM_ERROR;

        new_graph->adjacency_list[k][0] = 0;

        new_graph->colours[k] = WHITE;
    }

    return  new_graph;
}


void addVertex(
        GRAPH *graph,
        size_t src,
        size_t dst)
{
    if (graph == NULL)
        return;

    size_t pos;

    for (pos = 0; graph->vertices[src].adjacency_list[pos] > 0 && graph->vertices[src].adjacency_list[pos] != (unsigned short)dst; pos++);

    graph->vertices[src].adjacency_list = realloc(graph->vertices[src].adjacency_list, (pos + 2) * sizeof(short));

    graph->vertices[src].adjacency_list[pos++] = (short)dst;

    graph->vertices[src].adjacency_list[pos] = 0;
}

void dfs(
        GRAPH * graph,
        size_t vertex,
        STACK * stack)
{
    if (graph->colours[vertex] == BLACK)
        return;

    if (graph->colours[vertex] == GREY) SORT_ERROR;

    graph->colours[vertex] = GREY;

    for (size_t pos = 0; graph->vertices[vertex].adjacency_list[pos] > 0; pos++) {
        dfs(graph, graph->vertices[vertex].adjacency_list[pos], stack);
    }

    graph->colours[vertex] = BLACK;

    stack->stack[stack->stack_pos++] = (short)vertex;
}

int main(
        void)
{
    int edges = 0,
        vertices = 0,
        src = 0,
        dst = 0;

    STACK stack;
    GRAPH * graph;

    FILE * in = fopen("in.txt", "rt");

    if (fscanf(in, "%d", &edges) == EOF) LINE_NUM_ERROR;
    if (fscanf(in, "%d", &vertices) == EOF) LINE_NUM_ERROR;

    if (!(edges > -1 && edges < 1001)) VERTEX_NUM_ERROR;
    if (!(vertices > -1 && vertices < (edges - 1) * edges / 2 + 1)) EDGE_NUM_ERROR;

    graph = initGraph((size_t)edges);

    stack.stack = malloc(sizeof(size_t) * edges);
    stack.stack_pos = 0;

    if (stack.stack == NULL) MEM_ERROR;

    for (size_t k = 0; k < vertices; k++) {
        if (fscanf(in, "%d %d", &src, &dst) == EOF) LINE_NUM_ERROR;

        if (!(src > 0 && src < edges + 1) || !(dst > 0 && dst < edges + 1)) VERTEX_INPUT_ERROR;

        addVertex(graph, (size_t)src, (size_t)dst);
    }
/*
    for (size_t k = 1; k < edges + 1; k++) {
        for (VERTEX * vertex = &graph->vertices[k]; vertex != NULL; vertex = vertex->next)
            printf("%u ", vertex->num);
        printf("\n");
    }

    puts("- - -");
*/
    for (size_t k = 1; k < edges + 1; k++) {
        dfs(graph, k, &stack);
    }

    while (stack.stack_pos > 0)
        printf("%d ", stack.stack[--stack.stack_pos]);

    return 0;
}