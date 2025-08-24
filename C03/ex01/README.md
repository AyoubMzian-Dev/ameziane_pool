# Exercise 01: ft_strncmp

**Function:** `int ft_strncmp(char *s1, char *s2, unsigned int n);`

**Description:** Reproduce the behavior of the `strncmp` function.

**No allowed functions:** None

**Return Value:**
- `< 0` if s1 is lexicographically less than s2 (within first n characters)
- `0` if s1 and s2 are equal (within first n characters)
- `> 0` if s1 is lexicographically greater than s2 (within first n characters)

**Key Points:**
- Compare at most `n` characters
- If `n` is 0, return 0
- Stop comparing at difference, null terminator, or after n characters
- Return difference of ASCII values: `s1[i] - s2[i]`

**Examples:**
- `ft_strncmp("abc", "abd", 2)` returns `0` (only compares "ab")
- `ft_strncmp("abc", "abd", 3)` returns negative value
- `ft_strncmp("hello", "help", 3)` returns `0`
