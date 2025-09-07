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

### Solution Explanation

The `ft_putchar` function is designed to output a single character to the standard output(the terminale). Here's how it works:

1.  **Function Signature**: `void ft_putchar(char c)` defines a function that accepts one argument, `c`, of type `char`, and returns no value (`void`).

2.  **System Call**: The core of the function is the `write` system call. In this context, `write(1, &c, 1);` is used:
    *   `1`: This is the file descriptor for standard output (the terminal screen).
    *   `&c`: This is the memory address of the character `c`. The `write` function needs a pointer to the data it is supposed to write.
    *   `1`: This tells `write` to output exactly one byte of data.

By calling `write` with these parameters, the function effectively prints the character stored in `c` to the screen.