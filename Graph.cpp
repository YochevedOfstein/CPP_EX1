// yocheved@davidowitz.net | 324460682

#include "Graph.hpp"

using namespace std;
using namespace ariel;

Graph::Graph(){
    this->numOfVertices = 0;
    this->isDirected = false;
    this->isWeighted = false;
    this->hasNegitiveWeights = false;
}

void Graph::loadGraph(vector<vector<int>> &matrix){

    this->numOfVertices = matrix.size();
    this->adjMatrix = matrix;

    for(size_t i = 0; i < adjMatrix.size(); i++){
        if(adjMatrix.size() != adjMatrix[i].size()){
            throw invalid_argument("Invalid graph - this graph is not a square matrix");
        }
        for(size_t j = 0; j < adjMatrix[i].size(); j++){

            if(i == j && adjMatrix[i][j] != 0){
                throw invalid_argument("Invalid graph - the diagonal must be all 0 "); 
            }
            if(adjMatrix[i][j] != adjMatrix[j][i]){
                this->isDirected = true;
            }
            if(adjMatrix[i][j] > 1){
                this->isWeighted = true; 
            }
            if(adjMatrix[i][j] < 0){
                this->isWeighted = true; 
                this->hasNegitiveWeights = true;
            }
        }
    }
}

void Graph::printGraph()const{

    size_t edges = 0;
    size_t vertices = this->numOfVertices;

    for(size_t i = 0; i < vertices ; i++){
        for(size_t j = 0; j < vertices; j++){
            if(adjMatrix[i][j] != 0){
                edges++;
            }
        }
    }
    if(!(this->isDirected)){
        edges = edges/2;
    }
    cout << "Graph with " << numOfVertices << " and " << edges << " edges" << endl;

}

bool Graph::hasNegativeWeitedEdeges() const{
    return this->hasNegitiveWeights;
}

bool Graph::isDirectedGraph()const{
    return this->isDirected;
}

bool Graph::isWeightedGraph()const{
    return this->isWeighted;
}

size_t Graph::getNumOfVertices()const{
    return this->numOfVertices;
}

int Graph::getWeight(size_t u, size_t v)const{

    if (u >= adjMatrix.size() || v >= adjMatrix.size()) {
        throw out_of_range("Invalid vertex index");
    }
    if(!isWeightedGraph()){
        throw runtime_error("Graph has no weights");
    }

    return adjMatrix[u][v];
}

vector<size_t> Graph::getNeighbors(size_t v) const{
    vector<size_t> neighbors;

    for(size_t i = 0; i < getNumOfVertices(); i++){
        if(adjMatrix[v][i] != 0){
            neighbors.push_back(i);
        }
    }

    return neighbors;
}

vector<vector<int>> Graph::getGraph()const{
    return this->adjMatrix;
}