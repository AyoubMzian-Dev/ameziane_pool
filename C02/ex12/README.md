# Exercise 12: ft_print_memory

**Function:** `void *ft_print_memory(void *addr, unsigned int size);`

**Description:** Display memory area in hexdump format with three columns.

**Allowed functions:** `write`

**Format:**
1. **Address column:** 16-digit hex address followed by `: `
2. **Hex column:** Content in hex, space every 2 chars, padded if needed
3. **ASCII column:** Printable chars or `.` for non-printable

**Key Points:**
- Each line shows 16 bytes maximum
- If `size` is 0, display nothing
- Return the original `addr` pointer
- Must handle memory addresses as `unsigned long`

**Example:**
```
000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
```

**Most Complex:** This exercise requires manual hex conversion, address formatting, and careful memory handling.
