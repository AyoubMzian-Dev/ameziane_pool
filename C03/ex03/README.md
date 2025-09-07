# Exercise 03: ft_strncat

**Function:** `char *ft_strncat(char *dest, char *src, unsigned int nb);`

**Subject:** Write a function that concatenates two strings, but only appends at most `nb` bytes from `src`.

**Allowed functions:** None

**Key Points:**
-   Appends at most `nb` characters from `src` to the end of `dest`.
-   The resulting string in `dest` is always null-terminated.
-   Offers a degree of buffer overflow protection compared to `strcat` by limiting the number of bytes copied from `src`.
-   The `nb` parameter refers to the maximum number of characters to take from `src`, not the total size of `dest`.

## Concepts Covered

-   **String Concatenation**: Appending one string to another with a length limit.
-   **Buffer Size**: Understanding the `nb` parameter's role in limiting the number of bytes appended.
-   **Null Terminator**: Ensuring the destination string is properly null-terminated.
-   **Memory Safety**: Preventing buffer overflows by respecting the `nb` limit.

## Solution Explanation

The `ft_strncat` function takes three arguments: `dest` (destination string), `src` (source string), and `nb` (maximum number of bytes to append from `src`).

1.  **Find End of Destination**: The function first iterates through `dest` to find its null terminator.
2.  **Append Source (Limited)**: It then iterates through `src`, copying characters to `dest` starting from `dest`'s null terminator position. This copying continues as long as the current index `j` is less than `nb` AND `src[j] != '\0'`).
3.  **Null Terminate Result**: After the loop, a new null terminator is placed at the end of the newly concatenated string in `dest`.
4.  **Return Value**: The function returns a pointer to the destination string (`dest`).

This function provides a safer alternative to `strcat` by allowing the caller to specify the maximum number of bytes to append, thus helping to prevent buffer overflows.