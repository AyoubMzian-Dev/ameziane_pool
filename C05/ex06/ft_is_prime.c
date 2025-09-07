/* don't forget the headers hear */
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while(i * i <= nb) // Optimized loop condition
	{
		if (nb % i == 0)
			return (0);
		i++; 
	}
	return (1);
}