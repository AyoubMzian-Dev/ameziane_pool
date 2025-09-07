# Exercise 05: ft_strlcat

**Function:** `unsigned int ft_strlcat(char *dest, char *src, unsigned int size);`

**Subject:** Write a function that concatenates two strings, but only appends at most `size - 1` characters from `src` to `dest`, null-terminating the result. Returns the total length of the string `src`.

**Allowed functions:** None

**Key Points:**
-   Designed to be a safer alternative to `strcat` and `strncat`.
-   Guarantees null-termination of `dest` if `size` is greater than `0`.
-   Copies at most `size - 1` characters from `src` to ensure space for the null terminator.
-   Returns the total length of the string that `strlcat` tried to create (initial `dest` length + `src` length), which is useful for detecting truncation.

## Concepts Covered

-   **Safe String Concatenation**: Understanding `strlcat`'s role in preventing buffer overflows.
-   **Buffer Size Management**: Correctly handling the `size` parameter, which represents the total size of the destination buffer.
-   **Null Termination**: Ensuring the destination string is always null-terminated.
-   **Return Value**: Returning the total length of the string that `strlcat` tried to create (initial `dest` length + `src` length).

## Solution Explanation

The `ft_strlcat` function takes three arguments: `dest` (destination buffer), `src` (source string), and `size` (the total size of the destination buffer).

1.  **Calculate Lengths**: First, the lengths of both `dest` and `src` are calculated.
2.  **Handle Destination Overflow**: If the initial `dest_len` is already greater than or equal to `size`, it means the destination buffer is already full or too small. In this case, the function returns `size + src_len` (the intended total length if there was enough space).
3.  **Append Source (Limited)**: A `while` loop copies characters from `src` to `dest` starting from `dest`'s null terminator position. This copying continues as long as `src[i] != '\0'` AND the total length (`dest_len + i`) is less than `size - 1` (to leave space for the null terminator).
4.  **Null Termination**: After the loop, a null terminator (`\0`) is explicitly added to `dest` at the correct position.
5.  **Return Value**: The function returns the sum of the initial `dest_len` and `src_len`.

This function is a safer and more robust alternative to `strcat` and `strncat` for string concatenation, as it prevents buffer overflows and provides useful information about truncation.