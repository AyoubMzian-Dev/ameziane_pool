# Exercise 02: ft_ultimate_range

**Function:** `int ft_ultimate_range(int **range, int min, int max);`

**Subject:** Write a function that allocates and assigns an array of integers from `min` to `max` (exclusive) to `*range`. Returns the size of the allocated array, `0` if `min >= max`, and `-1` if `malloc` fails.

**Allowed functions:** `malloc`

**Key Points:**
-   Allocates memory dynamically for the array and assigns its address to the pointer pointed to by `range`.
-   Returns the number of elements in the array (`max - min`).
-   Returns `0` if `min` is greater than or equal to `max` (invalid range).
-   Returns `-1` if `malloc` fails, indicating a memory allocation error.
-   The caller is responsible for `free`ing the returned array (`*range`).

## Concepts Covered

-   **Dynamic Memory Allocation**: Using `malloc` to allocate memory for an array.
-   **Double Pointers**: Using `int **` to modify a pointer in the calling function.
-   **Array Initialization**: Populating a dynamically allocated array.
-   **Range Handling**: Understanding inclusive and exclusive bounds.
-   **Error Handling**: Checking for invalid input and `malloc` failures, returning specific error codes.

## Solution Explanation

The `ft_ultimate_range` function takes three arguments: `range` (a double pointer to an integer array), `min`, and `max`.

1.  **Invalid Range Check**: If `min` is greater than or equal to `max`, it indicates an invalid range. `*range` is set to `NULL`, and the function returns `0`.
2.  **Calculate Size**: The number of elements needed in the array is `max - min`.
3.  **Allocate Memory**: Memory is allocated on the heap using `malloc` for an array of `int`s of the calculated size. The address of this allocated memory is assigned to `*range`.
4.  **Handle `malloc` Failure**: If `malloc` returns `NULL`, the function immediately returns `-1`.
5.  **Populate Array**: A `while` loop iterates, assigning values from `min` to `(*range)[i]` and incrementing both `min` and `i` until `min` reaches `max`.
6.  **Return Value**: The final value of `i` (which represents the size of the array) is returned.

This function provides a robust way to dynamically create an array containing a sequence of integers, with clear error handling.
