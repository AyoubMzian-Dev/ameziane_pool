# Exercise 05: ft_atoi_base

**Function:** `int ft_atoi_base(char *str, char *base);`

**Subject:** Write a function that converts the initial portion of the string pointed to by `str` to `int` representation using the specified `base`.

**Allowed functions:** None

**Key Points:**
-   Converts a string representation of a number from an arbitrary base to its integer (base 10) equivalent.
-   Requires a valid `base` string (at least 2 unique characters, no `+` or `-`).
-   Handles leading whitespace and optional signs (`+` or `-`).
-   Uses a helper function to map characters in the `base` string to their numerical values.
-   Stops conversion at the first character not found in the `base` string.

## Concepts Covered

-   **String to Integer Conversion**: Parsing a string to extract a numerical value.
-   **Number Bases**: Understanding and converting numbers from arbitrary bases.
-   **Base Validation**: Checking if the provided base string is valid.
-   **Whitespace Handling**: Skipping leading whitespace characters.
-   **Sign Handling**: Correctly interpreting positive and negative signs.
-   **Digit Mapping**: Mapping characters in the base string to their numerical values.

## Solution Explanation

The `ft_atoi_base` function takes two arguments: `str` (the string to convert) and `base` (a string representing the characters of the base).

1.  **Base Validation**: First, a helper function (`ft_check_base`) validates the `base` string. It ensures the base has at least two unique characters and does not contain `+` or `-`. If invalid, the function returns `0`.
2.  **Skip Whitespace**: The function skips any leading whitespace characters.
3.  **Handle Sign**: It then checks for an optional sign (`+` or `-`).
4.  **Convert Digits**: The function iterates through the `str` string. For each character, it finds its corresponding numerical value in the `base` string using a helper function (`get_char_index`). It accumulates the result by multiplying the current result by the `base_len` and adding the character's numerical value. This continues until a character not found in the `base` string is encountered.
5.  **Return Value**: The accumulated integer value, adjusted for the sign, is returned.

This function provides a versatile way to convert string representations of numbers in various bases to integers.