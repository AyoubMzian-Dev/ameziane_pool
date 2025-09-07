/* don't forget the headers hear */
#include <stdlib.h> // For malloc

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
	return (i >= 2);
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
	return (-1);
}

// Helper to convert string to int from base
long	ft_atoi_base_local(char *str, char *base)
{
	int	i;
	int	sign;
	long	result;
	int	base_len;
	int	char_val;

	base_len = 0;

	while (base[base_len])
		base_len++;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while ((char_val = get_char_index(str[i], base)) != -1)
	{
		result = result * base_len + char_val;
		i++;
	}
	return (result * sign);
}

// Helper to get length of number in new base
int	get_nbr_len_in_base(long nbr, int base_len)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}

	while (nbr > 0)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

// Helper to convert int to string in base
void	ft_putnbr_base_to_str(long nbr, char *base, char *result_str, int *idx)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;

	if (nbr < 0)
	{
		result_str[*idx] = '-';
		(*idx)++;
		nbr = -nbr;
	}

	if (nbr < base_len)
	{
		result_str[*idx] = base[nbr];
		(*idx)++;
	}
	else
	{
		ft_putnbr_base_to_str(nbr / base_len, base, result_str, idx);
		result_str[*idx] = base[nbr % base_len];
		(*idx)++;
	}
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    long    decimal_nbr;
    char    *result_str;
    int     result_len;
    int     base_to_len;
    int     idx;

    if (!ft_check_base(base_from) || !ft_check_base(base_to))
        return (NULL);

    base_to_len = 0;
    while (base_to[base_to_len])
        base_to_len++;

    decimal_nbr = ft_atoi_base_local(nbr, base_from);

    if (decimal_nbr == 0)
    {
        result_str = (char *)malloc(sizeof(char) * 2);
        if (result_str == NULL)
            return (NULL);
        result_str[0] = base_to[0];
        result_str[1] = '\0';
        return (result_str);
    }

    result_len = get_nbr_len_in_base(decimal_nbr, base_to_len);
    result_str = (char *)malloc(sizeof(char) * (result_len + 1));
    if (result_str == NULL)
        return (NULL);

    idx = 0;
    ft_putnbr_base_to_str(decimal_nbr, base_to, result_str, &idx);
    result_str[idx] = '\0';

    return (result_str);
}
