# C++ Tutorial - For Loop - HackerRank Challenge

## Problem Statement:

The task is to take two integers, `lowerBound` and `upperBound`, and print the English word representations of the numbers in the specified range. If the number is greater than 9, it should print "even" for even numbers and "odd" for odd numbers.

## Solution:

### Algorithm:

1. **Input Handling:**
   - The program takes two integers, `lowerBound` and `upperBound`, as input.

2. **Number Names Array:**
   - An array named `numbers` is declared to store the English word representations of numbers from 1 to 9.

3. **Printing Loop:**
   - A `for` loop iterates through the numbers in the range from `lowerBound` to `upperBound`.
   - If the current number is less than or equal to 9, it prints the corresponding English word from the `numbers` array based on the current number.
   - If the current number is greater than 9, it checks if the number is even or odd.
     - If even, it prints "even".
     - If odd, it prints "odd".

### Running the Code:

1. **Environment Setup:**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compile and Run:**
   - Save the provided code in a file with a `.cpp` extension (e.g., `number_names.cpp`).
   - Open a terminal, navigate to the directory containing the file.
   - Compile the code using a C++ compiler (e.g., `g++ number_names.cpp -o number_names`).
   - Run the executable (e.g., `./number_names`).
   - Enter the values for `lowerBound` and `upperBound` when prompted.

### Explanation:

- The code uses an array of strings to store the English word representations of numbers from 1 to 9.
- It employs a `for` loop to iterate through the specified range of numbers.
- If the current number is within the range of 1 to 9, it prints the corresponding word; otherwise, it checks whether the number is even or odd and prints the result accordingly.

### Time and Space Complexity:

- Time Complexity: O(N) - Linear time, where N is the difference between `upperBound` and `lowerBound`.
- Space Complexity: O(1) - Constant space, as the array `numbers` has a fixed size.

### Note:

- This solution assumes that the input values for `lowerBound` and `upperBound` are valid integers. If there's a possibility of invalid input, additional input validation may be needed.

### HackerRank Link:

[C++ Tutorial - For Loop](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem)
