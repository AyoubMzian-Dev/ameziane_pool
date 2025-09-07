# Exercise 10: ft_strlcpy

**Function:** `unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);`

**Subject:** Write a function that copies up to `size - 1` characters from the null-terminated string `src` to `dest`, null-terminating the result. Returns the total length of the string `src`.

**Allowed functions:** None

**Key Points:**
-   Designed to be a safer alternative to `strcpy` and `strncpy`.
-   Guarantees null-termination of `dest` if `size` is greater than `0`.
-   Copies at most `size - 1` characters to ensure space for the null terminator.
-   Returns the length of the source string, which allows the caller to detect if truncation occurred.

## Concepts Covered

-   **Safe String Copying**: Understanding `strlcpy`'s role in preventing buffer overflows.
-   **Buffer Size Management**: Correctly handling the `size` parameter.
-   **Null Termination**: Ensuring the destination string is always null-terminated.
-   **Return Value**: Returning the length of the source string, which is useful for truncation detection.

## Solution Explanation

The `ft_strlcpy` function takes three arguments: `dest` (destination buffer), `src` (source string), and `size` (the total size of the destination buffer).

1.  **Calculate Source Length**: First, the total length of the `src` string is calculated. This length is the value that will be returned by the function.
2.  **Handle Zero Size**: If `size` is `0`, no characters can be copied, so the function immediately returns the `src_len`.
3.  **Copy Loop**: A `while` loop copies characters from `src` to `dest` as long as `i` is less than `size - 1` (to leave space for the null terminator) AND `src[i] != '\0'`).
4.  **Null Termination**: After the loop, a null terminator (`\0`) is explicitly added to `dest[i]` to ensure the destination string is always null-terminated, provided `size` is greater than `0`.
5.  **Return Value**: The function returns the initially calculated `src_len`.

This function is a safer alternative to `strcpy` and `strncpy` as it guarantees null-termination and provides a useful return value for buffer management.