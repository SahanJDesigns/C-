# Jesse and Cookies - HackerRank Challenge

## Problem Statement:

The task is to determine the minimum number of operations required to make a heap of sweetness values such that the minimum sweetness is greater than or equal to a given threshold `k`.

## Solution:

### Algorithm:

1. **Heapify:**
   - A `heapify` function is defined to maintain the min-heap property. It takes the root index and recursively adjusts the heap.

2. **Insert:**
   - An `insert` function is implemented to add an element to the heap. It is added to the end and then adjusted upwards to maintain the heap property.

3. **Get Root:**
   - A `getRoot` function is created to get the root element of the heap (minimum element) and adjust the heap.

4. **Build Min Heap:**
   - A `buildMinHeap` function is implemented to convert an array into a min-heap.

5. **Cookies Function:**
   - The main `cookies` function takes a threshold `k` and an array `A` as input.
   - It builds a min-heap from the array.
   - It continues the process until the minimum sweetness in the heap is greater than or equal to `k`.
   - In each iteration, it extracts the two minimum sweetness values, combines them, and inserts the result back into the heap.
   - The number of iterations is counted.

### Running the Code:

1. **Environment Setup:**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compile and Run:**
   - Save the provided code in a file with a `.cpp` extension (e.g., `jesse_and_cookies.cpp`).
   - Open a terminal, navigate to the directory containing the file.
   - Compile the code using a C++ compiler (e.g., `g++ jesse_and_cookies.cpp -o jesse_and_cookies`).
   - Run the executable (e.g., `./jesse_and_cookies`).
   - Enter the number of cookies and the sweetness values when prompted.

### Explanation:

- The code calculates the minimum number of operations required to make a heap of sweetness values such that the minimum sweetness is greater than or equal to the given threshold `k`.

### Time and Space Complexity:

- Time Complexity:
  - Insert Operation: O(log N) - logarithmic time complexity for inserting an element into the heap.
  - Get Root Operation: O(log N) - logarithmic time complexity for extracting the minimum element from the heap.
  - Build Min Heap Operation: O(N) - linear time complexity for converting an array into a min-heap.
- Space Complexity: O(N) - linear space complexity, where N is the number of sweetness values.

### Note:

- This solution assumes that the input values and queries are valid. If there's a possibility of invalid input, additional input validation may be needed.

### HackerRank Link:

[Jesse and Cookies](https://www.hackerrank.com/challenges/three-month-preparation-kit-jesse-and-cookies/problem)
