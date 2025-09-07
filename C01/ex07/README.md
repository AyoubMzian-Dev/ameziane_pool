# Exercise 07: ft_rev_int_tab

**Function:** `void ft_rev_int_tab(int *tab, int size);`

**Subject:** Write a function that reverses the order of the elements in an integer array.

**Allowed functions:** None

**Key Points:**
-   Reverses the array "in-place," meaning it modifies the original array directly.
-   Only half of the array needs to be iterated through, as elements are swapped in pairs from both ends.
-   Requires a temporary variable for swapping elements to avoid data loss.

## Concepts Covered

-   **Arrays**: Accessing and modifying elements in an array.
-   **Loops**: Iterating through an array.
-   **Swapping Elements**: Exchanging the values of two array elements.
-   **In-place Modification**: Modifying the array directly without creating a new one.

## Solution Explanation

The `ft_rev_int_tab` function takes two arguments: an integer array (`tab`) and its size (`size`).

1.  **Pointers/Indices**: Two pointers (or indices), `start` and `end`, are initialized. `start` points to the first element, and `end` points to the last element of the array.
2.  **Iteration**: A `while` loop continues as long as `start` is less than `end`.
3.  **Swapping**: Inside the loop, the elements at `tab[start]` and `tab[end]` are swapped using a temporary variable.
4.  **Advancement**: `start` is incremented and `end` is decremented in each iteration, moving towards the center of the array.

The loop stops when `start` and `end` meet or cross, ensuring that all pairs of elements have been swapped and the array is reversed.