# Exercise 01: ft_strncmp

**Function:** `int ft_strncmp(char *s1, char *s2, unsigned int n);`

**Subject:** Write a function that compares two strings lexicographically, but only up to `n` characters.

**Allowed functions:** None

**Key Points:**
-   Compares at most `n` characters of `s1` and `s2`.
-   If `n` is `0`, the function returns `0` (strings are considered equal).
-   Comparison stops if a null terminator is encountered in either string before `n` characters are compared.
-   Returns `0` if the first `n` characters (or fewer if a null terminator is met) are identical.
-   Returns a negative value if `s1` is lexicographically smaller than `s2` within the `n` limit.
-   Returns a positive value if `s1` is lexicographically larger than `s2` within the `n` limit.

## Concepts Covered

-   **String Comparison**: Lexicographical comparison with a length constraint.
-   **Buffer Size**: Understanding the `n` parameter's role in limiting comparison.
-   **Null Terminator**: How the null terminator affects comparison within the `n` limit.
-   **Return Value Semantics**: Same as `ft_strcmp`, but considering `n`.

## Solution Explanation

The `ft_strncmp` function takes three arguments: `s1` and `s2` (pointers to null-terminated strings), and `n` (the maximum number of characters to compare).

1.  **Handle Zero `n`**: If `n` is `0`, the function immediately returns `0` (as no characters are compared).
2.  **Iteration**: A `while` loop iterates through both strings character by character as long as:
    *   The current index `i` is less than `n - 1` (to ensure `n` characters are compared, including the potential null terminator).
    *   Neither string has reached its null terminator (`\0`).
    *   The characters at the current position in both strings are equal.
3.  **Comparison**: Once the loop terminates, the function returns the difference between the ASCII values of the characters at the current position (`s1[i] - s2[i]`).

This function provides a way to compare only a portion of two strings, which is useful for fixed-size buffer comparisons or when only a prefix needs to be checked.