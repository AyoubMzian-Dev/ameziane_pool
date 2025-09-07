/* don't forget the headers hear */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

// easier way to make the exercise

void	ft_print_comb2_2(void)
{
	char	digits[5];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		digits[1] = digits[0];
		while (digits[1] <= '9')
		{
			digits[2] = ' ';
			digits[3] = digits[1] + 1;
			while (digits[3] <= '9')
			{
				digits[4] = '\0';
				write(1, digits, 5);
				if (!(digits[0] == '9' && digits[1] == '8'))
					write(1, ", ", 2);
				digits[3]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}