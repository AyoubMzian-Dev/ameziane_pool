/* don't forget the headers hear */
int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0); // Power cannot be negative
    if (power == 0)
        return (1); // Any number to the power of 0 is 1

    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return (result);
}