#include <iostream>
#include "D_graph.h"
using namespace std;

/*
    main: the entry point of the program
    argc: the number of arguments passed to the program
    argv: an array of strings containing the arguments
*/

int main(int argc, char *argv[]) {
    
    D_graph graph;
    D_graph &g = graph;

    
    read_graph_file("graph", g);
    print_matrix(g.adj , g.n);
    
    print_matrix(g.adj , g.n);

    min_cost(graph, 24522 , 4);
    return 0;
}
