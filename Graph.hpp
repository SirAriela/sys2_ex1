#pragma once

#include <vector>
using namespace std;

namespace ariel{
    class Graph {
        vector<vector<int>> g; // the graph
        int is_connected; // 1 - is connected, 0 - otherwise
        int is_directed; // 1 - is directed, 0 - otherwise
        int size; // the size of vector
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

        void setConnected(int change);
        int getConnected();

        void setSize(int change);
        int getSize();

    };
}