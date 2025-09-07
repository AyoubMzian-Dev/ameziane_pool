# Exercise 04: ft_ultimate_div_mod

**Function:** `void ft_ultimate_div_mod(int a, int b, int **div, int **mod);`

**Subject:** Write a function that divides two numbers and stores the result of the division in the `div` parameter and the result of the modulo in the `mod` parameter. The parameters `div` and `mod` are pointers to pointers to integers.

**Allowed functions:** None

**Key Points:**
-   Extends the concept of `ft_div_mod` to work with double pointers.
-   Requires understanding and correct application of double dereferencing (`**`).
-   Demonstrates advanced pass-by-reference techniques.

## Concepts Covered

-   **Multiple Indirection**: Working with pointers to pointers (`int **`).
-   **Dereferencing Multiple Levels**: Accessing values through two levels of pointers.
-   **Pass by Reference (Advanced)**: Modifying variables in the calling function using double pointers.
-   **Arithmetic Operations**: Performing division and modulo operations.

## Solution Explanation

The `ft_ultimate_div_mod` function takes four arguments: two integers (`a` and `b`) for the calculation, and two double pointers to integers (`div` and `mod`) where the results will be stored.

1.  **Dereferencing**: To store the results, the double pointers `div` and `mod` must be dereferenced twice (`**div` and `**mod`). This accesses the `int` variable that the pointer pointed to by `div` (or `mod`) is pointing to.
2.  **Division**: The result of `a / b` is calculated and assigned to `**div`.
3.  **Modulo**: The result of `a % b` is calculated and assigned to `**mod`.

This function extends the concept of `ft_div_mod` by demonstrating how to manipulate values through an additional layer of indirection.