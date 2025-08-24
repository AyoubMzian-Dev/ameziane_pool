#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_solution(int *board)
{
    int i;

    i = 0;
    while (i < 10)
    {
        ft_putchar(board[i] + '0');
        i++;
    }
    ft_putchar('\n');
}

int is_safe(int col, int row, int *board)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (board[i] == row || board[i] - i == row - col || board[i] + i == row + col)
            return (0);
        i++;
    }
    return (1);
}

void solve(int col, int *board, int *count)
{
    int row;

    row = 0;
    if (col == 10)
    {
        ft_print_solution(board);
        (*count)++;
        return;
    }
    while (row < 10)
    {
        if (is_safe(col, row, board))
        {
            board[col] = row;
            solve(col + 1, board, count);
        }
        row++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int board[10];
    int count;
    int i;

    i = 0;
    while (i < 10)
    {
        board[i] = 0;
        i++;
    }
    count = 0;
    solve(0, board, &count);
    return (count);
}

