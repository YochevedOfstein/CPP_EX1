// yocheved@davidowitz.net | 324460682

#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Graph.hpp"
#include <string>
#include <iostream>

enum Color{
    White,
    Grey,
    Black,
    Red,
    Blue
};

using namespace std;

namespace ariel {
    
    class Algorithms{

        private:

        static vector<vector<int>> dfsMain(const Graph& g);

        static vector<int> dfsVisit(const Graph& g, size_t vertex, vector<Color>& colors);

        static string dfsFindCycle(const Graph& g, size_t v, vector<Color>& colors, vector<int>& parents, vector<int>& path);

        static string createCycle(vector<int>& path, size_t src);

        static string bfs(const Graph& g, size_t start, size_t end);

        static string dijkstra(const Graph& g, size_t start, size_t end);

        static string bellmanFord(const Graph& g, size_t start, size_t end);
        
        
        public:

        static bool isConnected(const Graph& graph);

        static string shortestPath(const Graph& graph, size_t start, size_t end);

        static string isContainsCycle(const Graph& graph);

        static string isBipartite(const Graph& graph);

        static string negativeCycle(const Graph& graph);

    };
}

#endif 
