yocheved@davidowitz.net | 324460682

# System Programing 2 - assignmant 1

this is a c++ program that provides various graph algorithms and functionalities. It includes algorithms for determining graph connectivity, finding shortest paths, detecting cycles, and identifying bipartite graphs.

**Classes:**
The two main classes in this assignment are:
    Graph.cpp
    Algorythems.cpp

**Graph:**
This class represents a graph that supports both directed and undirected graphs using adjacency matrices.

We have two main functions in this class:
    1. loadGraph - This function anitializes the graph using a givan adjacency matrix. It will check that the input is valid and set the graphs properties.
    2. printGraph - this function prints the amount of vertices and edges that are in th graph. 

In addition to the two main functions there are a few helper getter functions that help us use different graph properties. For example we have a function named getNumOfVertices.

**Algorithms**
This class encapsulates various graph algorithms and functionalities.

we have five main functions in this class:
    1. isConnected - This function determines whether the graph is connected or not. We will use the DFS algorithm to check if the graph is connected or not, if the graph is undirected we will perform DFS a second time. If graph is connected the function will return true, if not it will return false.
    2. shortestPath - Given two vertices, this function checks what the shortest path is between them. To do this we must use three different algorithms:
        *BFS - For an unweighted graph
        *Dijkstra - For a non-negative weighted graph
        *Bellman Ford - For a negative weighted graph
    If there is no shortest path the function will return: "No path found".
    3. isContainsCycle - This function determins whether there is a cycle in the graph, using the DFS algorithm. 
    4. isBipartite - This function determins whether the graph is bipartite or not. At first, we will anitialize all the vertices to be white and then using the BFS algorithm, we will go over them and devide them in to setRed and setBlue. In each set there are no two vertices that have an edge between them. If the graph is bipartite than it will return the sets in this way: "The graph is bipartite: A={}, b={}". Otherwise, it will return: "The graph is not bipartite".
    5. negativeCycle -  This function detects negative cycles in the graph, and and returns it. Otherwise, it will return: "No negative cycle found".




