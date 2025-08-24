char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize_next)
				str[i] = str[i] - 32;
			capitalize_next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!capitalize_next)
				str[i] = str[i] + 32;
			capitalize_next = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capitalize_next = 0;
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
