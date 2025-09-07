# Exercise 09: ft_strcapitalize

**Function:** `char *ft_strcapitalize(char *str);`

**Subject:** Write a function that capitalizes the first letter of each word in a string. Words are separated by spaces, tabs, newlines, or any non-alphanumeric character.

**Allowed functions:** None

**Key Points:**
-   Modifies the string in-place.
-   Defines a "word" as a sequence of alphanumeric characters.
-   Uses a state variable (`capitalize_next`) to track whether the next character encountered should be capitalized.
-   Converts the first letter of each word to uppercase and subsequent letters of the same word to lowercase.

## Concepts Covered

-   **String Traversal**: Iterating through a string character by character.
-   **Character Classification**: Identifying alphanumeric characters and word separators.
-   **Case Conversion**: Converting characters between uppercase and lowercase.
-   **State Machine**: Maintaining a state (e.g., `capitalize_next`) to determine if the next character should be capitalized.
-   **In-place Modification**: Modifying the string directly without creating a new one.

## Solution Explanation

The `ft_strcapitalize` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Initialization**: An integer `i` is initialized to `0` for string traversal, and a boolean-like integer `capitalize_next` is set to `1` (true) to indicate that the first character of the string should be capitalized.
2.  **Iteration**: A `while` loop iterates through the string until the null terminator is reached.
3.  **Character Processing**:
    *   If the current character is a lowercase letter and `capitalize_next` is true, it's converted to uppercase. `capitalize_next` is then set to `0`.
    *   If the current character is an uppercase letter and `capitalize_next` is false, it's converted to lowercase. `capitalize_next` is then set to `0`.
    *   If the current character is a digit, `capitalize_next` is set to `0`.
    *   If the current character is none of the above (i.e., a non-alphanumeric separator), `capitalize_next` is set to `1` to indicate that the next alphanumeric character encountered should be capitalized.
4.  **Advancement**: `i` is incremented to move to the next character.

The function returns a pointer to the modified string (`str`).