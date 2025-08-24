# Exercise 08: ft_print_combn

**Function:** `void ft_print_combn(int n);`

**Description:** Display all unique combinations of n distinct digits in ascending order.

**Allowed functions:** `write`

**Constraints:** `0 < n < 10`

**Examples:**
- `n = 2`: `01, 02, 03, ..., 09, 12, ..., 79, 89`
- `n = 3`: `012, 013, 014, ..., 789` (same as ex05)

**Key Points:**
- **Most Complex Exercise** in C00
- Must work for any valid n (1-9)
- Digits must be distinct and in ascending order
- Recursive or array-based approach needed
- Dynamic combination generation

**Implementation Challenges:**
1. **Variable depth loops** - can't hardcode n nested loops
2. **Digit tracking** - ensure ascending order and no repetition  
3. **Output formatting** - proper comma separation
4. **Edge detection** - know when to stop adding commas

**Approaches:**
- **Recursive backtracking**
- **Array-based digit tracking**
- **Mathematical combination generation**

**This is the capstone exercise** - combines all previous concepts with algorithmic complexity.
