/* don't forget the headers hear */
#include <unistd.h>

void	print_three_digits(char d1, char d2, char d3, int is_last)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (!is_last)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int		is_last;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				is_last = (a == '7' && b == '8' && c == '9');
				print_three_digits(a, b, c, is_last);
				c++;
			}
			b++;
		}
		a++;
	}
}

// easier way to make the exercise

void	ft_print_comb_2(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				print_three_digits(digits[0], digits[1], digits[2],
					(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'));
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}