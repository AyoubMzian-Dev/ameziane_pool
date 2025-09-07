# Exercise 07: ft_strupcase

**Function:** `char *ft_strupcase(char *str);`

**Subject:** Write a function that transforms every letter from lowercase to uppercase.

**Allowed functions:** None

**Key Points:**
-   Modifies the string in-place, directly changing the characters in the original memory location.
-   Leverages the consistent ASCII difference (32) between lowercase and uppercase letters for conversion.
-   Only affects lowercase letters; other characters (uppercase, numbers, symbols) remain unchanged.

## Concepts Covered

-   **Character Case Conversion**: Converting characters between lowercase and uppercase.
-   **ASCII Values**: Understanding the numerical difference between lowercase and uppercase letters in ASCII.
-   **In-place Modification**: Modifying the string directly without creating a new one.
-   **String Traversal**: Iterating through a string character by character.

## Solution Explanation

The `ft_strupcase` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Iteration**: A `while` loop iterates through the string character by character until the null terminator (`\0`) is reached.
2.  **Case Check**: Inside the loop, an `if` condition checks if the current character is a lowercase letter (i.e., between 'a' and 'z').
3.  **Conversion**: If the character is lowercase, `32` is subtracted from its ASCII value to convert it to its corresponding uppercase letter. This is because in ASCII, uppercase letters are 32 units smaller than their lowercase counterparts.
4.  **Advancement**: The loop continues to the next character.

The function returns a pointer to the modified string (`str`).