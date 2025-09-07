# Exercise 06: ft_is_prime

**Function:** `int ft_is_prime(int nb);`

**Subject:** Write a function that returns `1` if the number given as a parameter is a prime number, and `0` otherwise.

**Allowed functions:** None

**Key Points:**
-   A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
-   Handles edge cases: numbers less than or equal to 1 are not prime.
-   Optimizes the primality test by checking for divisors only up to the square root of `nb`.
-   Returns `0` immediately if a divisor is found, improving efficiency.

## Concepts Covered

-   **Prime Numbers**: Understanding the definition of a prime number.
-   **Divisibility**: Checking for factors.
-   **Optimization**: Improving efficiency by checking divisors only up to the square root of the number.
-   **Edge Cases**: Handling numbers less than or equal to 1.

## Solution Explanation

The `ft_is_prime` function takes a single integer argument, `nb`.

1.  **Edge Cases**:
    *   If `nb` is less than or equal to `1`, it is not prime, so the function returns `0`.
2.  **Iteration**: A `while` loop iterates, starting from `i = 2`. The loop continues as long as `i * i` is less than or equal to `nb`.
3.  **Divisibility Check**: In each iteration, it checks if `nb` is divisible by `i` (`nb % i == 0`).
    *   If `nb` is divisible by `i`, it means `nb` has a factor other than 1 and itself, so it's not prime, and the function returns `0`.
4.  **Advancement**: `i` is incremented in each step.
5.  **Prime**: If the loop completes without finding any divisors, it means `nb` is prime, and the function returns `1`.

This function efficiently determines if a given number is prime.