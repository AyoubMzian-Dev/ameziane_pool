#include <unistd.h>
#include <stdlib.h>

// Function prototypes
int		parse_input(char *str, int *clues);
int		solve_grid(int grid[4][4], int *clues, int pos);
int		is_valid_placement(int grid[4][4], int row, int col, int num);
int		check_visibility_constraints(int grid[4][4], int *clues);
int		count_visible_left(int *row);
int		count_visible_right(int *row);
int		count_visible_top(int *col);
int		count_visible_bottom(int *col);
void	print_grid(int grid[4][4]);
void	print_error(void);
int		ft_strlen(char *str);
int		ft_isspace(char c);
int		ft_isdigit(char c);

// Main function
int main(int argc, char **argv)
{
	int grid[4][4];
	int *clues;
	int i, j;

	if (argc != 2)
	{
		print_error();
		return (1);
	}

	// Allocate memory for clues
	clues = malloc(16 * sizeof(int));
	if (!clues)
	{
		print_error();
		return (1);
	}

	// Initialize grid to 0
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	// Parse input
	if (!parse_input(argv[1], clues))
	{
		free(clues);
		print_error();
		return (1);
	}

	// Solve the puzzle
	if (solve_grid(grid, clues, 0))
	{
		print_grid(grid);
	}
	else
	{
		print_error();
	}

	free(clues);
	return (0);
}

// Parse input string into clues array
int parse_input(char *str, int *clues)
{
	int i = 0;
	int clue_count = 0;
	int num;

	while (str[i] && clue_count < 16)
	{
		// Skip spaces
		while (str[i] && ft_isspace(str[i]))
			i++;
		
		// Check if we have a digit
		if (!str[i] || !ft_isdigit(str[i]))
			break;
		
		// Convert character to integer
		num = str[i] - '0';
		
		// Validate range (1-4)
		if (num < 1 || num > 4)
			return (0);
		
		clues[clue_count] = num;
		clue_count++;
		i++;
		
		// Skip any remaining non-space characters (error case)
		while (str[i] && !ft_isspace(str[i]))
		{
			if (ft_isdigit(str[i]))
				return (0); // Multiple digits without space
			i++;
		}
	}

	// Check if we have exactly 16 clues and no more characters
	while (str[i] && ft_isspace(str[i]))
		i++;
	
	return (clue_count == 16 && !str[i]);
}

// Recursive backtracking solver
int solve_grid(int grid[4][4], int *clues, int pos)
{
	int row, col, num;

	if (pos == 16)
	{
		return (check_visibility_constraints(grid, clues));
	}

	row = pos / 4;
	col = pos % 4;

	num = 1;
	while (num <= 4)
	{
		if (is_valid_placement(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_grid(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

// Check if placing num at (row, col) violates Latin square constraint
int is_valid_placement(int grid[4][4], int row, int col, int num)
{
	int i;

	// Check row
	i = 0;
	while (i < 4)
	{
		if (i != col && grid[row][i] == num)
			return (0);
		i++;
	}

	// Check column
	i = 0;
	while (i < 4)
	{
		if (i != row && grid[i][col] == num)
			return (0);
		i++;
	}

	return (1);
}

// Check all visibility constraints
int check_visibility_constraints(int grid[4][4], int *clues)
{
	int i;
	int row[4], col[4];

	// Check all rows and columns
	i = 0;
	while (i < 4)
	{
		// Get row i
		int j = 0;
		while (j < 4)
		{
			row[j] = grid[i][j];
			j++;
		}

		// Check row visibility constraints
		if (count_visible_left(row) != clues[8 + i] ||
			count_visible_right(row) != clues[12 + i])
			return (0);

		// Get column i
		j = 0;
		while (j < 4)
		{
			col[j] = grid[j][i];
			j++;
		}

		// Check column visibility constraints
		if (count_visible_top(col) != clues[i] ||
			count_visible_bottom(col) != clues[4 + i])
			return (0);

		i++;
	}
	return (1);
}

// Count visible boxes from left
int count_visible_left(int *row)
{
	int visible = 0;
	int max_height = 0;
	int i = 0;

	while (i < 4)
	{
		if (row[i] > max_height)
		{
			visible++;
			max_height = row[i];
		}
		i++;
	}
	return (visible);
}

// Count visible boxes from right
int count_visible_right(int *row)
{
	int visible = 0;
	int max_height = 0;
	int i = 3;

	while (i >= 0)
	{
		if (row[i] > max_height)
		{
			visible++;
			max_height = row[i];
		}
		i--;
	}
	return (visible);
}

// Count visible boxes from top
int count_visible_top(int *col)
{
	return (count_visible_left(col));
}

// Count visible boxes from bottom
int count_visible_bottom(int *col)
{
	return (count_visible_right(col));
}

// Print the grid using only write
void print_grid(int grid[4][4])
{
	int i = 0, j;
	char c;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// Print error message
void print_error(void)
{
	write(1, "Error\n", 6);
}

// Helper functions (basic implementations without using standard library)
int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

int ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
