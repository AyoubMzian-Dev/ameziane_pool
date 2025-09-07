# Exercise 02: ft_rev_params

**Function:** `int main(int argc, char *argv[]);`

**Subject:** Write a program that displays all command-line arguments in reverse order, each on a new line.

**Allowed functions:** `write` (via `ft_putstr` helper)

**Key Points:**
-   The program accesses arguments passed during execution.
-   Iteration starts from the last argument (`argv[argc - 1]`) and proceeds backwards.
-   `argv[0]` (program name) is skipped.
-   Each argument is a null-terminated string.
-   A newline character is printed after each argument.

## Concepts Covered

-   **`argc` and `argv`**: Accessing and iterating through command-line arguments.
-   **Reverse Iteration**: Looping through `argv` from `argc - 1` down to `1`.
-   **String Traversal**: Printing each argument.
-   **Standard Output**: Using `write` to print arguments and newlines.

## Solution Explanation

The `ft_rev_params` program (implemented in `main` function) takes `argc` (argument count) and `argv` (argument vector) as parameters.

1.  **Reverse Iteration**: A `while` loop iterates through the `argv` array, starting from index `argc - 1` (the last argument) down to `1` (to skip the program name).
2.  **Print Argument**: Inside the loop, each argument (`argv[i]`) is printed using a helper function (`ft_putstr`).
3.  **Newline**: After printing each argument, a newline character is printed.
4.  **Return Value**: The `main` function returns `0` to indicate successful execution.

This exercise demonstrates how to access and display command-line arguments in reverse order.