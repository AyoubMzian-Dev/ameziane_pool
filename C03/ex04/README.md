# Exercise 04: ft_strstr

**Function:** `char *ft_strstr(char *str, char *to_find);`

**Description:** Reproduce the behavior of the `strstr` function.

**No allowed functions:** None

**Purpose:** Find the first occurrence of substring `to_find` in string `str`.

**Return Value:**
- Pointer to first occurrence of `to_find` in `str`
- Pointer to `str` if `to_find` is empty string
- `NULL` (0) if `to_find` is not found

**Key Points:**
- Search through each position in `str`
- At each position, try to match entire `to_find` string
- Use nested loops: outer for position in `str`, inner for matching
- Special case: empty `to_find` returns `str`

**Algorithm:**
1. Handle empty `to_find` case
2. For each position in `str`:
   - Try to match `to_find` starting at current position
   - If complete match found, return pointer to start position
3. If no match found, return NULL

**Example:**
```c
ft_strstr("Hello World", "Wor");  // Returns pointer to "World"
ft_strstr("Hello", "xyz");        // Returns NULL
ft_strstr("Hello", "");           // Returns pointer to "Hello"
```
