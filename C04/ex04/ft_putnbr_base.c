/* don't forget the headers hear */
#include <unistd.h>

// Helper to check if base is valid
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2); // Base must have at least 2 unique characters
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	base_len = 0;
	if (!ft_check_base(base))
		return ;
	while (base[base_len])
		base_len++;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < base_len)
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_putnbr_base(nb / base_len, base);
		write(1, &base[nb % base_len], 1);
	}
}