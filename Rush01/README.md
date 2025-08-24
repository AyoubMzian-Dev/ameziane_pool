# Rush01: 4x4 Skyscraper Puzzle - Technical Analysis & Solution

## Problem Overview

Rush01 is a constraint satisfaction problem (CSP) known as the "Skyscraper Puzzle" or "Towers Puzzle". The goal is to fill a 4x4 grid with numbers 1-4 such that:

1. **Latin Square Constraint**: Each row and column contains exactly one instance of each number (1, 2, 3, 4)
2. **Visibility Constraint**: The number of "visible" boxes from each viewing direction matches given clue values

## Problem Specification

### Input Format
```
./rush01 "col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left row2left row3left row4left row1right row2right row3right row4right"
```

### Visibility Rules
- A box of height `h` is visible from a direction if no box of height ≥ `h` blocks it from that viewing angle
- Height 4 always blocks everything behind it
- Height 1 is always blocked by heights 2, 3, or 4

### Example Analysis
For the input `"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"`:
- `col1top = 4`: Looking down column 1, we see 4 boxes
- `row1left = 4`: Looking right across row 1, we see 4 boxes
- `row1right = 1`: Looking left across row 1, we see 1 box

Expected output:
```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

## Technical Solution Architecture

### 1. Data Structures

```c
typedef struct {
    int grid[4][4];           // The 4x4 solution grid
    int clues[16];           // Input constraints [top, bottom, left, right]
    int is_solved;           // Solution status flag
} puzzle_t;

typedef struct {
    int row;
    int col;
} position_t;
```

### 2. Constraint Parsing

```c
int parse_input(char *input, int *clues) {
    // Parse space-separated string into 16 integers
    // Validate each clue is between 1-4
    // Return error if format is invalid
}
```

### 3. Core Algorithm: Backtracking with Constraint Propagation

The solution uses a **recursive backtracking algorithm** with **early constraint checking**:

```c
int solve_puzzle(puzzle_t *puzzle, int cell_index) {
    if (cell_index == 16) {
        return validate_all_clues(puzzle);
    }
    
    int row = cell_index / 4;
    int col = cell_index % 4;
    
    for (int value = 1; value <= 4; value++) {
        if (is_valid_placement(puzzle, row, col, value)) {
            puzzle->grid[row][col] = value;
            
            // Early constraint checking for completed rows/columns
            if (should_validate_constraints(row, col)) {
                if (!validate_partial_constraints(puzzle, row, col)) {
                    puzzle->grid[row][col] = 0;
                    continue;
                }
            }
            
            if (solve_puzzle(puzzle, cell_index + 1)) {
                return 1;
            }
            
            puzzle->grid[row][col] = 0; // Backtrack
        }
    }
    return 0;
}
```

### 4. Constraint Validation Functions

#### Latin Square Validation
```c
int is_valid_placement(puzzle_t *puzzle, int row, int col, int value) {
    // Check row constraint
    for (int c = 0; c < 4; c++) {
        if (c != col && puzzle->grid[row][c] == value) {
            return 0;
        }
    }
    
    // Check column constraint  
    for (int r = 0; r < 4; r++) {
        if (r != row && puzzle->grid[r][col] == value) {
            return 0;
        }
    }
    
    return 1;
}
```

#### Visibility Constraint Validation
```c
int count_visible_from_left(int *row) {
    int visible = 0;
    int max_height = 0;
    
    for (int i = 0; i < 4; i++) {
        if (row[i] > max_height) {
            visible++;
            max_height = row[i];
        }
    }
    return visible;
}

int count_visible_from_right(int *row) {
    int visible = 0;
    int max_height = 0;
    
    for (int i = 3; i >= 0; i--) {
        if (row[i] > max_height) {
            visible++;
            max_height = row[i];
        }
    }
    return visible;
}

