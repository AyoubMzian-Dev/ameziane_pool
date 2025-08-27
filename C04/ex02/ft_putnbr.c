#include <unistd.h>
#include <limits.h>

void	ft_putchar(int num)
{
	char	str;
	
	str = num + '0';
	write(1, &str, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10);
}
