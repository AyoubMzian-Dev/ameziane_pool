# Exercise 03: ft_print_numbers

**Function:** `void ft_print_numbers(void);`

**Description:** Display all digits on a single line, in ascending order.

**Allowed functions:** `write`

**Expected output:** `0123456789`

**Key Points:**
- Single line output (no newline required unless specified)
- Ascending order: 0 → 9
- Start with '0', increment until '9'

**Implementation approach:** Start with '0', increment until '9' using `while` loop.

### Solution Explanation

The `ft_print_numbers` function prints the digits from 0 to 9.

1.  **Initialization**: A `char` variable, `digit`, is initialized to `'0'`.
2.  **Looping**: A `while` loop continues as long as `digit` is less than or equal to `'9'`.
3.  **Printing**: Inside the loop, `write(1, &digit, 1)` prints the current character.
4.  **Incrementing**: `digit++` moves to the next character in the ASCII table, which corresponds to the next digit.

This process repeats until all digits from '0' to '9' have been printed.