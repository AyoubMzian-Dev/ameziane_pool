# Exercise 02: ft_putnbr

**Function:** `void ft_putnbr(int nb);`

**Subject:** Write a function that displays the number passed as parameter. Must handle all possible values of an `int`.

**Allowed functions:** `write` (via `ft_putchar` helper)

**Key Points:**
-   Handles the full range of `int` values, including the special case of `INT_MIN`.
-   Uses recursion to process digits from left to right (most significant to least significant).
-   Correctly handles negative numbers by printing a minus sign and then processing the absolute value.
-   Relies on `ft_putchar` to print individual characters.

## Concepts Covered

-   **Integer to String Conversion**: Converting numerical values to their character representations.
-   **Recursion**: Using a recursive approach to break down the number into digits.
-   **Edge Cases**: Handling negative numbers, especially `INT_MIN`.
-   **Standard Output**: Using `write` to print characters.

## Solution Explanation

The `ft_putnbr` function takes a single argument, `nb`, which is an integer.

1.  **Handle `INT_MIN`**: A special case is made for `INT_MIN` because its positive counterpart (`-INT_MIN`) would overflow a standard `int`. It's typically handled by printing the string "-2147483648" directly.
2.  **Handle Negative Numbers**: If `nb` is negative, a `'-'` character is printed, and `nb` is converted to its positive equivalent for further processing.
3.  **Recursive Printing**: If `nb` is greater than 9, the function calls itself with `nb / 10` to print the leading digits, then prints the last digit (`nb % 10`). This recursive call continues until `nb` is a single digit.
4.  **Base Case**: If `nb` is a single digit (0-9), it's converted to its character representation by adding `'0'` and printed using `ft_putchar`.

This function demonstrates a robust way to print integers, including handling the tricky `INT_MIN` case.