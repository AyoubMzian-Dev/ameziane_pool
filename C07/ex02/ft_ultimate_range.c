/* don't forget the headers hear */
#include <stdlib.h> // For malloc

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    *range = (int *)malloc(sizeof(int) * (max - min));
    if (*range == NULL)
    {
        return (-1); // Indicate malloc failure
    }

    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (i); // Return the size of the range
}
