# C06 - Program Arguments (`argc`, `argv`)

## 📋 Module Overview

This module introduces how to interact with command-line arguments in C programs. It covers accessing the program name and its parameters, and performing basic manipulations like printing, reversing, and sorting them. This is crucial for building flexible and interactive command-line tools.

## 🎯 Learning Objectives

-   Understand the purpose and usage of `argc` and `argv`.
-   Access the program's name from `argv[0]`.
-   Iterate through and print command-line arguments.
-   Implement logic to reverse the order of arguments.
-   Apply sorting algorithms to command-line arguments.

## 📚 Exercises

### Mandatory Exercises

-   **ex00**: `ft_print_program_name` - Display the name of the program.
-   **ex01**: `ft_print_params` - Display all command-line arguments.
-   **ex02**: `ft_rev_params` - Display all command-line arguments in reverse order.
-   **ex03**: `ft_sort_params` - Display all command-line arguments sorted alphabetically.

## 🔧 Key Concepts

-   **`argc`**: Argument count (number of command-line arguments).
-   **`argv`**: Argument vector (array of strings representing arguments).
-   **Command-Line Interface (CLI)**: Interacting with programs via text commands.
-   **String Manipulation**: Working with strings from `argv`.
-   **Sorting Algorithms**: Applying sorting to an array of strings.

## 📊 Difficulty Progression

```
Simple    →    Moderate    →    Complex    →    Advanced
ex00-01        ex02            ex03
```

## 🚨 Important Notes

-   All exercises must adhere to the `norminette` coding standard.
-   Only allowed functions are typically `write` (for output) and basic arithmetic operations.
-   Remember that `argv[0]` is always the program's name.
-   Arguments are null-terminated strings.

## 💡 Tips for Success

1.  **Understand `main` signature**: Pay close attention to `int main(int argc, char *argv[])`.
2.  **Looping through `argv`**: Use `argc` to control the loop.
3.  **String comparison/sorting**: Reuse or adapt functions from previous modules if allowed.
4.  **Testing**: Test with various numbers of arguments, including none.

---

**Status**: In Progress  
**Total Exercises**: 4 (ex00-ex03)  
**Estimated Time**: 1 day
