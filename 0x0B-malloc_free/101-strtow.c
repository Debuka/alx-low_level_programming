#include <stdlib.h>
#include "main.h"

/**
 * count_word - Counts the words of a string.
 * @s: The string to evaluate.
 *
 * Return: Number of words.
 */
int count_word(char *s)
{
	int flag, q, z;
	flag = 0;
	z = 0;
	for (q = 0; s[q] != '\0'; q++)
    {
	    if (s[q] == ' ')
		    flag = 0;
	    else if (flag == 0)
        {
		flag = 1;
		z++;
        }
    }
	return (z);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
    char **mtx, *tmp;
    int i, k = 0, lenght = 0, wcount, q = 0, start, end;

    while (*(str + lenght))
        lenght++;
    wcount = count_word(str);
    if (wcount == 0)
        return (NULL);

    mtx = (char **)malloc(sizeof(char *) * (wcount + 1));
    if (mtx == NULL)
        return (NULL);

    for (i = 0; i <= lenght; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (q)
            {
                end = i;
                tmp = (char *)malloc(sizeof(char) * (q + 1));
                if (tmp == NULL)
                    return (NULL);
                while (start < end)
                    *tmp++ = str[start++];
                *tmp = '\0';
                mtx[k] = tmp - q;
                k++;
                q = 0;
            }
        }
        else if (q++ == 0)
            start = i;
    }

    mtx[k] = NULL;

    return (mtx);
}
