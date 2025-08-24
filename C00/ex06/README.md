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
