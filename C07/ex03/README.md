# Exercise 03: ft_strjoin

**Function:** `char *ft_strjoin(int size, char **strs, char *sep);`

**Subject:** Write a function that concatenates all strings in `strs` separated by `sep`. Returns a newly allocated string.

**Allowed functions:** `malloc`

**Key Points:**
-   Allocates memory dynamically for the resulting concatenated string.
-   Concatenates an array of strings, inserting a specified separator between them.
-   Handles the case where `size` is `0` (returns an empty, null-terminated string).
-   Returns `NULL` if `malloc` fails.
-   The caller is responsible for `free`ing the returned string.

## Concepts Covered

-   **Dynamic Memory Allocation**: Using `malloc` to allocate memory for a string whose size is determined at runtime.
-   **Array of Strings**: Working with `char **` to handle multiple strings.
-   **String Concatenation**: Appending strings together.
-   **Memory Management**: Calculating required memory and handling allocation failures.
-   **Edge Cases**: Handling empty input array.

## Solution Explanation

The `ft_strjoin` function takes three arguments: `size` (the number of strings in `strs`), `strs` (an array of strings), and `sep` (the separator string).

1.  **Handle Empty Array**: If `size` is `0`, an empty, null-terminated string is allocated and returned.
2.  **Calculate Total Length**: The function first calculates the total length required for the final concatenated string. This includes the lengths of all strings in `strs`, the lengths of all separators (which is `size - 1` times the length of `sep`), and one extra byte for the null terminator.
3.  **Allocate Memory**: Memory is allocated on the heap using `malloc` for the `result` string.
4.  **Handle `malloc` Failure**: If `malloc` returns `NULL`, the function immediately returns `NULL`.
5.  **Concatenate Strings**: The function iterates through the `strs` array. For each string, it appends it to `result`. If it's not the last string, it also appends the `sep` string. Helper functions like `ft_strlen` and `ft_strcat` are typically used.
6.  **Return Value**: A pointer to the newly created concatenated string (`result`) is returned.

This function provides a flexible way to combine multiple strings into a single dynamically allocated string.
