
#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strdu(char *src)
{
	char	*up;
	int		length;
	int		i;

	length = len(src);
	up = (char *)malloc(sizeof(char) * (length + 1));
	if (!up)
		return (NULL);
	i = 0;
	while (src[i])
	{
		up[i] = src[i];
		i++;
	}
	up[i] = '\0';
	return (up);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*temp;
	int			i;

	temp = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (!temp)
		return (NULL);
	while (i < ac)
	{
		temp[i].size = len(av[i]);
		temp[i].str = av[i];
		temp[i].copy = strdu(av[i]);
		if (!temp[i].copy)
		{
			while (--i >= 0)
				free(temp[i].copy);
			free(temp);
			return (NULL);
		}
		i++;
	}
	temp[i].size = 0;
	temp[i].str = 0;
	temp[i].copy = 0;
	return (temp);
}
