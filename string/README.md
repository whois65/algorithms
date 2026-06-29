# String & Pattern Matching

## 1. Knuth-Morris-Pratt (KMP)

> Searches for occurrences of a word within a main text by skipping redundant comparisons using a prefix table.

Use Case: Text editors searching for specific phrases inside large documents.

Time Complexity: O(n + m) where n is text length and m is pattern length.

## 2. Boyer-Moore

> Matches patterns by scanning characters from right to left and skipping large blocks of text on mismatch.

Use Case: Standard implementation for the "Find" feature in modern web browsers.

Time Complexity: O(n + m) average, O(n · m) worst-case.

## 3. Rabin-Karp

> Uses hashing to find any one of a set of pattern strings in a text simultaneously.

Use Case: Detecting plagiarism across multiple documents and matching multiple patterns concurrently.
Time Complexity: O(n + m) average, O(n · m) worst-case due to hash collisions.

## 4. Aho-Corasick

> Constructs a finite-state machine resembling a trie with failure links to locate all dictionary keywords simultaneously.

Use Case: Building firewalls, intrusion detection systems (like Snort), and content filtering tools to scan for malware signatures.

Time Complexity: O(n + m + z) where z is the total number of pattern matches found.

## 5. Z Algorithm

> Finds all occurrences of a pattern in a text by constructing a linear-time array that tracks the longest common prefix at each position.

Use Case: Processing genome sequences and finding structural pattern duplications in strings.

Time Complexity: O(n + m) where n is text length and m is pattern length.

## 6. Ukkonen's Algorithm

> Constructs a suffix tree for a given string in linear time using an online approach.

Use Case: High-throughput DNA mapping, finding the longest repeated substring, and full-text indexing.

Time Complexity: O(n) where n is the length of the string.

## 7. Manacher's Algorithm

> Finds the longest palindromic substring in a string by utilizing symmetry properties of palindromes to avoid redundant checks.

Use Case: Linguistic analysis and computational biology sequence analysis.

Time Complexity: O(n) where n is the length of the string.
