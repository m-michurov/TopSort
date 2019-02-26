#pragma  once

#ifndef TOPSORT_DEFINITIONS_H
#define TOPSORT_DEFINITIONS_H

#include <stdio.h>

#define MEM_ERROR           {puts("Error: unable to allocate memory");  exit(EXIT_SUCCESS);};
#define SORT_ERROR          {puts("impossible to sort");                exit(EXIT_SUCCESS);};
#define VERTEX_NUM_ERROR      {puts("bad number of vertices");          exit(EXIT_SUCCESS);};
#define EDGE_NUM_ERROR      {puts("bad number of edges");               exit(EXIT_SUCCESS);};
#define LINE_NUM_ERROR      {puts("bad number of lines");               exit(EXIT_SUCCESS);};
#define VERTEX_INPUT_ERROR    {puts("bad vertex");                      exit(EXIT_SUCCESS);};

#endif
