# QHeap1 - HackerRank Challenge

## Problem Statement:

The task is to implement a minimum heap data structure and perform operations on it. Given a sequence of queries, the program should handle insertions, deletions, and printing the minimum element.

## Solution:

### Algorithm:

1. **Heapify:**
   - A `heapify` function is defined to maintain the min-heap property. It takes the root index and recursively adjusts the heap.

2. **Insert:**
   - An `insert` function is implemented to add an element to the heap. It is added to the end and then adjusted upwards to maintain the heap property.

3. **Delete Element:**
   - A `deleteElement` function is created to remove a specific element from the heap. It swaps the element with the last element and then adjusts the heap.

4. **Main Function:**
   - The main function reads the number of queries `Qnum`.
   - For each query, it reads the query type and performs the corresponding operation: insert, delete, or print the minimum element.

### Running the Code:

1. **Environment Setup:**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compile and Run:**
   - Save the provided code in a file with a `.cpp` extension (e.g., `qheap1.cpp`).
   - Open a terminal, navigate to the directory containing the file.
   - Compile the code using a C++ compiler (e.g., `g++ qheap1.cpp -o qheap1`).
   - Run the executable (e.g., `./qheap1`).
   - Enter the number of queries and the queries when prompted.

### Explanation:

- The code implements a minimum heap using a vector.
- Queries are processed as follows:
  - `1`: Insert an element into the heap.
  - `2`: Delete a specific element from the heap.
  - `3`: Print the minimum element in the heap.

### Time and Space Complexity:

- Time Complexity:
  - Insert Operation: O(log N) - logarithmic time complexity for inserting an element into the heap.
  - Delete Operation: O(log N) - logarithmic time complexity for deleting an element from the heap.
  - Print Operation: O(1) - constant time complexity for printing the minimum element.
- Space Complexity: O(N) - linear space complexity, where N is the number of elements in the heap.

### Note:

- This solution assumes that the input values and queries are valid. If there's a possibility of invalid input, additional input validation may be needed.

### HackerRank Link:

[QHeap1](https://www.hackerrank.com/challenges/qheap1/problem)
