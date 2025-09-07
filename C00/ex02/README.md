# Exercise 02: ft_print_reverse_alphabet

**Function:** `void ft_print_reverse_alphabet(void);`

**Description:** Display the alphabet in lowercase, on a single line, in descending order, starting from 'z'.

**Allowed functions:** `write`

**Expected output:** `zyxwvutsrqponmlkjihgfedcba`

**Key Points:**
- Single line output (no newline required unless specified)
- Descending order: z → a
- Start with 'z', decrement until 'a'

**Implementation approach:** Start with 'z', decrement until 'a' using `while` loop.

### Solution Explanation

The `ft_print_reverse_alphabet` function prints the lowercase alphabet in reverse order.

1.  **Initialization**: A `char` variable, `letter`, is initialized to `'z'`.
2.  **Looping**: A `while` loop continues as long as `letter` is greater than or equal to `'a'`.
3.  **Printing**: Inside the loop, `write(1, &letter, 1)` prints the current character.
4.  **Decrementing**: `letter--` moves to the previous character in the ASCII table.

This process repeats until all characters from 'z' down to 'a' have been printed.