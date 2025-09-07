# Exercise 00: ft_strcpy

**Function:** `char *ft_strcpy(char *dest, char *src);`

**Subject:** Write a function that copies the string pointed to by `src` (including the null byte) to the buffer pointed to by `dest`.

**Allowed functions:** None

**Key Points:**
-   Copies characters one by one from source to destination.
-   Crucially, it copies the null terminator (`\0`) to ensure the destination is a valid C string.
-   It is the caller's responsibility to ensure that the `dest` buffer is large enough to hold the `src` string, including the null terminator, to prevent buffer overflows.

## Concepts Covered

-   **String Copying**: Understanding how to duplicate string content.
-   **Pointers**: Using pointers to traverse source and destination strings.
-   **Null Terminator**: Importance of copying the null byte to ensure `dest` is a valid C string.
-   **Buffer Overflow**: Awareness of potential issues if `dest` buffer is too small.

## Solution Explanation

The `ft_strcpy` function takes two arguments: `dest` (a pointer to the destination buffer) and `src` (a pointer to the source string).

1.  **Iteration**: A `while` loop iterates through the `src` string character by character until the null terminator (`\0`) is encountered.
2.  **Copying**: Inside the loop, each character from `src` is copied to the corresponding position in `dest`.
3.  **Null Termination**: After the loop, the null terminator from `src` is explicitly copied to `dest` to ensure `dest` is a properly terminated C string.
4.  **Return Value**: The function returns the pointer to the destination string (`dest`).

This function provides a basic implementation of string copying, crucial for string manipulation tasks.