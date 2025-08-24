# Exercise 07: ft_putnbr

**Function:** `void ft_putnbr(int nb);`

**Description:** Display the number passed as parameter. Must handle all possible values of an `int`.

**Allowed functions:** `write`

**Key Points:**
- Handle all int values: -2,147,483,648 to 2,147,483,647
- Special case: `INT_MIN` (-2147483648) cannot be negated safely
- Recursive approach: divide by 10, handle remainder
- Handle negative numbers by printing '-' and working with positive value

**Critical Edge Case:**
- `-2147483648` cannot become `+2147483648` (out of int range)
- Must handle this case separately

**Implementation Strategy:**
1. Handle negative sign
2. Special case for INT_MIN
3. Recursive digit extraction
4. Convert digits to characters using `+ '0'`

**Example:** `ft_putnbr(42)` should display `42`
