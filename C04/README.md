# C04 - Number Conversion and String to Integer/Integer to String

## 📋 Module Overview

This module focuses on fundamental number conversion techniques, including converting strings to integers (`atoi`) and integers to strings in various bases (`putnbr_base`). It reinforces understanding of character manipulation, numerical systems, and handling different bases.

## 🎯 Learning Objectives

-   Implement string to integer conversion (`atoi`).
-   Implement integer to string conversion in arbitrary bases.
-   Understand and work with different numerical bases (binary, octal, decimal, hexadecimal, custom).
-   Handle edge cases for number conversions (e.g., signs, overflow, invalid input).
-   Reinforce character manipulation and string traversal.

## 📚 Exercises

### Mandatory Exercises

-   **ex00**: `ft_strlen` - (Revisit) Returns the length of a string.
-   **ex01**: `ft_putstr` - (Revisit) Displays a string to standard output.
-   **ex02**: `ft_putnbr` - (Revisit) Displays an integer to standard output.
-   **ex03**: `ft_atoi` - Converts a string to an integer.
-   **ex04**: `ft_putnbr_base` - Displays a number in a given base.
-   **ex05**: `ft_atoi_base` - Converts a string to an integer using a given base.

## 🔧 Key Concepts

-   **ASCII to Integer Conversion**: Parsing numeric strings.
-   **Integer to String Conversion**: Generating string representations of numbers.
-   **Number Bases**: Binary, octal, decimal, hexadecimal, and custom bases.
-   **Numerical Systems**: Understanding place values in different bases.
-   **Sign Handling**: Correctly processing positive and negative numbers.
-   **Edge Cases**: Empty strings, invalid characters, base constraints.

## 📊 Difficulty Progression

```
Simple    →    Standard    →    Advanced    →    Expert
ex00-02        ex03            ex04           ex05
```

## 🚨 Important Notes

-   All exercises must adhere to the `norminette` coding standard.
-   Only allowed functions are typically `write` (for output) and basic arithmetic operations.
-   Pay close attention to base validity (e.g., no duplicate characters, no `+` or `-` in base).
-   Handle `INT_MIN` and `INT_MAX` for `atoi` and `putnbr` functions.

## 💡 Tips for Success

1.  **Understand Base Conversion Logic**: Practice manual conversions between bases.
2.  **Modularize**: Break down complex functions (like `putnbr_base`) into smaller helpers.
3.  **Test Edge Cases**: Especially for `atoi` and base conversions.
4.  **Recursion**: Can be useful for `putnbr_base`.
5.  **Character to Digit Mapping**: Convert characters ('0'-'9', 'a'-'f') to their numerical values.

---

**Status**: In Progress  
**Total Exercises**: 6 (ex00-ex05)  
**Estimated Time**: 1-2 days
