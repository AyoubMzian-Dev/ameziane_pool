# Exercise 05: ft_print_comb

**Function:** `void ft_print_comb(void);`

**Description:** Display all unique combinations of three distinct digits in ascending order.

**Allowed functions:** `write`

**Expected output:** `012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789`

**Key Points:**
- Three nested loops for digits a, b, c
- Each digit must be different: `a < b < c`
- Combinations separated by `", "` (comma + space)
- No comma after the last combination (789)
- Excludes: 987 (covered by 789), 999 (repeated digit)

**Logic:**
- First digit: 0-7
- Second digit: first+1 to 8  
- Third digit: second+1 to 9

**Implementation:** Triple nested loops with proper comma formatting.
