# Exercise 05: ft_sqrt

**Function:** `int ft_sqrt(int nb);`

**Subject:** Write a function that returns the integer square root of a number.

**Allowed functions:** None

**Key Points:**
-   Calculates the integer square root, meaning it returns `i` if `i * i == nb`.
-   Returns `0` if `nb` is negative or if `nb` is not a perfect square.
-   Uses a `long` type for the iteration variable `i` to prevent potential integer overflow when calculating `i * i`.
-   The loop efficiently checks values up to the square root of `nb`.

## Concepts Covered

-   **Square Root**: Understanding the mathematical concept of square root.
-   **Iteration**: Using a loop to find the square root.
-   **Edge Cases**: Handling negative numbers and 0.
-   **Integer Overflow**: Awareness of potential issues when squaring numbers.

## Solution Explanation

The `ft_sqrt` function takes a single integer argument, `nb`.

1.  **Edge Cases**:
    *   If `nb` is negative, the function returns `0` (as square root is not defined for negative numbers in real numbers).
    *   If `nb` is `0`, the function returns `0`.
2.  **Iteration**: A `while` loop iterates, starting from `i = 1`. The loop continues as long as `i * i` is less than or equal to `nb`.
3.  **Comparison**: In each iteration, it checks if `i * i` is exactly equal to `nb`.
    *   If `i * i == nb`, then `i` is the integer square root, and `i` is returned.
4.  **Advancement**: `i` is incremented in each step.
5.  **Not a Perfect Square**: If the loop completes (meaning `i * i` has exceeded `nb` without finding an exact match), it means `nb` is not a perfect square, and the function returns `0`.

This function finds the integer square root of a number, returning `0` if it's not a perfect square or if the input is invalid.