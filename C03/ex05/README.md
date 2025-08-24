# Exercise 05: ft_strlcat

**Function:** `unsigned int ft_strlcat(char *dest, char *src, unsigned int size);`

**Description:** Reproduce the behavior of the `strlcat` function.

**No allowed functions:** None

**Purpose:** Safe string concatenation with buffer size limit.

**Return Value:**
- Total length that the result would have (dest_len + src_len)
- This is useful to detect truncation

**Key Points:**
- **Safe concatenation** - respects buffer size limits
- Copy at most `size - dest_len - 1` characters from `src`
- Always null-terminate (if `size > 0`)
- Return total length of intended result, not actual characters copied
- If `dest_len >= size`, return `size + src_len` (truncation case)

**Algorithm:**
1. Calculate `dest_len` and `src_len`
2. If `dest_len >= size`, return `size + src_len` (no operation)
3. Copy characters from `src` with bounds checking
4. Null-terminate result
5. Return `dest_len + src_len`

**Why useful:**
- Prevents buffer overflow
- Return value indicates if truncation occurred
- Safer alternative to `strcat` and `strncat`

**Example:**
```c
char dest[10] = "Hello";
int result = ft_strlcat(dest, " World", 10);
// dest = "Hello Wor", result = 11 (truncation occurred)
```
