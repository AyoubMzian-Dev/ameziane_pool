# Exercise 03: ft_strncat

**Function:** `char *ft_strncat(char *dest, char *src, unsigned int nb);`

**Description:** Reproduce the behavior of the `strncat` function.

**No allowed functions:** None

**Purpose:** Concatenate at most `nb` characters from `src` to the end of `dest`.

**Key Points:**
- Find end of `dest` string
- Copy at most `nb` characters from `src` to end of `dest`
- Stop copying if null terminator in `src` is reached before `nb` characters
- Always null-terminate the result
- Return pointer to `dest`

**Process:**
1. Find length of `dest`
2. Copy up to `nb` characters from `src`
3. Always add null terminator

**Example:**
```c
char dest[20] = "Hello ";
ft_strncat(dest, "World!!!", 5);
// dest now contains "Hello World"
```

**Safety:** Limits number of characters copied, but still no buffer bounds checking.
