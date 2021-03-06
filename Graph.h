#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include "Node.h"
#ifndef ANT2_GRAPH_H
#define ANT2_GRAPH_H
#define SETWVALUE 8

using namespace std;

class Graph{
    double evaporationSpeed;
    int ** adjacencyGraph;
    double ** fermon;
public:
    Graph(double);

    int ** getAdjacencyGraph();
    double ** getFermons();
    float getFermon(int, int);
    void evaporateFermons();
    void leaveFermon(vector<pair<int, int>>points, double wayLength);
    template <typename T>
    void showMatrix(T** matrix);
    vector<int> getConnections(int currentPosition, vector<bool> visited);
    int getWayLength(int, int);
    void getAdjacencyGraphFromFile();
};

template<typename T>
T **createMatrix(T initializer);



#endif //ANT2_GRAPH_H
