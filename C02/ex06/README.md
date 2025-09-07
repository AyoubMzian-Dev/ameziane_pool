# Exercise 06: ft_str_is_printable

**Function:** `int ft_str_is_printable(char *str);`

**Subject:** Write a function that returns `1` if the string given as a parameter contains only printable characters, and `0` otherwise.

**Allowed functions:** None

**Key Points:**
-   Checks each character's ASCII value to determine if it falls within the standard printable ASCII range (32 to 126, inclusive).
-   Returns `0` immediately upon finding any non-printable character for efficiency.
-   An empty string is considered to contain only printable characters (returns `1`).

## Concepts Covered

-   **Character Classification**: Identifying printable characters based on their ASCII values.
-   **ASCII Range**: Understanding the ASCII range for printable characters (32 to 126).
-   **String Traversal**: Iterating through a string character by character.
-   **Boolean Logic**: Returning `1` for true and `0` for false.
-   **Edge Cases**: Handling empty strings.

## Solution Explanation

The `ft_str_is_printable` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Empty String Check**: If the string is empty (`str[0] == '\0'`), it is considered to contain only printable characters, and the function returns `1`.
2.  **Iteration**: A `while` loop iterates through the string character by character until the null terminator is reached.
3.  **Character Check**: Inside the loop, an `if` condition checks if the current character is NOT within the printable ASCII range (32 to 126). If a non-printable character is found, the function immediately returns `0`.
4.  **Success**: If the loop completes without finding any non-printable characters, it means all characters are printable, and the function returns `1`.