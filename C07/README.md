# C07 - Dynamic Memory Allocation and Advanced Manipulation

## 📋 Module Overview

This module introduces dynamic memory allocation in C using `malloc` and `free`, which is crucial for handling data of variable sizes. It also covers more complex string and array manipulation tasks that often require dynamic memory.

## 🎯 Learning Objectives

-   Understand the concepts of heap memory and dynamic allocation.
-   Properly allocate and deallocate memory using `malloc` and `free`.
-   Implement functions that return dynamically allocated memory.
-   Handle memory errors (e.g., `malloc` returning `NULL`).
-   Develop advanced string manipulation functions (e.g., join, split).
-   Implement number base conversion for strings.

## 📚 Exercises

### Mandatory Exercises

-   **ex00**: `ft_strdup` - Duplicate a string using dynamic memory allocation.
-   **ex01**: `ft_range` - Create an array of integers within a specified range.
-   **ex02**: `ft_ultimate_range` - Create an array of integers within a range, returning the size.
-   **ex03**: `ft_strjoin` - Concatenate an array of strings into a single, dynamically allocated string.
-   **ex04**: `ft_convert_base` - Convert a number from one base to another.
-   **ex05**: `ft_split` - Split a string into an array of strings based on a set of delimiters.

## 🔧 Key Concepts

-   **Dynamic Memory Allocation**: `malloc`, `free`, `sizeof`.
-   **Heap vs. Stack**: Understanding memory regions.
-   **Memory Leaks**: Preventing unreleased allocated memory.
-   **Pointer Arithmetic**: Advanced usage with dynamically allocated blocks.
-   **String Manipulation**: Duplication, joining, splitting.
-   **Number Base Conversion**: Advanced implementation for string input/output.

## 📊 Difficulty Progression

```
Simple    →    Moderate    →    Complex    →    Advanced
ex00-02        ex03            ex04           ex05
```

## 🚨 Important Notes

-   All exercises must adhere to the `norminette` coding standard.
-   Only allowed functions are typically `malloc`, `free`, and `write` (for output).
-   Always check the return value of `malloc` for `NULL`.
-   Ensure all dynamically allocated memory is `free`d to prevent leaks.

## 💡 Tips for Success

1.  **Memory Management**: Plan your `malloc` and `free` calls carefully.
2.  **Error Handling**: Always consider what happens if `malloc` fails.
3.  **Helper Functions**: Break down complex tasks (like `ft_split` or `ft_convert_base`) into smaller, manageable functions.
4.  **Test Thoroughly**: Especially for memory leaks and edge cases (empty strings, zero size).
5.  **Base Conversion**: Reuse logic from `C04` for `ft_convert_base`.

---

**Status**: In Progress  
**Total Exercises**: 6 (ex00-ex05)  
**Estimated Time**: 2-3 days
