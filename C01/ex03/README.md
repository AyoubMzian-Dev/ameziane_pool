# Exercise 03: ft_div_mod

**Function:** `void ft_div_mod(int a, int b, int *div, int *mod);`

**Subject:** Write a function that divides two numbers and stores the result of the division in the `div` parameter and the result of the modulo in the `mod` parameter.

**Allowed functions:** None

**Key Points:**
-   Demonstrates how to effectively "return" multiple values from a function in C using pointers.
-   Utilizes basic arithmetic operations (division and modulo).
-   Reinforces the concept of pass-by-reference.

## Concepts Covered

-   **Pointers**: Using pointers to return multiple values from a function.
-   **Arithmetic Operations**: Performing division and modulo operations.
-   **Pass by Reference**: Modifying variables in the calling function through pointers.

## Solution Explanation

The `ft_div_mod` function takes four arguments: two integers (`a` and `b`) for the calculation, and two pointers to integers (`div` and `mod`) where the results will be stored.

1.  **Division**: The result of `a / b` is calculated and assigned to the memory location pointed to by `div` (`*div`).
2.  **Modulo**: The result of `a % b` is calculated and assigned to the memory location pointed to by `mod` (`*mod`).

This function demonstrates how to effectively "return" multiple values from a C function by using pointers to modify variables in the calling scope.