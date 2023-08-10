#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dm;
	int lent, i = 0;
       
	if (str == NULL)
		return (NULL);
	lent = 0;
	while (str[lent] != '\0')
		lent++;
	dm = malloc(sizeof(char) * (lent + 1));
	if (dm == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dm[i] = str[i];
	return (dm);
}