// Similar functions for top/bottom column visibility
```

### 5. Optimization Techniques

#### A. Constraint Propagation
- Validate constraints as soon as a row/column is complete
- Early termination if partial solution violates constraints

#### B. Heuristic Ordering
- **Most Constrained Variable (MCV)**: Process cells with fewer valid options first
- **Least Constraining Value (LCV)**: Try values that eliminate fewer options for other cells

```c
int get_constraint_score(puzzle_t *puzzle, int row, int col) {
    int score = 0;
    
    // Factor in row/column completion status
    if (is_row_nearly_complete(puzzle, row)) score += 10;
    if (is_column_nearly_complete(puzzle, col)) score += 10;
    
    // Factor in visibility constraint difficulty
    score += get_visibility_constraint_difficulty(puzzle, row, col);
    
    return score;
}
```

#### C. Clue Analysis Preprocessing
```c
void analyze_clues(int *clues, int *forced_positions) {
    // Clue = 4: First position must be height 1, last must be height 4
    // Clue = 1: First position must be height 4
    // Clue = 2 with opposite = 3: Specific height patterns emerge
}
```

### 6. Memory Management

```c
puzzle_t* create_puzzle(void) {
    puzzle_t *puzzle = malloc(sizeof(puzzle_t));
    if (!puzzle) return NULL;
    
    // Initialize grid to 0 (empty)
    memset(puzzle->grid, 0, sizeof(puzzle->grid));
    puzzle->is_solved = 0;
    
    return puzzle;
}

void free_puzzle(puzzle_t *puzzle) {
    if (puzzle) {
        free(puzzle);
    }
}
```

### 7. Error Handling Strategy

```c
typedef enum {
    SUCCESS = 0,
    ERROR_INVALID_INPUT,
    ERROR_NO_SOLUTION,
    ERROR_MEMORY_ALLOCATION
} result_code_t;

result_code_t validate_input(char *input) {
    if (!input) return ERROR_INVALID_INPUT;
    
    // Count tokens, validate format, check value ranges
    int token_count = count_tokens(input);
    if (token_count != 16) return ERROR_INVALID_INPUT;
    
    // Additional validation logic...
    
    return SUCCESS;
}
```

## Algorithm Complexity Analysis

### Time Complexity
- **Worst Case**: O(4^16) = O(4,294,967,296) - trying all combinations
- **Average Case**: O(4^k) where k < 16 due to constraint propagation
- **Best Case**: O(n) with strong constraint propagation

### Space Complexity
- **Grid Storage**: O(1) - fixed 4x4 grid
- **Recursion Stack**: O(16) - maximum 16 recursive calls
- **Total**: O(1) space complexity

## Advanced Optimizations

### 1. AC-3 Arc Consistency
Implement domain reduction based on constraints:

```c
typedef struct {
    int domain[4];      // Possible values for this cell
    int domain_size;    // Number of valid values
} cell_domain_t;

int reduce_domains(puzzle_t *puzzle, cell_domain_t domains[4][4]) {
    // Implement AC-3 algorithm for domain reduction
    // Remove values that cannot lead to valid solutions
}
```

### 2. Naked Singles/Hidden Singles
```c
int find_naked_singles(puzzle_t *puzzle) {
    // If a cell has only one possible value, assign it
    // If a value can only go in one cell in a row/column, assign it
}
```

## Implementation Checklist

- [ ] Input parsing with robust error handling
- [ ] Basic backtracking algorithm
- [ ] Latin square constraint validation
- [ ] Visibility constraint calculation
- [ ] Early constraint checking optimization
- [ ] Memory management (malloc/free)
- [ ] Error output ("Error\n")
- [ ] Proper output formatting with newlines
- [ ] Compilation with -Wall -Wextra -Werror
- [ ] Handle edge cases (no solution, multiple solutions)

## Testing Strategy

### Test Cases
1. **Basic Valid Input**: Known solvable puzzles
2. **No Solution Cases**: Impossible constraint combinations  
3. **Multiple Solution Cases**: Ensure first solution is returned
4. **Edge Cases**: All 1's, all 4's, mixed extreme values
5. **Invalid Input**: Wrong format, out-of-range values, missing parameters

### Validation Method
```bash
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
# Expected: Grid output with $ line endings

./rush01 "invalid input"
# Expected: Error$
```

This technical approach combines algorithmic efficiency with robust engineering practices, making it suitable for the educational goals of the 42 C Piscine while providing a solid foundation for understanding constraint satisfaction problems.