# Tree Algorithms

## 1. Binary Search Tree (BST)

> Organizes data hierarchically where the left child is smaller than the parent node and the right child is greater.

Use Case: Implementing simple dynamic lookup tables and tracking real-time streams of sorted data.

Time Complexity: O(log n) average, O(n) worst-case when the tree becomes unbalanced into a linked list.

## 2. Segment Tree

> Stores intervals or segments in a binary tree structure to allow querying which of the stored segments contain a given point.

Use Case: Solving range query problems like finding the minimum, maximum, or sum of elements within an array segment.

Time Complexity: O(n) for construction, O(log n) for both range queries and point updates.

## 3. AVL Tree

> A strictly self-balancing binary search tree where the height difference between left and right subtrees cannot exceed one.

Use Case: Systems requiring fast, high-frequency lookup operations where data changes are minimal.

Time Complexity: O(log n) guaranteed for search, insertion, and deletion operations.

## 4. Red-Black Tree

> A self-balancing binary search tree that uses a node-coloring property (red or black) to maintain approximate structural balance.

Use Case: Standard library implementations of associative containers like std::map in C++ and TreeMap in Java.

Time Complexity: O(log n) guaranteed for search, insertion, and deletion operations.
