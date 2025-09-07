# Exercise 01: ft_ultimate_ft

**Function:** `void ft_ultimate_ft(int *********nbr);`

**Subject:** Write a function that takes a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an `int` as a parameter and sets the value pointed to to 42.

**Allowed functions:** None

**Key Points:**
-   Demonstrates working with extreme levels of pointer indirection.
-   Requires careful and sequential dereferencing to reach the target value.
-   Highlights the power and complexity of pointer arithmetic and manipulation in C.

## Concepts Covered

-   **Multiple Indirection**: Understanding how to use and dereference multiple levels of pointers (e.g., `int ********nbr`).
-   **Dereferencing Chain**: Accessing the final value by applying the dereference operator (`*`) multiple times.
-   **Pass by Reference (Advanced)**: Modifying a variable through a long chain of pointers.

## Solution Explanation

The `ft_ultimate_ft` function takes a single argument, `nbr`, which is a pointer to a pointer to a pointer... (9 levels) to an integer (`int *********nbr`).

1.  **Dereferencing**: To reach the final `int` value, the pointer `nbr` must be dereferenced nine times. Each `*` operator removes one level of indirection.
2.  **Assignment**: Once the final `int` value is accessed (e.g., `*********nbr`), the value `42` is assigned to it.

This function demonstrates the concept of deep indirection and how to manipulate values through multiple layers of pointers.