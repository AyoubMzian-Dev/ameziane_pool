# Exercise 02: ft_strcat

**Function:** `char *ft_strcat(char *dest, char *src);`

**Description:** Reproduce the behavior of the `strcat` function.

**No allowed functions:** None

**Purpose:** Concatenate (append) the string `src` to the end of string `dest`.

**Key Points:**
- Find end of `dest` string (first null terminator)
- Copy all characters from `src` to end of `dest`
- Add null terminator after copied characters
- Return pointer to `dest`
- **Important:** `dest` must have enough space to hold both strings

**Process:**
1. Find length of `dest`
2. Copy `src` starting at `dest[dest_length]`
3. Null-terminate the result

**Example:**
```c
char dest[20] = "Hello ";
ft_strcat(dest, "World");
// dest now contains "Hello World"
```

**Warning:** No bounds checking - can cause buffer overflow!
