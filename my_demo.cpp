#include "Algorithms.hpp"
#include "Graph.hpp"
#include <vector>
#include <iostream>

using namespace std;


int main(){
ariel::Graph g;

  vector<vector<int>> graph5 ={
    {0, 5, 0, 0, 0, 0},
    {0, 0, 7, 0, 0, 1},
    {0, 0, 0, 0, -6, 0}, 
    {0, -4, 0, 0, 0, 0}, 
    {0, 0, 0, 1, 0, 0}, 
    {0, 0, 3, 0, 0, 0}, 
  };

  vector<vector<int>> graph1 = {
      {0, 3, 0, 0}, 
{0, 0, 1, 0}, 
{-7, 0, 0, 11}, 
{11, 0, 0, 0}, 

  };

  vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};

   //g.loadGraph(graph2);
  //g.loadGraph(graph1);
  g.loadGraph(graph5);
  string x = ariel::Algorithms::Algorithm::negativeCycle(g);
  cout << x << endl;
}