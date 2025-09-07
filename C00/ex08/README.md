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

### Solution Explanation (Recursive Approach)

Solving `ft_print_combn` requires a way to handle a variable number of nested loops. Recursion is a powerful technique for this. Here is a conceptual breakdown of a recursive solution:

1.  **Main Function `ft_print_combn(n)`**: This function will handle initial checks (like `n` being between 1 and 9) and will likely prepare an array or buffer to hold the current combination. It will then make the first call to a recursive helper function.

2.  **Recursive Helper Function `generate(combination, index, start_digit)`**:
    *   **Base Case**: The recursion stops when the `index` reaches `n`. At this point, a full combination of `n` digits has been generated in the `combination` array. The function then prints the contents of the array and adds a comma if it's not the last possible combination.
    *   **Recursive Step**: The function loops through possible digits, starting from `start_digit`. For each digit, it:
        a.  Places the digit in the current `combination` array at the given `index`.
        b.  Makes a recursive call to itself: `generate(combination, index + 1, digit + 1)`. The `index` is incremented to fill the next spot in the combination, and `start_digit` is incremented to ensure the next digit is always greater than the current one.

This method effectively creates a "call stack" of loops, allowing it to generate combinations for any `n` without hardcoding the loop structure.