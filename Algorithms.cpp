#include "Algorithms.hpp"
#include "Graph.hpp"
#include <vector>
#include <queue>

using namespace std;

namespace ariel {
    namespace Algorithms {
        static vector<bool> BFS(Graph g, int start)
        {
            int sizeOfGraph = g.getSize();
            vector<bool> visited(sizeOfGraph,false);
            queue<int> q;   

            




            return visited;
        }
        int Algorithm::isConnected(Graph g) {
            return 0;
        }

        string Algorithm::shortestPath(Graph g, int start, int end) {
            // Implementation goes here
            return ""; // Placeholder return value
        }

        string Algorithm::isContainsCycle(Graph g) {
            // Implementation goes here
            return 0; // Placeholder return value
        }

        string Algorithm::isBipartite(Graph g) {
            // Implementation goes here
            return ""; // Placeholder return value
        }

        string Algorithm::negativeCycle(Graph g) {
            // Implementation goes here
            return ""; // Placeholder return value
        }
    }
}