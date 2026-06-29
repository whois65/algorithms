# Sorting Algorithms

## 1. Merge Sort

> Divides the array in half, recursively sorts both halves, and merges them back together.

Use Case: Sorting large datasets where stable sorting is required.

Time Complexity: O(n log n)

## 2. Bubble Sort

> Compares adjacent elements and swaps them if they are in the wrong order.

Use Case: Educational purposes to teach basic sorting concepts.

Time Complexity: O(n²)

## 3. Quick Sort

> Picks a pivot element and partitions the array around it, sorting the sub-arrays recursively.

Use Case: General-purpose in-memory sorting due to low overhead.

Time Complexity: O(n log n) average, O(n²) worst-case.

## 4. Heap Sort

> Builds a binary heap tree and repeatedly extracts the maximum element to sort the array.

Use Case: Systems where worst-case memory overhead must be strictly avoided.

Time Complexity: O(n log n)

## 5. Quickselect

> Uses a partitioning logic similar to Quicksort to find the k-th smallest element without sorting the whole list.

Use Case: Finding medians or order statistics in unordered data.

Time Complexity: O(n) average, O(n²) worst-case.

## 6. Insertion Sort

> Builds the final sorted array one item at a time by inserting each new element into its proper position.

Use Case: Sorting small datasets or arrays that are already nearly sorted.

Time Complexity: O(n²) worst-case, O(n) best-case.

## 7. Selection Sort

> Repeatedly finds the minimum element from the unsorted part and puts it at the beginning.

Use Case: Systems with limited memory write cycles because it minimizes the total number of swaps.

Time Complexity: O(n²)

## 8. Counting Sort

> Counts the number of objects having distinct key values to determine their final positions in the output array.

Use Case: Sorting integers within a specific, small, and known range.

Time Complexity: O(n + k) where k is the range of the non-negative key values.
