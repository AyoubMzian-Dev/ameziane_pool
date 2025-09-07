# Exercise 04: ft_convert_base

**Function:** `char *ft_convert_base(char *nbr, char *base_from, char *base_to);`

**Subject:** Write a function that converts a number from one base to another.

**Allowed functions:** `malloc`

**Key Points:**
-   Converts a number represented as a string (`nbr`) from `base_from` to a new string representation in `base_to`.
-   Requires both `base_from` and `base_to` to be valid bases (at least 2 unique characters, no `+` or `-`).
-   Handles negative numbers and the number zero.
-   Returns a dynamically allocated string, which the caller is responsible for `free`ing.
-   Returns `NULL` if any base is invalid or `malloc` fails.

## Concepts Covered

-   **Number Base Conversion**: Converting between arbitrary numerical bases.
-   **Dynamic Memory Allocation**: Allocating memory for the result string.
-   **String Parsing**: Converting string representation of numbers to an internal integer representation.
-   **String Formatting**: Converting an integer representation back to a string in a new base.
-   **Base Validation**: Implementing robust checks for valid base strings.
-   **Helper Functions**: Breaking down the complex task into smaller, reusable functions (e.g., `ft_check_base`, `ft_atoi_base_local`, `ft_putnbr_base_to_str`).

## Solution Explanation

The `ft_convert_base` function takes three arguments: `nbr` (the number as a string in `base_from`), `base_from` (the original base), and `base_to` (the target base).

1.  **Base Validation**: It first validates both `base_from` and `base_to` using a helper function (`ft_check_base`). If either is invalid, it returns `NULL`.
2.  **Convert to Decimal**: The input `nbr` string is converted from `base_from` to its decimal (base 10) integer representation using a helper function (`ft_atoi_base_local`).
3.  **Handle Zero**: A special case handles `0` to ensure it's correctly represented in `base_to`.
4.  **Calculate Result Length**: The required length for the result string in `base_to` is calculated using a helper function (`get_nbr_len_in_base`).
5.  **Allocate Memory**: Memory is allocated for the `result_str` on the heap. Returns `NULL` on failure.
6.  **Convert from Decimal**: The decimal number is then converted to its string representation in `base_to` using a recursive helper function (`ft_putnbr_base_to_str`).
7.  **Null Terminate**: The `result_str` is null-terminated.
8.  **Return Value**: A pointer to the newly created string (`result_str`) is returned.

This function is a comprehensive solution for arbitrary base conversions, leveraging modular design and robust error handling.
