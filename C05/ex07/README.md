# Exercise 07: ft_find_next_prime

**Function:** `int ft_find_next_prime(int nb);`

**Subject:** Write a function that returns the smallest prime number greater than or equal to the number given as a parameter.

**Allowed functions:** None (assumes `ft_is_prime` is implemented locally or provided)

**Key Points:**
-   Utilizes a primality test function (like `ft_is_prime`) to check numbers.
-   Starts checking from the input `nb` and increments until a prime number is found.
-   Handles edge cases for small numbers (e.g., `nb <= 1` returns `2`).
-   The loop continues indefinitely until a prime is identified, guaranteeing a result.

## Concepts Covered

-   **Prime Numbers**: Understanding the definition and properties of prime numbers.
-   **Primality Test**: Reusing or implementing logic to check if a number is prime.
-   **Iteration**: Incrementing a number and testing for primality until a prime is found.
-   **Edge Cases**: Handling small numbers (e.g., 0, 1, 2).

## Solution Explanation

The `ft_find_next_prime` function takes a single integer argument, `nb`.

1.  **Edge Cases**:
    *   If `nb` is less than or equal to `1`, the smallest prime number greater than or equal to it is `2`, so the function returns `2`.
2.  **Iteration**: The function enters an infinite `while` loop.
3.  **Primality Test**: Inside the loop, it calls a helper function (`ft_is_prime`) to check if the current `nb` is prime.
    *   If `nb` is prime, it is returned.
    *   If `nb` is not prime, `nb` is incremented, and the loop continues.

This function efficiently determines if a given number is prime.