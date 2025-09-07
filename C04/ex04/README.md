# Exercise 04: ft_putnbr_base

**Function:** `void ft_putnbr_base(int nbr, char *base);`

**Subject:** Write a function that displays a number in a given base.

**Allowed functions:** `write`

**Key Points:**
-   Converts an integer from base 10 to a specified arbitrary base.
-   Requires a valid `base` string (at least 2 unique characters, no `+` or `-`).
-   Handles negative numbers by printing a `'-'` sign.
-   Uses recursion to print digits in the correct order for the given base.
-   The `base` string defines the set of characters used for the digits in the new base.

## Concepts Covered

-   **Number Bases**: Understanding different numerical systems (binary, octal, decimal, hexadecimal, custom).
-   **Base Conversion**: Converting a number from base 10 to an arbitrary base.
-   **Recursion**: Using recursion to print digits in the correct order.
-   **Base Validation**: Checking if the provided base string is valid (e.g., no duplicate characters, no `+` or `-`).
-   **Standard Output**: Using `write` to print characters.

## Solution Explanation

The `ft_putnbr_base` function takes two arguments: `nbr` (the integer to display) and `base` (a string representing the base characters).

1.  **Base Validation**: First, a helper function (`ft_check_base`) validates the `base` string. It ensures the base has at least two unique characters and does not contain `+` or `-`. If invalid, the function returns.
2.  **Handle Negative Numbers**: If `nbr` is negative, a `'-'` character is printed, and `nbr` is converted to its positive equivalent.
3.  **Recursive Conversion**: If `nbr` is greater than or equal to the `base_len`, the function recursively calls itself with `nbr / base_len` to print the leading digits.
4.  **Print Digit**: The last digit (`nbr % base_len`) is then converted to its corresponding character from the `base` string and printed.
5.  **Base Case**: If `nbr` is less than `base_len`, it's a single digit in the given base, and its character is printed directly.

This function provides a flexible way to display numbers in various numerical systems.