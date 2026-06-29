# Dynamic Programming

## 1. Knapsack Problem

> Determines the most valuable combination of items to fit in a backpack without exceeding its weight limit.

Use Case: Resource allocation and budget optimization problems.

Time Complexity: O(nW) where n is items and W is capacity.

## 2. Longest Common Subsequence (LCS)

> Finds the longest subsequence common to two sequences without changing the relative order of elements.

Use Case: DNA sequence alignment in bioinformatics and file comparison tools like the diff command.

Time Complexity: O(N * M) where N and M are the lengths of the two sequences.

## 3. Longest Increasing Subsequence (LIS)

> Finds the length of the longest subsequence in a given array such that all elements are sorted in increasing order.

Use Case: Analyzing data trends and solving advanced scheduling or vehicle routing problems.

Time Complexity: O(N²) using standard DP, or O(N log N) when optimized with binary search.

## 4. Edit Distance (Levenshtein Distance)

> Measures the minimum number of single-character operations required to change one word into another.

Use Case: Spell checkers, autocorrect systems, and speech recognition software.

Time Complexity: O(N * M) where N and M are the lengths of the two strings.

## 5. Matrix Chain Multiplication

> Determines the most efficient way to multiply a given sequence of matrices by finding the optimal parenthesis placement.

Use Case: Optimizing compiler performance and accelerating graphics rendering pipelines.

Time Complexity: O(N³) where N is the number of matrices.

## 6. Bellman-Ford Algorithm

> Computes the shortest paths from a single source vertex to all other vertices in a weighted digraph.

Use Case: Network routing protocols (like RIP) and detecting negative weight cycles in financial arbitrage systems.

Time Complexity: O(V * E) where V is vertices and E is edges.

## 7. Floyd-Warshall Algorithm

> Finds the shortest paths between all pairs of vertices in a weighted graph with positive or negative edge weights.

Use Case: Mapping services to find optimal routes between multiple destinations and finding transitive closures of relations.

Time Complexity: O(V³) where V is the number of vertices.
