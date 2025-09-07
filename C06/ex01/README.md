# Exercise 01: ft_print_params

**Function:** `int main(int argc, char *argv[]);`

**Subject:** Write a program that displays all command-line arguments, each on a new line.

**Allowed functions:** `write` (via `ft_putstr` helper)

**Key Points:**
-   The program accesses arguments passed during execution.
-   `argv[0]` is the program name, so the loop starts from `argv[1]`.
-   Each argument is a null-terminated string.
-   A newline character is printed after each argument.

## Concepts Covered

-   **`argc` and `argv`**: Understanding how to access and iterate through command-line arguments.
-   **String Traversal**: Printing each argument (which is a string).
-   **Standard Output**: Using `write` to print arguments and newlines.
-   **Looping**: Iterating from `argv[1]` to `argv[argc - 1]`.

## Solution Explanation

The `ft_print_params` program (implemented in `main` function) takes `argc` (argument count) and `argv` (argument vector) as parameters.

1.  **Iteration**: A `while` loop iterates through the `argv` array, starting from index `1` (to skip the program name) up to `argc - 1`.
2.  **Print Argument**: Inside the loop, each argument (`argv[i]`) is printed using a helper function (`ft_putstr`).
3.  **Newline**: After printing each argument, a newline character is printed.
4.  **Return Value**: The `main` function returns `0` to indicate successful execution.

This exercise demonstrates how to access and display all command-line arguments passed to a program.