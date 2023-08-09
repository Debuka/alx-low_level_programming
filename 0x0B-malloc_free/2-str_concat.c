#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into a new memory.
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, NULL on failure.
 */
char *_strdup(char *str)
{
	char *pt;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	pt = malloc(sizeof(char) * (i + 1));
	if (pt == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		pt[j] = str[j];
	return (pt);
}
