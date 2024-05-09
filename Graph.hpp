#pragma once

#include <cstddef>
#include <vector>
using namespace std;

namespace ariel{
    class Graph {
        vector<vector<int>> g; // the graph
        int is_connected; // 1 - is connected, 0 - otherwise
        int is_directed; // 1 - is directed, 0 - otherwise
        size_t size; // the size of vector
    public:
        // Constructor
        Graph();

        // Function to load graph from adjacency matrix
        void loadGraph(vector<vector<int>> graph);

        // Function to print graph 
        void printGraph();

        //if directed return 1, otherwise 0
        int isDirected();
 
        // getters and setters for contributes
        void setDirected(int change);
        int getDirected();

        //returns the weight of an edge, if there is none returns ZERO
        size_t getData(unsigned i,unsigned j);

        void setConnected(int change);
        int getConnected();

        void setSize(int change);
        size_t getSize();

    };
}