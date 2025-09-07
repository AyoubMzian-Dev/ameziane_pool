# Exercise 00: ft_strdup

**Function:** `char *ft_strdup(char *src);`

**Subject:** Write a function that returns a pointer to a new string which is a duplicate of the string `src`. Memory for the new string is obtained with `malloc`.

**Allowed functions:** `malloc`, `free` (for testing/cleanup)

**Key Points:**
-   Allocates new memory on the heap to store the duplicated string.
-   Copies the entire source string, including the null terminator.
-   Returns a pointer to the newly allocated string.
-   Returns `NULL` if `malloc` fails.
-   The caller is responsible for `free`ing the returned string to prevent memory leaks.

## Concepts Covered

-   **Dynamic Memory Allocation**: Using `malloc` to allocate memory at runtime.
-   **Memory Management**: Understanding the need to `free` allocated memory.
-   **String Duplication**: Creating an independent copy of a string.
-   **Null Termination**: Ensuring the duplicated string is properly null-terminated.
-   **Error Handling**: Checking for `malloc` failure.

## Solution Explanation

The `ft_strdup` function takes a single argument, `src`, which is a pointer to the null-terminated string to be duplicated.

1.  **Calculate Length**: The length of the `src` string is determined (e.g., using a helper `ft_strlen`).
2.  **Allocate Memory**: Memory is allocated on the heap using `malloc`. The size allocated is `len + 1` (for the characters plus the null terminator).
3.  **Handle `malloc` Failure**: If `malloc` returns `NULL` (indicating memory allocation failure), the function immediately returns `NULL`.
4.  **Copy String**: The characters from `src` are copied one by one to the newly allocated `dest` buffer.
5.  **Null Terminate**: The `dest` string is explicitly null-terminated.
6.  **Return Value**: A pointer to the newly created duplicate string (`dest`) is returned.

This function provides a safe way to create a mutable copy of a string.
