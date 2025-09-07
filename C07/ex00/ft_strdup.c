/* don't forget the headers hear */
#include <stdlib.h> // For malloc and free
#include <unistd.h> // For write (if ft_strlen is not allowed)

// Helper function to calculate string length (if not allowed to use ft_strlen from C01)
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    char *dest;
    int len;
    int i;

    len = ft_strlen(src);
    dest = (char *)malloc(sizeof(char) * (len + 1)); // +1 for null terminator
    if (dest == NULL)
        return (NULL); // Handle malloc failure

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the new string
    return (dest);
}
