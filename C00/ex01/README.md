# Exercise 01: ft_print_alphabet

**Function:** `void ft_print_alphabet(void);`

**Description:** Display the alphabet in lowercase, on a single line, in ascending order, starting from 'a'.

**Allowed functions:** `write`

**Expected output:** `abcdefghijklmnopqrstuvwxyz`

**Key Points:**
- Single line output (no newline required unless specified)
- Ascending order: a → z
- Use loops to iterate through characters
- Can use `write` directly or build a `ft_putchar` helper

**Implementation approach:** Start with 'a', increment until 'z'.

### Solution Explanation

The `ft_print_alphabet` function prints the lowercase alphabet to the screen.

1.  **Initialization**: A `char` variable, `letter`, is initialized to `'a'`.
2.  **Looping**: A `while` loop continues as long as `letter` is less than or equal to `'z'`.
3.  **Printing**: Inside the loop, `write(1, &letter, 1)` prints the current character.
4.  **Incrementing**: `letter++` moves to the next character in the ASCII table.

This process repeats until all characters from 'a' to 'z' have been printed.