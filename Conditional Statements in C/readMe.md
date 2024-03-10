# Conditional Statements in C - HackerRank Challenge

## Problem Statement:

You are given an integer, `n`, and you need to print the English word corresponding to that number (e.g., "one" for 1, "two" for 2, etc.). If the number is greater than 9, print "Greater than 9".

## Solution:

### Algorithm:

1. **Input Handling:**
   - The program takes a single integer as input and converts it to an integer `n` after removing leading and trailing whitespaces.

2. **Number Names Array:**
   - An array named `numbers` is declared to store the English word representations of numbers from 1 to 9.

3. **Conditional Printing:**
   - The program checks if the input number `n` is less than or equal to 9.
     - If true, it prints the corresponding English word from the `numbers` array based on the input number.
     - If false, it prints "Greater than 9".

4. **Trimming Functions:**
   - Two trimming functions, `ltrim` and `rtrim`, are defined to remove leading and trailing whitespaces in the input string.

### Running the Code:

1. **Environment Setup:**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compile and Run:**
   - Save the provided code in a file with a `.cpp` extension (e.g., `number_names.cpp`).
   - Open a terminal, navigate to the directory containing the file.
   - Compile the code using a C++ compiler (e.g., `g++ number_names.cpp -o number_names`).
   - Run the executable (e.g., `./number_names`).
   - Enter an integer when prompted.

### Explanation:

- The code uses an array of strings to store the English word representations of numbers from 1 to 9.
- If the input number is within this range, it prints the corresponding word; otherwise, it prints "Greater than 9".
- The trimming functions ensure proper handling of leading and trailing whitespaces in the input.

### Time and Space Complexity:

- Time Complexity: O(1) - Constant time, as it performs a fixed number of operations regardless of the input.
- Space Complexity: O(1) - Constant space, as the array `numbers` has a fixed size.

### Note:

- This solution assumes that the input is always a valid integer. If there's a possibility of invalid input, additional input validation may be needed.
