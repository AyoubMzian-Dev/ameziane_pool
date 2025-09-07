# Exercise 12: ft_print_memory

**Function:** `void *ft_print_memory(void *addr, unsigned int size);`

**Subject:** Write a function that displays the content of a memory area in hexadecimal and ASCII.

**Allowed functions:** `write` (via `ft_putchar` helper)

**Key Points:**

- Displays memory content in a structured, human-readable format.
- Combines hexadecimal representation of bytes with their ASCII equivalents.
- Handles memory addresses, byte values, and printable/non-printable character display.
- A powerful tool for low-level debugging and understanding memory layout.

## Concepts Covered

- **Memory Representation**: Understanding how data is stored in memory.
- **Hexadecimal Conversion**: Converting byte values to hexadecimal.
- **Pointers**: Working with `void *` pointers and pointer arithmetic.
- **Character Classification**: Distinguishing between printable and non-printable characters for ASCII display.
- **Standard Output**: Using `write` to print formatted output.

## Solution Explanation

The `ft_print_memory` function takes two arguments: `addr` (a pointer to the memory area) and `size` (the number of bytes to display).

1.  **Handle Zero Size**: If `size` is `0`, the function returns immediately.
2.  **Iterate in Chunks**: The function iterates through the memory area in chunks (typically 16 bytes per line).
3.  **Print Address**: For each chunk, the memory address of the current chunk is printed in hexadecimal using a helper function (`print_hex_address`).
4.  **Print Hex Content**: The hexadecimal representation of each byte in the current chunk is printed using a helper function (`print_hex_content`). Non-existent bytes (if `size` is not a multiple of 16) are padded with spaces.
5.  **Print ASCII Content**: The ASCII representation of each byte in the current chunk is printed using a helper function (`print_printable_content`). Non-printable characters are replaced with a dot (`.`).
6.  **Newline**: A newline character is printed after each line.

This function provides a powerful debugging tool for inspecting raw memory content.

---

## Detailed Solution Walkthrough

### Helper Functions

- **ft_putchar**: Writes a single character to standard output using `write`.
- **print_hex_address**: Prints the memory address in hexadecimal, padded to 16 characters, followed by a colon and space.
- **print_hex_content**: Prints the hexadecimal representation of up to 16 bytes from the memory block, grouping every two bytes and padding with spaces if fewer than 16 bytes remain.
- **print_printable_content**: Prints the printable ASCII characters for each byte, or a dot (`.`) for non-printable bytes.

### How the Solution Works

1. The memory is processed in blocks of 16 bytes.
2. For each block:
   - The address of the block is printed in hexadecimal.
   - The content of the block is printed in hexadecimal, grouped and padded as needed.
   - The printable characters are shown, with non-printable bytes replaced by dots.
3. The process repeats until all bytes are printed.

### Example Output

```
00007ffee7b6a8c0: 48 65 6c 6c 6f 20 77 6f 72 6c 64 21 00 00 00 00  Hello world!....
```

### Notes

- The solution avoids using forbidden functions and sticks to basic C and `write`.
- Handles edge cases, such as printing less than 16 bytes at the end.

This approach helps visualize memory content for debugging and learning purposes.
