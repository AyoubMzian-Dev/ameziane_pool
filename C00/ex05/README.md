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

### Solution Explanation

The `ft_print_comb` function generates and prints all unique combinations of three different digits in ascending order.

1.  **Nested Loops**: The core of the solution is three nested `while` loops, one for each digit (`a`, `b`, and `c`).
2.  **Initialization**:
    *   The first loop (`a`) starts from `'0'`.
    *   The second loop (`b`) starts from `a + 1` to ensure that `b` is always greater than `a`.
    *   The third loop (`c`) starts from `b + 1` to ensure that `c` is always greater than `b`.
3.  **Printing**: Inside the innermost loop, the three digits are printed using `write`.
4.  **Comma Separation**: An `if` condition checks if the current combination is the last one (`789`). If it is not, a comma and a space are printed. This avoids a trailing comma.
5.  **Loop Constraints**: The loops have specific end points (`'7'`, `'8'`, `'9'`) to prevent generating invalid combinations and to simplify the logic for the final comma.