# Exercise 08: ft_strlowcase

**Function:** `char *ft_strlowcase(char *str);`

**Subject:** Write a function that transforms every letter from uppercase to lowercase.

**Allowed functions:** None

**Key Points:**
-   Modifies the string in-place, directly changing the characters in the original memory location.
-   Leverages the consistent ASCII difference (32) between uppercase and lowercase letters for conversion.
-   Only affects uppercase letters; other characters (lowercase, numbers, symbols) remain unchanged.

## Concepts Covered

-   **Character Case Conversion**: Converting characters between uppercase and lowercase.
-   **ASCII Values**: Understanding the numerical difference between uppercase and lowercase letters in ASCII.
-   **In-place Modification**: Modifying the string directly without creating a new one.
-   **String Traversal**: Iterating through a string character by character.

## Solution Explanation

The `ft_strlowcase` function takes a single argument, `str`, which is a pointer to the first character of a string (`char *`).

1.  **Iteration**: A `while` loop iterates through the string character by character until the null terminator (`\0`) is reached.
2.  **Case Check**: Inside the loop, an `if` condition checks if the current character is an uppercase letter (i.e., between 'A' and 'Z').
3.  **Conversion**: If the character is uppercase, `32` is added to its ASCII value to convert it to its corresponding lowercase letter. This is because in ASCII, lowercase letters are 32 units larger than their uppercase counterparts.
4.  **Advancement**: The loop continues to the next character.

The function returns a pointer to the modified string (`str`).