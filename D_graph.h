#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct D_graph_t {
    int n;
    int **adj;
};
typedef struct D_graph_t D_graph;

void read_graph_file(string filename, D_graph &g);
std::vector<int> split(std::string s, std::string delimiter);
void print_matrix(int **m, int size);
int min_cost(D_graph g, int source , int dest);