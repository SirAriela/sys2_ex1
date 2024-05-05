#include "Graph.hpp"
#include <string>

namespace ariel
{
    namespace Algorithms {
        class Algorithm {
            public:
                static int isConnected(Graph g);
                static std::string shortestPath(Graph g, int start, int end);
                static int isContainsCycle(Graph g);
                static string isBipartite(Graph g);
                static std::string negativeCycle(Graph g);
        };
    }
} // namespace ariel