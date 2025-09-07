# C02 - Strings and Character Manipulation

## 📋 Module Overview

This module delves deeper into string manipulation in C, focusing on various operations such as copying, checking character types, case conversion, and advanced printing. It reinforces the understanding of null-terminated strings and introduces common utility functions.

## 🎯 Learning Objectives

-   Master different string copying techniques.
-   Develop functions to check the properties of characters within a string (alphabetic, numeric, case, printable).
-   Implement in-place string transformations (uppercase, lowercase, capitalize).
-   Understand and handle non-printable characters.
-   Gain proficiency in memory representation and printing.

## 📚 Exercises

### Mandatory Exercises

-   **ex00**: `ft_strcpy` - Copy a string.
-   **ex01**: `ft_strncpy` - Copy a string with a specified maximum length.
-   **ex02**: `ft_str_is_alpha` - Check if a string contains only alphabetic characters.
-   **ex03**: `ft_str_is_numeric` - Check if a string contains only numeric characters.
-   **ex04**: `ft_str_is_lowercase` - Check if a string contains only lowercase characters.
-   **ex05**: `ft_str_is_uppercase` - Check if a string contains only uppercase characters.
-   **ex06**: `ft_str_is_printable` - Check if a string contains only printable characters.
-   **ex07**: `ft_strupcase` - Convert all lowercase letters in a string to uppercase.
-   **ex08**: `ft_strlowcase` - Convert all uppercase letters in a string to lowercase.
-   **ex09**: `ft_strcapitalize` - Capitalize the first letter of each word in a string.
-   **ex10**: `ft_strlcpy` - Copy a string with a size limit, returning the length of the source string.
-   **ex11**: `ft_putstr_non_printable` - Display a string, replacing non-printable characters with their hexadecimal representation.
-   **ex12**: `ft_print_memory` - Display a block of memory in hexadecimal and ASCII.

## 🔧 Key Concepts

-   **Strings**: Null-terminated character arrays, string traversal.
-   **Character Properties**: ASCII values, character sets, `is_alpha`, `is_numeric`, `is_lower`, `is_upper`, `is_printable`.
-   **Case Conversion**: ASCII manipulation for `to_upper`, `to_lower`.
-   **Memory Manipulation**: Direct memory access, hexadecimal representation.
-   **Buffer Overflow**: Understanding and preventing common string vulnerabilities.

## 📊 Difficulty Progression

```
Simple    →    Moderate    →    Complex    →    Advanced
ex00-06        ex07-09         ex10-11        ex12
```

## 🚨 Important Notes

-   All exercises must adhere to the `norminette` coding standard.
-   Only allowed functions are typically `write` (for output) and basic arithmetic operations.
-   Pay close attention to null terminators and buffer sizes when copying strings.
-   Character ASCII values are crucial for character type checks and conversions.

## 💡 Tips for Success

1.  **Understand ASCII**: Familiarize yourself with ASCII table for character manipulation.
2.  **Handle Null Terminators**: Always ensure strings are properly null-terminated.
3.  **Boundary Conditions**: Test with empty strings, strings of size 1, and strings at buffer limits.
4.  **Modularize**: Break down complex problems (like `ft_strcapitalize`) into smaller helper functions.
5.  **Hexadecimal Conversion**: Practice converting decimal to hexadecimal for `ex11` and `ex12`.

---

**Status**: In Progress  
**Total Exercises**: 13 (ex00-ex12)  
**Estimated Time**: 2-3 days
