# Exercise 01: ft_recursive_factorial

**Function:** `int ft_recursive_factorial(int nb);`

**Subject:** Write a recursive function that returns the factorial of the number given as a parameter.

**Allowed functions:** None

**Key Points:**
-   Calculates factorial using a recursive approach.
-   Defines clear base cases: returns `0` for negative numbers and `1` for `0!`.
-   The recursive step breaks down the problem into a smaller subproblem.
-   Be mindful of potential integer overflow for large input values.

## Concepts Covered

-   **Factorial**: Understanding the mathematical definition of factorial.
-   **Recursion**: Functions calling themselves, base cases, recursive steps.
-   **Edge Cases**: Handling negative numbers and the factorial of 0.
-   **Integer Overflow**: Awareness of potential issues with large numbers.

## Solution Explanation

The `ft_recursive_factorial` function takes a single integer argument, `nb`.

1.  **Base Cases**:
    *   If `nb` is negative, the function returns `0` (as factorial is not defined for negative numbers).
    *   If `nb` is `0`, the function returns `1` (as 0! = 1).
2.  **Recursive Step**: For `nb > 0`, the function returns `nb` multiplied by the result of calling itself with `nb - 1`. This continues until one of the base cases is met.

This function calculates the factorial using a recursive approach, breaking the problem down into smaller, similar subproblems.