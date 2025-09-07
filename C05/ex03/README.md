# Exercise 03: ft_recursive_power

**Function:** `int ft_recursive_power(int nb, int power);`

**Subject:** Write a recursive function that returns the result of a power.

**Allowed functions:** None

**Key Points:**
-   Calculates `nb` raised to the `power` using a recursive approach.
-   Defines clear base cases: returns `1` for `power` of `0` and `0` for negative `power`.
-   The recursive step breaks down the problem into a smaller subproblem.
-   Be mindful of potential integer overflow for large results.

## Concepts Covered

-   **Power Calculation**: Understanding exponentiation.
-   **Recursion**: Functions calling themselves, base cases, recursive steps.
-   **Edge Cases**: Handling power of 0, negative power, and base 0.
-   **Integer Overflow**: Awareness of potential issues with large results.

## Solution Explanation

The `ft_recursive_power` function takes two integer arguments: `nb` (the base) and `power` (the exponent).

1.  **Base Cases**:
    *   If `power` is `0`, the function returns `1` (any number to the power of 0 is 1).
    *   If `power` is negative, the function returns `0` (as negative powers are not typically handled for integer results in this context).
2.  **Recursive Step**: For `power > 0`, the function returns `nb` multiplied by the result of calling itself with `nb` and `power - 1`. This continues until one of the base cases is met.

This function calculates the power using a recursive approach, breaking the problem down into smaller, similar subproblems.