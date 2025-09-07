# Exercise 00: ft_print_program_name

**Function:** `int main(int ac, char **av);`

**Subject:** Write a program that displays the name of the program, followed by a newline.

**Allowed functions:** `write`

**Key Points:**
-   The `main` function receives command-line arguments through `ac` (argument count) and `av` (argument vector).
-   `av[0]` always contains the name of the executable program.
-   The program name is a null-terminated string.
-   A newline character (`\n`) must be printed after the program name.

## Concepts Covered

-   **`main` function signature**: Understanding `int main(int argc, char *argv[])`.
-   **`argv[0]`**: Accessing the program's name.
-   **Standard Output**: Using `write` to print characters.
-   **Null-terminated strings**: Iterating through `argv[0]`.

## Solution Explanation

The `ft_print_program_name` program (implemented in `main` function) takes `argc` (argument count) and `argv` (argument vector) as parameters.

1.  **Access Program Name**: The program's name is always stored in `argv[0]`.
2.  **Iteration**: A `while` loop iterates through the characters of `argv[0]` until the null terminator is reached.
3.  **Printing**: Each character of `argv[0]` is printed to standard output using `write`.
4.  **Newline**: After printing the name, a newline character is printed.
5.  **Return Value**: The `main` function returns `0` to indicate successful execution.

This exercise demonstrates the most basic usage of command-line arguments.