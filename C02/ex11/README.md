# Exercise 11: ft_putstr_non_printable

**Function:** `void ft_putstr_non_printable(char *str);`

**Subject:** Write a function that displays a string. If a character is not printable, it's displayed as a hexadecimal representation (e.g., `\x0A` for newline).

**Allowed functions:** `write` (via `ft_putchar` helper)

**Key Points:**
-   Identifies printable characters (ASCII 32-126) and non-printable characters.
-   Non-printable characters are represented using a backslash followed by their two-digit hexadecimal value.
-   Requires conversion of character ASCII values to hexadecimal digits.
-   Important for debugging and visualizing string content with control characters.

## Concepts Covered

-   **Character Classification**: Distinguishing between printable and non-printable characters.
-   **Hexadecimal Conversion**: Converting a character's ASCII value to its hexadecimal representation.
-   **String Traversal**: Iterating through a string character by character.
-   **Standard Output**: Using `write` to print characters and hexadecimal values.
-   **Unsigned Char**: Handling character values as unsigned to ensure correct hexadecimal conversion.

## Solution Explanation

The `ft_putstr_non_printable` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Iteration**: A `while` loop iterates through the string character by character until the null terminator (`\0`) is reached.
2.  **Printable Check**: Inside the loop, an `if` condition checks if the current character is printable (ASCII values 32 to 126).
    *   If printable, the character is printed directly using `ft_putchar`.
    *   If not printable, the character is converted to its hexadecimal representation:
        *   A backslash (`\`) is printed.
        *   The character's ASCII value is divided by 16 to get the first hex digit, and the remainder is the second hex digit. These are then converted to their hexadecimal character representation (0-9, a-f) and printed.
3.  **Advancement**: The loop continues to the next character.

This function provides a way to visualize strings that contain control characters or other non-printable elements.