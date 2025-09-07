# Exercise 08: ft_ten_queens_puzzle

**Function:** `int ft_ten_queens_puzzle(void);`

**Subject (short):** Place 10 queens on a 10×10 board so none attack each other. Print every valid placement and return the number of solutions.

**Allowed functions:** `write` (via `ft_putchar` helper)

**Quick idea:** Try placing one queen per column. If a placement conflicts, undo it and try the next row. This is called backtracking.

## Concepts Covered (brief)

- N-Queens rules and constraints.
- Backtracking: try, recurse, undo (when needed).
- Recursion and simple board representation (one array of 10 ints).
- Conflict checks for row and diagonals.
- Counting and printing solutions.

## Solution Explanation

The `ft_ten_queens_puzzle` function solves the N-Queens puzzle for a 10x10 board.

1.  **Board Representation**: The chessboard can be represented by a 1D array (e.g., `board[10]`), where `board[col]` stores the row of the queen in that column.
2.  **`is_safe` Function**: A helper function `is_safe(col, row, board)` checks if placing a queen at `(col, row)` is valid. It verifies that no other queen (in previous columns) attacks the current position (same row, same diagonal).
3.  **`solve` Function (Recursive Backtracking)**:
    - **Base Case**: If `col` reaches `10` (all columns are filled), a valid solution has been found. The solution is printed, and the solution count is incremented.
    - **Recursive Step**: For the current `col`, iterate through all possible `row`s (0 to 9).
      - If `is_safe` returns true for `(col, row)`, place the queen (`board[col] = row`).
      - Recursively call `solve` for the next column (`col + 1`).
      - (Implicit Backtracking): If the recursive call returns, the current queen's position is "un-chosen" as the loop continues to try other rows.
4.  **Main Function**: `ft_ten_queens_puzzle` initializes the board and calls the `solve` function starting from `col = 0`. It returns the total count of solutions.

This exercise is mainly about thinking in terms of constraints and using recursion to explore valid configurations efficiently.
