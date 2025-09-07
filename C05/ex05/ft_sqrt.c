/* don't forget the headers hear */
int ft_sqrt(int nb)
{
    long i; // Use long to prevent overflow during i*i

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0); // Square root of 0 is 0

    i = 1;
    while (i * i <= nb) // Loop while i*i is less than or equal to nb
    {
        if (i * i == nb)
            return (i); // Found perfect square
        i++;
    }
    return (0); // Not a perfect square
}