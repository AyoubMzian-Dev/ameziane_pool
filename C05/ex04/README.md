# Exercise 04: ft_fibonacci

**Function:** `int ft_fibonacci(int index);`

**Subject:** Write a function that returns the `n`th element of the Fibonacci sequence.

**Allowed functions:** None

**Key Points:**
-   Implements the Fibonacci sequence using a recursive approach.
-   Defines clear base cases for `index` 0 and 1.
-   Handles negative `index` by returning `-1`.
-   Be aware that a naive recursive implementation can be computationally expensive due to repeated calculations (consider memoization or iterative solutions for optimization).

## Concepts Covered

-   **Fibonacci Sequence**: Understanding the mathematical definition and properties.
-   **Recursion**: Implementing the sequence using recursive calls.
-   **Base Cases**: Defining the starting points of the sequence.
-   **Edge Cases**: Handling negative indices.
-   **Efficiency**: Awareness of the computational cost of naive recursive Fibonacci.

## Solution Explanation

The `ft_fibonacci` function takes a single integer argument, `index`.

1.  **Edge Cases**:
    *   If `index` is negative, the function returns `-1` (as Fibonacci sequence is typically defined for non-negative integers).
2.  **Base Cases**:
    *   If `index` is `0`, the function returns `0`.
    *   If `index` is `1`, the function returns `1`.
3.  **Recursive Step**: For `index > 1`, the function returns the sum of the `(index - 1)`th and `(index - 2)`th Fibonacci numbers by recursively calling itself.

This function provides a direct recursive implementation of the Fibonacci sequence.