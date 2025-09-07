/* don't forget the headers hear */
#include <unistd.h>

void	print_comb(int *comb, int n)
{
	int		i;
	char	digit;

	i = 0;
	while (i < n)
	{
		digit = comb[i] + '0';
		write(1, &digit, 1);
		i++;
	}
}

int	is_last_combination(int n, int *comb)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (comb[i] != 10 - n + i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	generate_combn(int n, int *comb, int index, int start_digit)
{
	int		i;

	if (index == n)
	{
		print_comb(comb, n);
		if (!is_last_combination(n, comb))
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = start_digit;
	while (i <= 9)
	{
		comb[index] = i;
		generate_combn(n, comb, index + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	generate_combn(n, comb, 0, 0);
}
