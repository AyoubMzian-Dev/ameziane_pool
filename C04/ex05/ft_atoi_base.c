/* don't forget the headers hear */
#include <unistd.h>

// Helper to check if base is valid (from ex04)
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

// Helper to get index of char in base
int	get_char_index(char c, char *base)
{
	int	i;

	i = 0;

	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1); // Not found
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	char_val;

	if (!ft_check_base(base))
		return (0);

	base_len = 0;

	while (base[base_len])
		base_len++;

	i = 0;
	sign = 1;
	result = 0;

	// Skip leading whitespace

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}

	// Handle signs

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	// Convert digits

	while ((char_val = get_char_index(str[i], base)) != -1)
	{
		result = result * base_len + char_val;
		i++;
	}
	return (result * sign);
	}

	// Simpler more advanced version
	int	ft_atoi_base_simple(char *str, char *base)
	{
		int		base_len;
		int		sign;
		long	result;
		int		char_val;

		base_len = 0;
		sign = 1;
		result = 0;
		if (!ft_check_base(base))
			return (0);
		while (*str)
		{
			if (*str == '-')
				sign *= -1;
			else if ((char_val = get_char_index(*str, base)) != -1)
			{
				result = result * base_len + char_val;
			}
			str++;
		}
		return (result * sign);
}