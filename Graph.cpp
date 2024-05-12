//206862666
//ariela

#include "Graph.hpp"
#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>
#include "Graph.hpp"


namespace ariel {
    enum Answer {ZERO,ONE};
    //contrauctor
    Graph::Graph() {
        
    }
    int Graph::getData(size_t i,size_t j){
        return this->g[i][j];
    }
    
    void Graph::loadGraph(vector<vector<int>> graph){
        this->g = graph;
        this->size = graph.size();
        int directed = isDirected();
        setDirected(directed);
    }

    void Graph::printGraph(){
       string print="";
       int count =0;
       print+= "Graph with " + to_string(this->size) + " vertixes and ";
       
       for(size_t i =0;i<size;i++){
        for(size_t j =0 ;j<size; j++){
            if(getData(i, j) != 0){
                count++;
            }
        }
       }
        if(is_directed){
            print+= to_string(count) + " edges";
        }
        else print+= to_string(count/2) + " edges";

        
        cout << print << endl;
        
       

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
        this->size =(unsigned)change;
    }
    size_t Graph::getSize(){
        return this->size;
    }


}
