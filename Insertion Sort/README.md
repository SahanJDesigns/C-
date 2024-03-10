# Insertion Sort - Step 1 - HackerRank Challenge

## Problem Statement:

The task is to implement the first step of the Insertion Sort algorithm. Given an array, the challenge is to sort it step-by-step using the insertion sort method and print the resulting array at each step.

## Solution:

### Algorithm:

1. **Input Handling:**
   - The program takes an integer `n` representing the size of the array.
   - It also takes an array of integers `arr` of size `n` as input.

2. **Insertion Sort - Step 1:**
   - The algorithm considers the last element (`temp`) of the array as the key to be inserted.
   - It then compares this key with the elements before it and shifts them to the right until a smaller element is found.
   - The array is printed after each shift operation.

3. **Printing Function:**
   - A helper function `print` is defined to print the elements of the array.

### Running the Code:

1. **Environment Setup:**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compile and Run:**
   - Save the provided code in a file with a `.cpp` extension (e.g., `insertion_sort_step1.cpp`).
   - Open a terminal, navigate to the directory containing the file.
   - Compile the code using a C++ compiler (e.g., `g++ insertion_sort_step1.cpp -o insertion_sort_step1`).
   - Run the executable (e.g., `./insertion_sort_step1`).
   - Enter the size of the array (`n`) and the elements of the array when prompted.

### Explanation:

- The code implements the first step of the Insertion Sort algorithm, where each element is considered as a key and is inserted into its correct position in a sorted subarray.

### Time and Space Complexity:

- Time Complexity: O(N^2) - Quadratic time, where N is the size of the array. This is because, in the worst case, each element might need to be compared and shifted.
- Space Complexity: O(1) - Constant space, as no additional data structures are used.

### Note:

- This solution assumes that the input values are valid integers. If there's a possibility of invalid input, additional input validation may be needed.

### HackerRank Link:

[Insertion Sort - Step 1](https://www.hackerrank.com/challenges/insertionsort1/problem)
