# Graph Algorithms

## 1. Breadth-First Search (BFS)

> Explores a graph layer by layer, visiting all neighbor nodes at the present depth before moving deeper.

Use Case: Finding the shortest path in unweighted graphs or social network connections.

Time Complexity: O(V + E) where V is vertices and E is edges.

## 2. Depth-First Search (DFS)

> Explores a graph by going as deep as possible along each branch before backtracking.

Use Case: Topological sorting, solving puzzles like mazes, and detecting cycles.

Time Complexity: O(V + E)

## 3. Dijkstra

> Finds the shortest path from a single source node to all other nodes in a weighted graph.

Use Case: GPS navigation systems and network routing protocols.

Time Complexity: O((V + E) log V) with a binary heap.

## 4. Kruskal

> Finds a minimum spanning tree for a connected weighted graph by sorting and adding the cheapest edges.

Use Case: Designing efficient physical networks like electrical grids or water pipelines.

Time Complexity: O(E log E)

## 5. A* Search (A-Star)

> Extends Dijkstra's algorithm by using heuristics to estimate distances and find the shortest path faster.

Use Case: Pathfinding in video games and artificial intelligence movement.

Time Complexity: O(E), depends heavily on the heuristic accuracy.
