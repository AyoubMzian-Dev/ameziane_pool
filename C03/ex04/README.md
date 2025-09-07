# Exercise 04: ft_strstr

**Function:** `char *ft_strstr(char *str, char *to_find);`

**Subject:** Write a function that locates the first occurrence of the null-terminated string `to_find` in the null-terminated string `str`.

**Allowed functions:** None

**Key Points:**
-   Implements a basic string search algorithm.
-   Returns a pointer to the first character of the found substring within `str`.
-   If `to_find` is an empty string, it returns `str` itself.
-   Returns `NULL` (or `0`) if `to_find` is not found in `str`.
-   Requires careful handling of null terminators in both strings during comparison.

## Concepts Covered

-   **Substring Search**: Finding a smaller string within a larger string.
-   **Nested Loops**: Using an outer loop to iterate through the main string and an inner loop for comparison with the substring.
-   **Pointer Arithmetic**: Returning a pointer to the found substring.
-   **Edge Cases**: Handling empty `to_find` string, no match found.

## Solution Explanation

The `ft_strstr` function takes two arguments: `str` (the string to search in) and `to_find` (the substring to search for).

1.  **Empty Substring Check**: If `to_find` is an empty string (`to_find[0] == '\0'`), the function returns `str` (as an empty string is considered to occur at the beginning of any string).
2.  **Outer Loop**: An outer `while` loop iterates through `str` using index `i`.
3.  **Inner Loop (Comparison)**: For each character in `str`, an inner `while` loop (using index `j`) compares characters from `str` (starting at `str[i]`) with characters from `to_find`. This comparison continues as long as:
    *   Both `str[i + j]` and `to_find[j]` are not null terminators.
    *   `str[i + j]` is equal to `to_find[j]`.
4.  **Match Found**: If the inner loop completes because `to_find[j]` is a null terminator, it means the entire `to_find` string has been matched. In this case, the function returns a pointer to the beginning of the match in `str` (`&str[i]`).
5.  **No Match**: If the outer loop completes without finding a match, the function returns `0` (NULL).

This function implements a basic string searching algorithm, similar to `strstr` in the standard library.