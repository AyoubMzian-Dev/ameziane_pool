# Exercise 05: ft_putstr

**Function:** `void ft_putstr(char *str);`

**Subject:** Write a function that displays a string of characters on the standard output.

**Allowed functions:** `write`

**Key Points:**
-   Strings in C are null-terminated character arrays.
-   Iteration continues until the null terminator (`\0`) is encountered.
-   Each character is written individually to standard output.

## Concepts Covered

-   **Strings in C**: Understanding strings as null-terminated arrays of characters.
-   **Pointers**: Iterating through a string using a `char *` pointer.
-   **Loops**: Using a loop to process each character until the null terminator is found.
-   **Standard Output**: Using `write` to print characters.

## Solution Explanation

The `ft_putstr` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Iteration**: A `while` loop iterates through the string as long as the current character pointed to by `str` is not the null terminator (`\0`).
2.  **Printing**: Inside the loop, `write(1, str, 1)` prints the current character to standard output.
3.  **Advancement**: `str++` increments the pointer to move to the next character in the string.

The loop continues until the null terminator is encountered, ensuring that the entire string is printed.