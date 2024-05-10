#include "Algorithms.hpp"
#include "Graph.hpp"
#include <cmath>
#include <cstddef>
#include <queue>
#include <string>
#include <vector>

using namespace std;
enum Answer { ZERO, ONE };

namespace ariel {
namespace Algorithms {

vector<bool> Algorithm::BFS(Graph g, int start_index) {
  // vars
  size_t start = static_cast<size_t>(start_index);
  size_t sizeOfGraph = g.getSize();
  vector<bool> visited(sizeOfGraph, false);
  queue<size_t> q;

  // add first vertex into q and mark it true
  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    // check the top vertex neighbors
    size_t current = q.front();
    q.pop();
    for (size_t i = 0; i < sizeOfGraph; i++) {
      // dont need to check it with himself
      if (i != current) {
        size_t x = g.getData(current, i);
        // check if neighbor is alredy visited
        if (x != ZERO) {
          if (!visited[i]) {
            // if not visited yet, marks as visited and add him to queue
            visited[i] = true;
            q.push(i);
          }
        }
      }
    }
  }

  return visited;
}
// using BFS checking if a graph is connected or not
int Algorithm::isConnected(Graph g) {
  for (int i = 0; i < g.getSize(); i++) {
    vector<bool> checkIfAllVisited = BFS(g, i);
    for (unsigned int j = 0; j < g.getSize(); j++) {
      if (!checkIfAllVisited[j])
        return ZERO;
    }
  }
  return ONE;
}

string Algorithm::shortestPath(Graph g, int start, int end) { return ""; }

string Algorithm::isContainsCycle(Graph g) {
  
  return 0; 
}

string Algorithm::isBipartite(Graph g) {
  // Implementation goes here
  return ""; // Placeholder return value
}

string Algorithm::negativeCycle(Graph g) {
  size_t sizeOfGraph = g.getSize();
  vector<bool> visited(sizeOfGraph, false);
  vector<int> distance(sizeOfGraph, INFINITY);
  distance[ZERO] = ZERO;
  string negetiveCycle = " ";
  size_t n = sizeOfGraph - 1;

//size - 1 times 
  for (size_t i = 0; i < n; i++) {
    //for all vertexes
    for (size_t curretnt = 0; curretnt < sizeOfGraph; curretnt++) {
      //check neighbor for each neighbor
      for (size_t j = 0; j < sizeOfGraph; j++) {
        if(curretnt != j){
          int weight = g.getData(curretnt, j);
          int distanceStart = distance[curretnt];
          int distanceNext = distance[j];

          //relax
          if ((weight + distanceStart < distanceNext) && weight != 0)  {
            distance[j] = weight + distanceStart;
          
          }
        }
      }
    }
  }


  for (size_t curretnt = 0; curretnt < sizeOfGraph; curretnt++) {
    for (size_t j = 0; j < sizeOfGraph; j++) {
      int wieght = g.getData(curretnt, j);
      int distanceCurrent = distance[curretnt];
      int wieghtToNewVertex = distance[j];
      if ((wieght + distanceCurrent < wieghtToNewVertex) && wieght != 0 && curretnt != j) {
         return "there is a negetive cycle";
      }
      
    }
    
  }
  return "there is no negetive cycle";
}

}
}