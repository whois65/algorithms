# Searching Algorithms

## 1. Linear Search

> Checks every element in a list sequentially until a match is found.

Use Case: Searching small or unsorted collections.

Time Complexity: O(n)

## 2. Binary Search

> Repeatedly divides a sorted search interval in half to locate the target value.

Use Case: Fast lookups in large, pre-sorted datasets.

Time Complexity: O(log n)

## 3. Jump Search

> Checks fewer elements than Linear Search by stepping through a sorted array in fixed steps.

Use Case: Searching sorted arrays where jumping back is less costly than moving backward (e.g., physical media).

Time Complexity: O(√n)

## 4. Interpolation Search

> Estimates the position of the target value in a sorted array based on the values at the bounds.

Use Case: Searching highly uniform, evenly distributed datasets like a phone book.

Time Complexity: O(log (log n)) on average, O(n) in the worst case.

## 5. Exponential Search

> Finds a range where the target element resides by doubling the index step size, then performs a binary search within that range.

Use Case: Searching unbounded or infinite datasets where the array size is unknown beforehand.

Time Complexity: O(log i) where i is the index of the target element.

## 6. Ternary Search

> Divides a sorted array into three equal segments using two midpoints to isolate the target value.

Use Case: Finding the maximum or minimum value of a unimodal function.

Time Complexity: O(log₃ n)

## 7. Fibonacci Search

> Divides a sorted array using Fibonacci numbers to calculate the split points.

Use Case: CPU architectures where division and multiplication operations are expensive compared to addition and subtraction.

Time Complexity: O(log n)
