

# System Programing 2 - assignmant 1

This is a c++ program that provides various graph algorithms and functionalities. It includes algorithms for determining graph connectivity, finding shortest paths, detecting cycles, and identifying bipartite graphs.

## Classes
The two main classes in this assignment are:
* `Graph.cpp`
* `Algorythems.cpp`

### Graph:
This class represents a graph that supports both directed and undirected graphs using adjacency matrices.

**Two main functions in this class:**
1. `loadGraph` - This function anitializes the graph using a givan adjacency matrix. It will check that the input is valid and set the graphs properties.
2. `printGraph` - this function prints the amount of vertices and edges that are in th graph. 

**Helper Functions:**
In addition to the main functions, there are several helper getter functions that allow access to different graph properties. For example, the `getNumOfVertices` function returns the number of vertices in the graph.

### Algorithms:
This class encapsulates various graph algorithms and functionalities.

**Five main functions in this class:**
1. `isConnected` - This function determines whether the graph is connected or not. It uses the Depth-First Search (DFS) algorithm to check connectivity. For directed graphs, it performs two DFS traversals to ensure all vertices are reachable from each other. For undirected graphs, a single DFS traversal is used. The function returns 'true' if the graph is connected and 'false' otherwise.

2. `shortestPath` - Given two vertices, this function calculates the shortest path between them. Depending on the type of graph, it uses different algorithms:
    * BFS -For an unweighted graph
    * Dijkstra - For a non-negative weighted graph
    * Bellman Ford - For a negative weighted graph
If there is no shortest path the function will return: "No path found".

3. `isContainsCycle` - This function determines whether there is a cycle in the graph using the DFS algorithm. If a cycle is found, it returns the cycle. Otherwise, it returns : "-1".

4. `isBipartite` - This function determins whether the graph is bipartite or not. At first, we will anitialize all the vertices to be white and then using the BFS algorithm, we will go over them and devide them in to setRed and setBlue. In each set there are no two vertices that have an edge between them. If the graph is bipartite than it will return the sets in this way: "The graph is bipartite: A={}, b={}". Otherwise, it will return: "The graph is not bipartite".

5. `negativeCycle` - This function detects negative cycles in the graph using the Bellman-Ford algorithm. If a negative cycle is found, it returns the cycle. Otherwise, it returns: "No negative cycle found".

**Helper Functions:**
In addition to the main functions, the Algorithms class includes several helper functions that facilitate the implementation of the main algorithms. For example the `createCycle` function constructs a string representation of a cycle from a given path. I


## Tests
The project includes tests written using the `doctest.h` framework. These tests ensure the correctness and robustness of the implemented graph algorithms.





