# Exercise 08: ft_sort_int_tab

**Function:** `void ft_sort_int_tab(int *tab, int size);`

**Subject:** Write a function that sorts an integer array in ascending order.

**Allowed functions:** None

**Key Points:**
-   Implements a basic sorting algorithm (e.g., Bubble Sort).
-   Uses nested loops to compare and swap elements.
-   Sorts the array "in-place," modifying the original array directly.
-   Understanding the logic of comparison and element movement is crucial.

## Concepts Covered

-   **Arrays**: Manipulating elements within an array.
-   **Sorting Algorithms**: Understanding basic sorting principles (e.g., Bubble Sort, Selection Sort, Insertion Sort).
-   **Nested Loops**: Using nested loops for comparison and swapping elements.
-   **In-place Sorting**: Modifying the array directly without creating a new one.

## Solution Explanation (Bubble Sort Example)

The `ft_sort_int_tab` function takes two arguments: an integer array (`tab`) and its size (`size`). A common approach to solve this is using a Bubble Sort algorithm:

1.  **Outer Loop**: An outer loop iterates from the first element to the second-to-last element of the array. This loop controls the number of passes.
2.  **Inner Loop**: An inner loop iterates from the first element up to `size - 1 - i` (where `i` is the outer loop counter). This ensures that already sorted elements at the end of the array "bubbles" to its correct position.
3.  **Comparison and Swap**: Inside the inner loop, adjacent elements (`tab[j]` and `tab[j+1]`) are compared. If `tab[j]` is greater than `tab[j+1]`, their values are swapped using a temporary variable.
4.  **Pass Completion**: After each pass of the inner loop, the largest unsorted element "bubbles" to its correct position at the end of the unsorted portion of the array.

This process continues until no swaps are needed in a pass, indicating the array is sorted.