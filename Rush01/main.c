#include <unistd.h>
#include <stdlib.h>

#define size 4

void print_error_message(void)
{
    write(1, "Error: Invalid input. Please try again.\n", 40);
}

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}

int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}
// input check and fill clues array
int input_check(char *str, int *clues)
{
    int i = 0;
    int count = 0;
    int num;

    while (str[i] && count < (size * size))
    {
        while (str[i] && ft_isspace(str[i]))
            i++;

        if (!str[i] || !ft_isdigit(str[i]))
            return 0;

        if (str[i + 1] && ft_isdigit(str[i + 1]))
            return (0);

        num = str[i] - '0';
        if (num < 1 || num > 4)
            return (0);

        clues[count] = num;
        clues++;
        i++;
    }
    while (str[i] && ft_isspace(str[i]))
    {
        i++;
    }

    return ((count == size * size) && !str[i]);
}

int is_repeated(int* grid, int posi[2])
{
    int row = posi[0];
    int col = posi[1];
    int i = 0;

    // Check row
    while (i < size)
    {
        if (i != col && grid[row * size + i] == grid[row * size + col])
            return 1;
        i++;
    }
    i = 0;
    // Check column
    while (i < size)
    {
        if (i != row && grid[i * size + col] == grid[row * size + col])
            return 1;
        i++;
    }
    return 0;
}

int is_visible(int clsuenum, int row, int col)
{
}

int is_visible_row(int* grid, int row, int clue)
{
    int max = 0;
    int visible = 0;
    int col = 0;

    while (col < size)
    {
        if (grid[row * size + col] > max)
        {
            max = grid[row * size + col];
            visible++;
        }
        col++;
    }
    return (visible == clue);
}

int solve_alg(int *grid, int *clues)
{
    int pos;
    int row;
    int col;
    int num;
    int posi[2];

    pos = 0;
    while (pos < size * size)
    {
        row = pos / size;
        col = pos % size;
        if (grid[row * size + col] == 0)
        {
            num = 1;
            while (num <= size)
            {
                grid[row * size + col] = num;
                posi[0] = row;
                posi[1] = col;
                if (!is_repeated(grid, posi) && is_visible(clues, row, col))
                {
                    if (solve_alg(grid, clues))
                        return 1;
                }
                grid[row * size + col] = 0;
                num++;
            }
            return 0;
        }
        pos++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    int grid[size][size];
    int *clues;
    int i;
    int j;

    if (argc != 2)
    {
        print_error_message();
        return (1);
    }
    clues = malloc(size * size * 4);
    // checking malloc result
    if (!clues)
    {
        print_error_message();
        return (1);
    }
    i = 0;
    // Fill grid with_0
    while (i < size)
    {
        j = 0;
        while (i < size)
        {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
    if (!input_check(argv[1], clues))
    {
        free(clues);
        print_error_message();
        return (1);
    }
}