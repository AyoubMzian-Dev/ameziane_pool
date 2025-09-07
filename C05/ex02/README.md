# Exercise 02: ft_iterative_power

**Function:** `int ft_iterative_power(int nb, int power);`

**Subject:** Write an iterative function that returns the result of a power.

**Allowed functions:** None

**Key Points:**
-   Calculates `nb` raised to the `power` using a loop (iterative approach).
-   Handles edge cases: returns `0` for negative `power` (as integer powers are typically non-negative in this context) and `1` for `power` of `0`.
-   Be mindful of potential integer overflow for large results.

## Concepts Covered

-   **Power Calculation**: Understanding exponentiation.
-   **Iteration**: Using loops to perform repeated multiplication.
-   **Edge Cases**: Handling power of 0, negative power, and base 0.
-   **Integer Overflow**: Awareness of potential issues with large results.

## Solution Explanation

The `ft_iterative_power` function takes two integer arguments: `nb` (the base) and `power` (the exponent).

1.  **Edge Cases**:
    *   If `power` is negative, the function returns `0` (as negative powers are not typically handled for integer results in this context).
    *   If `power` is `0`, the function returns `1` (as any number to the power of 0 is 1).
2.  **Iteration**: A `while` loop iterates as long as `power` is greater than `0`.
3.  **Calculation**: In each iteration, `result` is multiplied by `nb`, and `power` is decremented.
4.  **Return Value**: The final `result` is returned.

This function calculates the power using an iterative approach, performing repeated multiplication.