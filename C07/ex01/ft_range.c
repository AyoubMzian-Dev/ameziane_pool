/* don't forget the headers hear */
#include <stdlib.h> // For malloc

int *ft_range(int min, int max)
{
    int *arr;
    int i;

    if (min >= max)
        return (NULL);

    arr = (int *)malloc(sizeof(int) * (max - min));
    if (arr == NULL)
        return (NULL);

    i = 0;
    while (min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }
    return (arr);
}
