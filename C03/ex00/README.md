# Exercise 00: ft_strcmp

**Function:** `int ft_strcmp(char *s1, char *s2);`

**Description:** Reproduce the behavior of the `strcmp` function.

**No allowed functions:** None

**Return Value:**
- `< 0` if s1 is lexicographically less than s2
- `0` if s1 and s2 are equal
- `> 0` if s1 is lexicographically greater than s2

**Key Points:**
- Compare characters until difference found or end of string
- Return difference of ASCII values: `s1[i] - s2[i]`
- Continue comparing while characters are equal and not null

**Examples:**
- `ft_strcmp("abc", "abc")` returns `0`
- `ft_strcmp("abc", "abd")` returns negative value
- `ft_strcmp("abd", "abc")` returns positive value
