/* don't forget the headers hear */
#include <stdlib.h> // For malloc
#include <unistd.h> // For write (if ft_strlen is not allowed)

// Helper function to calculate string length (if not allowed to use ft_strlen from C01)
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Helper function to concatenate two strings (if not allowed to use ft_strcat from C03)
char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *result;
    int total_len;
    int i;

    if (size == 0)
    {
        result = (char *)malloc(sizeof(char));
        if (result == NULL)
            return (NULL);
        result[0] = '\0';
        return (result);
    }

    total_len = 0;
    i = 0;
    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
        i++;
    }
    total_len += ft_strlen(sep) * (size - 1); // Add separator lengths
    total_len += 1; // For null terminator

    result = (char *)malloc(sizeof(char) * total_len);
    if (result == NULL)
        return (NULL);

    result[0] = '\0'; // Initialize result as empty string
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i < size - 1)
            ft_strcat(result, sep);
        i++;
    }
    return (result);
}
