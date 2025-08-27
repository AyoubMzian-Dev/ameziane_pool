#include <unistd.h>
#include <stdio.h>

// This function is still not correct for multi-digit numbers
void	print_nbr(int nb)
{
	char	str = nb + '0';
	
	write(1, &str, 1);
}

int
ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while(str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (num > 0)
				return (num * sign);
			i++;
			continue;
		}
		else if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
		{
			if (str[i] == '-')
				sign = sign * -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		else
			return (num * sign);
		i++;
	}
	return (num * sign);
}

/*int main(void)
{
    printf("Test [18] (Expected 12): %d\n", ft_atoi("12 4"));
    printf("Test [19] (Expected 12): %d\n", ft_atoi("  +12 4"));
    printf("--------------------------\n");
    printf("Testing with \"42\": %d\n", ft_atoi("42"));
    printf("Testing with \"-42\": %d\n", ft_atoi("-42"));
    printf("Testing with \"   +42\": %d\n", ft_atoi("   +42"));
    printf("Testing with \"  --42\": %d\n", ft_atoi("  --42"));
    printf("Testing with \"42abc55\": %d\n", ft_atoi("42abc55"));
    printf("Testing with \"0\": %d\n", ft_atoi("0"));
    printf("Testing with an empty string \"\": %d\n", ft_atoi(""));
    printf("Testing with \"  \t\n\": %d\n", ft_atoi("  \t\n"));
    printf("Testing with \"1-2\": %d\n", ft_atoi("1-2"));

    return (0);
}*/
