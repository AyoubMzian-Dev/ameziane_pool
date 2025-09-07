# Exercise 01: ft_strncpy

**Function:** `char *ft_strncpy(char *dest, char *src, unsigned int n);`

**Subject:** Write a function that copies `n` characters from `src` to `dest`. If `src` contains fewer than `n` characters, the remainder of `dest` is filled with null bytes.

**Allowed functions:** None

**Key Points:**
-   Copies at most `n` characters from `src` to `dest`.
-   If `src` is shorter than `n`, `dest` is padded with null bytes until `n` characters have been written.
-   **Important**: `ft_strncpy` does NOT guarantee null-termination of `dest` if `src` is longer than or equal to `n` and contains no null byte within its first `n` characters. The caller must manually null-terminate `dest` in such cases.
-   Offers a degree of buffer overflow protection compared to `strcpy`, but requires careful usage.

## Concepts Covered

-   **String Copying**: Copying a limited number of characters.
-   **Buffer Size**: Importance of the `n` parameter for preventing overflows.
-   **Null Padding**: Filling the destination buffer with null bytes if the source is shorter than `n`.
-   **Null Termination**: Ensuring the destination string is properly terminated (though `strncpy` doesn't guarantee this if `src` is longer than `n`).

## Solution Explanation

The `ft_strncpy` function takes three arguments: `dest` (destination buffer), `src` (source string), and `n` (maximum number of characters to copy).

1.  **Copy Loop**: A `while` loop copies characters from `src` to `dest` as long as `i` is less than `n` AND `src[i]` is not the null terminator.
2.  **Null Padding Loop**: After the first loop, if `i` is still less than `n` (meaning `src` was shorter than `n`), another `while` loop fills the remaining part of `dest` with null bytes until `n` characters have been processed.
3.  **Return Value**: The function returns a pointer to the destination string (`dest`).

This function provides a safer alternative to `strcpy` when dealing with fixed-size buffers, as it allows control over the number of characters copied.