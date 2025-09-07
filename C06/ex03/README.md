# Exercise 03: ft_sort_params

**Function:** `int main(int argc, char *argv[]);`

**Subject:** Write a program that displays all command-line arguments sorted alphabetically, each on a new line.

**Allowed functions:** `write` (via `ft_putstr` helper), `ft_strcmp` (implemented locally)

**Key Points:**
-   Implements a sorting algorithm (e.g., Bubble Sort) to arrange command-line arguments.
-   Uses a custom `ft_strcmp` function for lexicographical comparison of strings.
-   Swaps pointers within the `argv` array to reorder arguments, rather than copying string content.
-   The program name (`argv[0]`) is excluded from sorting and printing.

## Concepts Covered

-   **`argc` and `argv`**: Accessing and manipulating command-line arguments.
-   **Sorting Algorithms**: Implementing a sorting algorithm (e.g., Bubble Sort, Selection Sort) for an array of strings.
-   **String Comparison**: Using a string comparison function (like `ft_strcmp`) to determine order.
-   **String Swapping**: Exchanging the positions of strings (pointers to strings) in `argv`.
-   **Standard Output**: Printing sorted arguments.

## Solution Explanation

The `ft_sort_params` program (implemented in `main` function) takes `argc` (argument count) and `argv` (argument vector) as parameters.

1.  **Sorting**: A sorting algorithm (e.g., Bubble Sort) is applied to the `argv` array, starting from index `1` (to exclude the program name).
    *   **Outer Loop**: Iterates through the array.
    *   **Inner Loop**: Compares adjacent elements using `ft_strcmp`.
    *   **Swapping**: If arguments are out of order, their pointers in `argv` are swapped.
2.  **Printing**: After sorting, the program iterates through the sorted `argv` array (from index `1` to `argc - 1`), printing each argument followed by a newline using `ft_putstr`.
3.  **Return Value**: The `main` function returns `0` to indicate successful execution.

This exercise demonstrates how to sort command-line arguments alphabetically.