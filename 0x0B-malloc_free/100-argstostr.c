#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arg into a string.
 * @ac: Number of command-line arguments.
 * @av: Array of command-line argument strings.
 *
 * Return: Pointer to the result, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int j, n, z = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			length++;
	}
	length += ac;
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
		{
			str[z] = av[j][n];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
