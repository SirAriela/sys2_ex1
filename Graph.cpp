#include "Graph.hpp"
#include <iostream>


#include "Graph.hpp"


namespace ariel {
    enum Answer {ZERO,ONE};
    //contrauctor
    Graph::Graph() {
        
    }
    
    void Graph::loadGraph(vector<vector<int>> graph){
        this->g = graph;
        this->size = graph.size();
        int directed = isDirected();
        setDirected(directed);
    }

    void Graph::printGraph(){
        for (unsigned int i = 0; i < size; i++) {
            for (unsigned int j = 0; j < size; j++) {
                std::cout << this->g[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    void Graph::setDirected(int change)
    {
        this->is_directed = change;

    }

    int Graph::isDirected(){
         for (unsigned int i = 0; i < size; i++) {
            for (unsigned int j = 0; j < size; j++) {
                if(this->g[i][j] != this->g[j][i])
                return ZERO;
            }
         }
            return ONE;
    }

    int Graph::getDirected(){
        return this->is_directed;
    }

    void Graph::setConnected(int change){
        this->is_connected = change;
    }
    int Graph::getConnected(){
        return this->is_connected;
    }
    
     void Graph::setSize(int change){
        this->size = change;
    }
    int Graph::getSize(){
        return this->size;
    }


}
