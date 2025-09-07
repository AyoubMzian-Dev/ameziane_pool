# Exercise 07: ft_putnbr

**Function:** `void ft_putnbr(int nb);`

**Description:** Display the number passed as parameter. Must handle all possible values of an `int`.

**Allowed functions:** `write`

**Key Points:**
- Handle all int values: -2,147,483,648 to 2,147,483,647
- Special case: `INT_MIN` (-2147483648) cannot be negated safely
- Recursive approach: divide by 10, handle remainder
- Handle negative numbers by printing '-' and working with positive value

**Critical Edge Case:**
- `-2147483648` cannot become `+2147483648` (out of int range)
- Must handle this case separately

**Implementation Strategy:**
1. Handle negative sign
2. Special case for INT_MIN
3. Recursive digit extraction
4. Convert digits to characters using `+ '0'`

**Example:** `ft_putnbr(42)` should display `42`

### Solution Explanation

The `ft_putnbr` function is a classic exercise in C that prints an integer to the screen using only `write`. It requires careful handling of negative numbers and recursion.

1.  **Edge Case: `INT_MIN`**: The function first checks for the most negative integer, `-2147483648`. This value cannot be safely negated (i.e., `-(-2147483648)` results in overflow). The solution handles this by manually printing the negative sign and the first digit '2', then calling `ft_putnbr` with the remaining part of the number, `147483648`.

2.  **Negative Numbers**: For any other negative number, the function prints a `'-'` sign and then calls itself with the positive version of the number (`-nb`).

3.  **Recursion**: If the number is greater than 9, it means it has more than one digit. The function calls itself with `nb / 10` to process the number without its last digit. After that recursive call returns, it calls itself again with `nb % 10` to process the last digit. This "divide and conquer" approach breaks the number down until only single digits are left to be printed.

4.  **Base Case**: The recursion stops when `nb` is a single digit (0-9). In this case, the function converts the integer digit to its character equivalent by adding `'0'` and prints it.