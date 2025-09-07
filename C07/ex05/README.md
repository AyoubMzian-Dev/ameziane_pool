# Exercise 05: ft_split

**Function:** `char **ft_split(char *str, char *charset);`

**Subject:** Write a function that splits a string `str` into an array of strings based on the characters in `charset`.

**Allowed functions:** `malloc`, `free`

**Key Points:**
-   Splits the input string into "words" using any character from `charset` as a delimiter.
-   Returns a dynamically allocated array of strings (`char **`).
-   Each "word" in the returned array is also dynamically allocated.
-   The last element of the returned array is `NULL`.
-   Returns `NULL` if `malloc` fails at any point.
-   The caller is responsible for `free`ing all allocated memory (each word string and the array of pointers).

## Concepts Covered

-   **Dynamic Memory Allocation**: Allocating memory for an array of pointers and for each individual word.
-   **Array of Strings**: Working with `char **` to represent multiple strings.
-   **String Parsing**: Iterating through a string to identify words and delimiters.
-   **Character Classification**: Identifying characters that act as separators.
-   **Memory Management**: Careful allocation and deallocation to prevent leaks.
-   **Error Handling**: Handling `malloc` failures during allocation.

## Solution Explanation

The `ft_split` function takes two arguments: `str` (the string to split) and `charset` (a string containing delimiter characters).

1.  **Count Words**: A helper function (`count_words`) first determines the number of words in `str` based on `charset`.
2.  **Allocate Result Array**: Memory is allocated for the `char **result` array, which will hold pointers to each word. An extra `NULL` pointer is allocated at the end.
3.  **Iterate and Copy Words**: The function then iterates through `str`:
    *   It skips over any delimiter characters.
    *   When a non-delimiter character is found, it marks the beginning of a word.
    *   A helper function (`get_word_len`) determines the length of the current word.
    *   Another helper function (`copy_word`) allocates memory for and copies the word.
    *   The pointer to the copied word is stored in the `result` array.
    *   If `copy_word` fails, all previously allocated memory is freed, and `NULL` is returned.
4.  **Null-Terminate Array**: After all words are processed, the last element of `result` is set to `NULL`.
5.  **Return Value**: The `result` array (`char **`) is returned.

This function provides a robust way to split a string into an array of dynamically allocated substrings.
