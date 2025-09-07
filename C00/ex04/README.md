# Exercise 04: ft_is_negative

**Function:** `void ft_is_negative(int n);`

**Description:** Display 'N' or 'P' depending on the sign of the integer parameter.

**Allowed functions:** `write`

**Rules:**
- If `n` is negative, display 'N'
- If `n` is positive or zero, display 'P'

**Key Points:**
- Simple conditional logic with `if/else`
- Zero is considered positive (displays 'P')
- Only one character output per call

**Implementation:** Use `if (n < 0)` condition to decide between 'N' and 'P'.

### Solution Explanation

The `ft_is_negative` function checks if an integer is negative or positive/zero.

1.  **Conditional Check**: An `if` statement checks if the input integer `n` is less than 0.
2.  **Negative Case**: If `n < 0` is true, `write(1, "N", 1)` is called to print 'N'.
3.  **Positive/Zero Case**: If the condition is false (meaning `n` is 0 or positive), the `else` block is executed, and `write(1, "P", 1)` prints 'P'.