#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (!*str)
	{
		write(1, "error: invalid input", 20);
	}
	i = 0;
	while(str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
