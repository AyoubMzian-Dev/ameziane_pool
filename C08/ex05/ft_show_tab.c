

#include <unistd.h>
#include "ft_stock_str.h"

void	printf_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_nb(int nbr)
{
	char	c;

	if (nbr >= 10)
		print_nb(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		printf_str(par[i].str);
		write(1, "\n", 1);
		print_nb(par[i].size);
		write(1, "\n", 1);
		printf_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
