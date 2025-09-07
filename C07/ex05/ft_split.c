/* don't forget the headers hear */
#include <stdlib.h> // For malloc, free

// Helper to check if char is in charset
int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// Helper to count words
int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

// Helper to get word length
int	get_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && !is_charset(str[len], charset))
		len++;
	return (len);
}

// Helper to copy word
char	*copy_word(char *src, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL); // Handle malloc failure
	i = 0;
	while (i < len)
	{
		word[i] = src[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str, char *charset)
{
    char    **result;
    int     num_words;
    int     i;
    int     j;
    int     word_len;

    num_words = count_words(str, charset);
    result = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (result == NULL)
        return (NULL);

    i = 0; // index for str
    j = 0; // index for result array
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            word_len = get_word_len(&str[i], charset);
            result[j] = copy_word(&str[i], word_len);
            if (result[j] == NULL)
            {
                // Free previously allocated memory before returning NULL
                while (j > 0)
                {
                    j--;
                    free(result[j]);
                }
                free(result);
                return (NULL);
            }
            j++;
            i += word_len;
        }
    }
    result[j] = NULL; // Null-terminate the array of strings
    return (result);
}
