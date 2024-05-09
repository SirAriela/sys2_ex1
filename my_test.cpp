#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Algorithms.hpp"
#include "Graph.hpp"
#include <vector>

using namespace std;
using namespace ariel::Algorithms;


TEST_CASE("Test isConnected")
{
  ariel::Graph g;
   vector<vector<int>> graph1 = {
      {0, 1, 0, 1, 1, 0},
      {1, 0, 0, 0, 0, 1}, 
      {0, 0, 0, 1, 0, 0},
      {1, 0, 1, 0, 0, 0}, 
      {1, 0, 0, 0, 0, 0}, 
      {0, 1, 0, 0, 0, 0},

  };
  g.loadGraph(graph1);

  CHECK(Algorithm::isConnected(g) == true);

  vector<vector<int>> graph2 = {
      {0, 0, 0, 0, 0, 3},
      {0, 0, 0, 0, 3, 0},
      {0, 5, 0, 1, 0, 0},
      {0, 0, 0, 0, 0, 1},
      {7, 0, 5, 0, 0, 0},
      {0, 0, 0, 0, 1, 0},
  };
  g.loadGraph(graph2);
  CHECK(Algorithm::isConnected(g) == true);

  vector<vector<int>> graph3={
    {0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 3}, 
    {0, 5, 0, 1, 0}, 
    {0, 0, 0, 0, 0}, 
    {7, 0, 5, 0, 0},
    };
  g.loadGraph(graph3);
  CHECK(Algorithm::isConnected(g) == false);
}