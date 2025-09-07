# Exercise 00: ft_strlen

**Function:** `int ft_strlen(char *str);`

**Subject:** Write a function that returns the length of a string.

**Allowed functions:** None

**Key Points:**
-   The length of a C string is determined by counting characters until the null terminator (`\0`).
-   The null terminator itself is not included in the length count.
-   This function is a fundamental building block for many other string manipulation functions.
-   Handles empty strings correctly (returns `0`).

## Concepts Covered

-   **Strings in C**: Understanding strings as null-terminated arrays of characters.
-   **Pointers**: Iterating through a string using a `char *` pointer.
-   **Loops**: Using a loop to count characters until the null terminator is found.
-   **Return Value**: Returning an integer representing the length.

## Solution Explanation

The `ft_strlen` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Initialization**: An integer variable, `i`, is initialized to `0`.
2.  **Iteration**: A `while` loop iterates through the string as long as the current character `str[i]` is not the null terminator (`\0`).
3.  **Counting**: Inside the loop, `i` is incremented for each character encountered.
4.  **Return Value**: The loop continues until the null terminator is encountered. Finally, the accumulated `i` (which represents the length) is returned.

This function is a fundamental utility for string manipulation in C.
