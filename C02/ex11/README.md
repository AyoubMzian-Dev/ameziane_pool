# Exercise 11: ft_putstr_non_printable

**Function:** `void ft_putstr_non_printable(char *str);`

**Description:** Display string with non-printable characters shown as lowercase hexadecimal.

**Allowed functions:** `write`

**Key Points:**
- Printable characters (32-126): display normally
- Non-printable characters: display as `\xx` where `xx` is lowercase hex
- Use `write` only (no `printf` or other output functions)

**Example:**
- Input: `"Hello\nHow are you?"`
- Output: `"Hello\0aHow are you?"`

**Implementation:** Need to convert byte values to hexadecimal manually using character arithmetic.
