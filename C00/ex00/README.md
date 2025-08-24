# Exercise 00: ft_putchar

**Function:** `void ft_putchar(char c);`

**Description:** Write a function that displays the character passed as parameter.

**Allowed functions:** `write`

**Key Points:**
- Must use `write(1, &c, 1)` exactly as specified
- First parameter: file descriptor (1 = stdout)
- Second parameter: address of character (&c)
- Third parameter: number of bytes to write (1)

**Purpose:** Introduction to the `write` system call and basic C function structure.

**Note:** This is the foundation function - many other exercises will use `ft_putchar` as a building block.
