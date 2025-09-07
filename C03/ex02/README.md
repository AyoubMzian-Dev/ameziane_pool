# Exercise 02: ft_strcat

**Function:** `char *ft_strcat(char *dest, char *src);`

**Subject:** Write a function that concatenates two strings.

**Allowed functions:** None

**Key Points:**
-   Appends the `src` string to the end of the `dest` string.
-   The null terminator of `dest` is overwritten by the first character of `src`.
-   The resulting string in `dest` is null-terminated.
-   **Critical**: It is the caller's responsibility to ensure that the `dest` buffer has sufficient allocated memory to accommodate the concatenated string (original `dest` + `src` + null terminator) to prevent buffer overflows.

## Concepts Covered

-   **String Concatenation**: Appending one string to the end of another.
-   **Null Terminator**: Finding the end of the destination string and correctly placing the new null terminator.
-   **Buffer Overflow**: Awareness of potential issues if `dest` buffer is too small.
-   **Pointers**: Traversing source and destination strings.

## Solution Explanation

The `ft_strcat` function takes two arguments: `dest` (a pointer to the destination string) and `src` (a pointer to the source string).

1.  **Find End of Destination**: The function first iterates through `dest` to find its null terminator, which marks the end of the string.
2.  **Append Source**: It then iterates through `src`, copying each character from `src` to `dest` starting from the null terminator's position in `dest`.
3.  **Null Terminate Result**: After all characters from `src` have been copied, a new null terminator is placed at the very end of the newly concatenated string in `dest`.
4.  **Return Value**: The function returns a pointer to the destination string (`dest`).

This function provides a basic implementation of string concatenation, but it's crucial to ensure `dest` has enough allocated memory to prevent buffer overflows.