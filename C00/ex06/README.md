# Exercise 06: ft_print_comb2

**Function:** `void ft_print_comb2(void);`

**Description:** Display all combinations of two distinct two-digit numbers between 00 and 99.

**Allowed functions:** `write`

**Expected output:** `00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99`

**Key Points:**
- Two nested loops: first number 0-98, second number first+1 to 99
- Format: "XX XX" (two digits, space, two digits)
- Combinations separated by ", " (comma + space)
- No comma after the last combination (98 99)

**Logic:**
- First number: 00-98
- Second number: first+1 to 99
- Must convert integers to two-digit format

**Implementation:** Need to handle number formatting - extract tens and units digits using division and modulo operations.

### Solution Explanation

The `ft_print_comb2` function prints all unique combinations of two different two-digit numbers.

1.  **Nested Loops**: Two nested `while` loops are used to generate pairs of numbers, `a` and `b`.
    *   The outer loop for `a` runs from `0` to `98`.
    *   The inner loop for `b` runs from `a + 1` to `99`, ensuring that `b` is always greater than `a` and that pairs are unique.
2.  **Digit Extraction**: To print a two-digit number, we need to extract its tens and units digits.
    *   `a / 10` gives the tens digit.
    *   `a % 10` gives the units digit.
    *   Adding `'0'` converts the integer digit to its character representation.
3.  **Printing**: The function prints the two digits of `a`, a space, and the two digits of `b`. A helper function `ft_putchar` is used for clarity.
4.  **Comma Separation**: An `if` condition checks if the current combination is the last one (`98 99`). If not, a comma and space are printed.