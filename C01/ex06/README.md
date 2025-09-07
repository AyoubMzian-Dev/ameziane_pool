# Exercise 06: ft_strlen

**Function:** `int ft_strlen(char *str);`

**Subject:** Write a function that returns the length of a string.

**Allowed functions:** None

**Key Points:**
-   The length of a C string is determined by counting characters until the null terminator (`\0`).
-   The null terminator itself is not included in the length.
-   This function is crucial for many string manipulation tasks.

## Concepts Covered

-   **Strings in C**: Understanding strings as null-terminated arrays of characters.
-   **Pointers**: Iterating through a string using a `char *` pointer.
-   **Loops**: Using a loop to count characters until the null terminator is found.
-   **Return Value**: Returning an integer representing the length.

## Solution Explanation

The `ft_strlen` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Initialization**: An integer variable, `length`, is initialized to `0`.
2.  **Iteration**: A `while` loop iterates through the string as long as the current character pointed to by `str` is not the null terminator (`\0`).
3.  **Counting**: Inside the loop, `length` is incremented for each character encountered.
4.  **Advancement**: `str++` increments the pointer to move to the next character in the string.

The loop continues until the null terminator is encountered. Finally, the accumulated `length` is returned.