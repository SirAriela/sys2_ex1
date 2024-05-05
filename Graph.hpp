#pragma once

#include <vector>
using namespace std;

namespace ariel{
    class Graph {
        vector<vector<int>> g;
    public:
        // Constructor
        Graph();

        // Function to load graph from adjacency matrix
        void loadGraph(vector<vector<int>> graph);

        // Function to print graph representation
        void printGraph();
    };
}