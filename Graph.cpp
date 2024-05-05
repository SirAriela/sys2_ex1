#include "Graph.hpp"
#include <iostream>
#include <vector>

#include "Graph.hpp"

namespace ariel {

    // Constructor definition
    Graph::Graph() {
        // Initialize any member variables if needed
    }

    // Implement other member functions here...

    void Graph::loadGraph(vector<vector<int>> graph){
        this->g = graph;
    }

    void Graph::printGraph(){
        for (const auto& row : this->g) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }

}
