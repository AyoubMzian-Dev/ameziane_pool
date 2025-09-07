# Exercise 00: ft_strcmp

**Function:** `int ft_strcmp(char *s1, char *s2);`

**Subject:** Write a function that compares two strings lexicographically.

**Allowed functions:** None

**Key Points:**
-   Compares strings character by character based on their ASCII values.
-   The comparison stops at the first differing character or at the null terminator of either string.
-   Returns `0` if strings are identical.
-   Returns a negative value if `s1` is lexicographically smaller than `s2`.
-   Returns a positive value if `s1` is lexicographically larger than `s2`.

## Concepts Covered

-   **String Comparison**: Understanding how strings are ordered alphabetically.
-   **Lexicographical Order**: Comparing characters based on their ASCII values.
-   **Null Terminator**: Importance of the null terminator in defining string boundaries.
-   **Return Value Semantics**: Understanding the meaning of positive, negative, and zero return values.

## Solution Explanation

The `ft_strcmp` function takes two arguments: `s1` and `s2`, both pointers to null-terminated strings.

1.  **Iteration**: A `while` loop iterates through both strings character by character as long as:
    *   Neither string has reached its null terminator (`\0`).
    *   The characters at the current position in both strings are equal.
2.  **Comparison**: Once the loop terminates (either a null terminator is found in one or both strings, or a mismatch is found), the function returns the difference between the ASCII values of the characters at the current position (`s1[i] - s2[i]`).

This difference determines the lexicographical order:
-   If `s1` is greater than `s2`, a positive value is returned.
-   If `s1` is less than `s2`, a negative value is returned.
-   If `s1` is equal to `s2`, `0` is returned.