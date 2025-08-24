# Exercise 07: ft_strupcase

**Function:** `char *ft_strupcase(char *str);`

**Description:** Convert every letter in the string to uppercase.

**Key Points:**
- Only converts lowercase letters (a-z) to uppercase (A-Z)
- Other characters remain unchanged
- Modifies the original string
- Returns the same string pointer

**Method:** Subtract 32 from ASCII value of lowercase letters.
