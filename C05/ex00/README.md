# Exercise 00: ft_iterative_factorial

**Function:** `int ft_iterative_factorial(int nb);`

**Subject:** Write an iterative function that returns the factorial of the number given as a parameter.

**Allowed functions:** None

**Key Points:**
-   Calculates factorial using a loop (iterative approach).
-   Handles edge cases: returns `0` for negative numbers and `1` for `0!`.
-   Be mindful of potential integer overflow for large input values, as `int` has a limited range.

## Concepts Covered

-   **Factorial**: Understanding the mathematical definition of factorial.
-   **Iteration**: Using loops to perform repetitive calculations.
-   **Edge Cases**: Handling negative numbers and the factorial of 0.
-   **Integer Overflow**: Awareness of potential issues with large numbers.

## Solution Explanation

The `ft_iterative_factorial` function takes a single integer argument, `nb`.

1.  **Edge Cases**:
    *   If `nb` is negative, the function returns `0` (as factorial is not defined for negative numbers).
    *   If `nb` is `0`, the function returns `1` (as 0! = 1).
2.  **Iteration**: A `while` loop iterates as long as `nb` is greater than `0`.
3.  **Calculation**: In each iteration, `result` is multiplied by `nb`, and `nb` is decremented.
4.  **Return Value**: The final `result` is returned.

This function calculates the factorial using an iterative approach, building the result step by step.