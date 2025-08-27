
void	print_nbr(int nb)
{
	char	str = nb + '0';
	
	write(1, &str, 1);
}

void	ft_atio(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		else if (str[i] == '+')
		{
			sign = sign * 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = num + (str[i] - '0');
		}
		else if (str[i] < '0' || str[i] > '9')
		{
			return (num * sign);
	return (num * sign);
}
