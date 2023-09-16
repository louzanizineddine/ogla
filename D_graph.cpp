#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "D_graph.h"

using namespace std;

int min_cost(D_graph g, int source , int dest){
    if (source == dest) return 0;
    vector<int> S;
    vector<int> D; // array of cost for each neighbour of source
    S.push_back(source);

    for (int j = 0; j < g.n and j != source ; j ++)
    {
        D.push_back(g.adj[source][j]);
    }
    
    for (int i = 0; i < g.n and i != source; i ++)
    {
        
    }
    return 0;
}

void read_graph_file(string filename, D_graph &g)
{
    fstream file;

    file.open(filename, ios::in);

    if (file.is_open()){
        string temp;
        vector<int> temp_int;
        int current_row = 0;
        getline(file, temp);
        g.n = stoi(temp);
        g.adj = new int*[g.n];
 
        for (int i = 0; i < g.n; i++) {
    
            // Declare a memory block
            // of size n
            g.adj[i] = new int[g.n];
        }

        while(getline(file, temp)){
            temp_int = split(temp, " ");

            for (int j = 0; j < temp_int.size(); j++){
                g.adj[current_row][j] = temp_int.at(j);
            }

            current_row++;
        }
    }

    file.close();
}

// for string delimiter
std::vector<int> split(std::string s, std::string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    int token;
    std::vector<int> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
        token = stoi(s.substr (pos_start, pos_end - pos_start));
        pos_start = pos_end + delim_len;

        res.push_back (token);
    }

    res.push_back (stoi(s.substr (pos_start)));
    return res;
}

void print_matrix(int **m, int size){
    for (int i = 0 ; i < size; i++){
        for (int j = 0 ; j < size; j++){
            cout << m[i][j] << " " ;
        }

        cout << endl;
    }
}

std::ostream &operator<<(std::ostream &os, const std::vector<int> &input)
{
    for (auto const &i: input) {
        os << i << " ";
    }
    return os;
}