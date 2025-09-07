# Exercise 02: ft_swap

**Function:** `void ft_swap(int *a, int *b);`

**Subject:** Write a function that swaps the values of two integers whose addresses are given as parameters.

**Allowed functions:** None

**Key Points:**
-   Demonstrates how to exchange the values of two variables using pointers.
-   Requires a temporary variable to hold one value during the swap to prevent data loss.
-   A fundamental example of pass-by-reference.

## Concepts Covered

-   **Pointers**: Using pointers to access and modify values indirectly.
-   **Pass by Reference**: How to change the values of variables in the calling function.
-   **Temporary Variable**: The common technique of using a temporary variable to hold one value during a swap operation.

## Solution Explanation

The `ft_swap` function takes two arguments, `a` and `b`, both of which are pointers to integers (`int *`).

1.  **Temporary Storage**: A local integer variable, `temp`, is declared to temporarily hold one of the value.
2.  **First Value Transfer**: The value pointed to by `a` (`*a`) is assigned to `temp`.
3.  **Swap**: The value pointed to by `b` (`*b`) is assigned to the memory location pointed to by `a` (`*a`).
4.  **Second Value Transfer**: The value stored in `temp` (which was the original value of `*a`) is then assigned to the memory location pointed to by `b` (`*b`).

After these steps, the original values of the integers pointed to by `a` and `b` have been successfully swapped.