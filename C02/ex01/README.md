# Exercise 01: ft_strncpy

**Function:** `char *ft_strncpy(char *dest, char *src, unsigned int n);`

**Description:** Reproduce the behavior of the `strncpy` function.

**Key Points:**
- Copy at most `n` characters from `src` to `dest`
- If `src` is shorter than `n`, pad with null characters
- If `src` is `n` or longer, don't null-terminate
- Return `dest`

**Important:** Unlike `strcpy`, this doesn't always null-terminate the result.
