# Exercise 00: ft_ft

**Function:** `void ft_ft(int *nbr);`

**Subject:** Write a function that takes a pointer to an `int` as a parameter and sets the value pointed to to 42.

**Allowed functions:** None

**Key Points:**
-   Understanding pointer declaration and usage.
-   Using the dereference operator (`*`) to modify the value at a memory address.
-   Demonstrates "pass by reference" in C.

## Concepts Covered

-   **Pointers**: Understanding what a pointer is and how to declare it.
-   **Dereferencing**: Using the `*` operator to access the value stored at the memory address pointed to by a pointer.
-   **Pass by Reference**: How to modify a variable in the calling function by passing its address.

## Solution Explanation

The `ft_ft` function takes a single argument, `nbr`, which is a pointer to an integer (`int *`).

1.  **Dereferencing**: Inside the function, `*nbr` is used to dereference the pointer. This means we are accessing the memory location that `nbr` points to.
2.  **Assignment**: The value `42` is then assigned to this memory location using the assignment operator (`=`).

When this function is called, the `int` variable whose address was passed as `nbr` will have its value changed to 42.