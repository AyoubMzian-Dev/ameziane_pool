# Exercise 03: ft_atoi

**Function:** `int ft_atoi(char *str);`

**Subject:** Write a function that converts the initial portion of the string pointed to by `str` to `int` representation.

**Allowed functions:** None

**Key Points:**
-   Parses a string, skipping leading whitespace characters.
-   Correctly interprets an optional sign (`+` or `-`).
-   Converts a sequence of digits into an integer value.
-   Stops conversion at the first non-digit character or the null terminator.
-   Does not handle integer overflow/underflow; assumes the result fits within an `int`.

## Concepts Covered

-   **String to Integer Conversion**: Parsing a string to extract a numerical value.
-   **Whitespace Handling**: Skipping leading whitespace characters.
-   **Sign Handling**: Correctly interpreting positive and negative signs.
-   **Digit Extraction**: Converting character digits to their integer equivalents.
-   **Accumulation**: Building the integer value digit by digit.

## Solution Explanation

The `ft_atoi` function takes a single argument, `str`, which is a pointer to a null-terminated string.

1.  **Skip Whitespace**: The function first skips any leading whitespace characters (space, tab, newline, etc.).
2.  **Handle Sign**: It then checks for an optional sign (`+` or `-`). If multiple signs are present, the last one determines the overall sign.
3.  **Convert Digits**: The function iterates through the string, converting each digit character to its integer equivalent and accumulating the result. This continues until a non-digit character is encountered or the null terminator is reached.
4.  **Return Value**: The accumulated integer value, adjusted for the sign, is returned.

This function provides a custom implementation of the standard `atoi` function, crucial for parsing numerical input from strings.