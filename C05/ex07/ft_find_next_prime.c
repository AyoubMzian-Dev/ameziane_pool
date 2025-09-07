// don't forget the headers hear

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while(i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++; 
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 1)
        return (2); // Smallest prime is 2

    while (1) // Loop indefinitely until a prime is found
    {
        if (ft_is_prime(nb))
            return (nb);
        nb++;
    }
}