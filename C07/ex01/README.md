# Exercise 01: ft_range

**Function:** `int *ft_range(int min, int max);`

**Subject:** Write a function that creates an array of integers from `min` to `max` (exclusive).

**Allowed functions:** `malloc`

**Key Points:**
-   Allocates memory dynamically for the array.
-   The array should contain integers from `min` up to, but not including, `max`.
-   Returns `NULL` if `min` is greater than or equal to `max` (invalid range).
-   Returns `NULL` if `malloc` fails.
-   The caller is responsible for `free`ing the returned array.

## Concepts Covered

-   **Dynamic Memory Allocation**: Using `malloc` to allocate memory for an array.
-   **Array Initialization**: Populating a dynamically allocated array.
-   **Range Handling**: Understanding inclusive and exclusive bounds.
-   **Error Handling**: Checking for invalid input and `malloc` failures.

## Solution Explanation

The `ft_range` function takes two integer arguments: `min` and `max`.

1.  **Invalid Range Check**: If `min` is greater than or equal to `max`, it indicates an invalid range, and the function returns `NULL`.
2.  **Calculate Size**: The number of elements needed in the array is `max - min`.
3.  **Allocate Memory**: Memory is allocated on the heap using `malloc` for an array of `int`s of the calculated size.
4.  **Handle `malloc` Failure**: If `malloc` returns `NULL`, the function immediately returns `NULL`.
5.  **Populate Array**: A `while` loop iterates, assigning values from `min` to `arr[i]` and incrementing both `min` and `i` until `min` reaches `max`.
6.  **Return Value**: A pointer to the newly created array (`arr`) is returned.

This function provides a way to dynamically create an array containing a sequence of integers.
