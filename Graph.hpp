// yocheved@davidowitz.net | 324460682

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <limits>

#define INF numeric_limits<int>::max()

using namespace std;

namespace ariel{
    class Graph{
        
        private:

        vector<vector<int>> adjMatrix;

        size_t numOfVertices;

        bool isDirected;
        bool isWeighted;
        bool hasNegitiveWeights;

        public:

        Graph();

        void loadGraph(vector<vector<int>> &matrix);

        void printGraph()const;

        bool hasNegativeWeitedEdeges()const;

        bool isWeightedGraph()const;

        bool isDirectedGraph()const;

        size_t getNumOfVertices()const;

        vector<size_t> getNeighbors(size_t v)const;

        vector<vector<int>> getGraph()const;

        int getWeight(size_t start, size_t end)const;

    };
}

#endif 
