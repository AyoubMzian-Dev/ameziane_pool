# Exercise 10: ft_strlcpy

**Function:** `unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);`

**Description:** Reproduce the behavior of the `strlcpy` function.

**Key Points:**
- Copy at most `size - 1` characters from `src` to `dest`
- Always null-terminate `dest` (if `size > 0`)
- Return the length of `src` (not bytes copied)
- If `size` is 0, don't modify `dest`

**Why useful:** Safer than `strcpy` and `strncpy` - always null-terminates and tells you the source length.

**Return value:** Always the full length of source string, regardless of how many characters were actually copied.
