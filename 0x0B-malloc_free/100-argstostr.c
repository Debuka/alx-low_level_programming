#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a single string.
 * @ac: Number of command-line arguments.
 * @av: Array of command-line argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL on failure or invalid inputs.
 */
char *argstostr(int ac, char **av)
{
    int it, a, z = 0, k = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (it = 0; it < ac; it++)
    {
        for (a = 0; av[it][a]; a++)
            k++;
    }
    k += ac; // To account for the newlines

    str = malloc(sizeof(char) * (k + 1)); // +1 for the null-terminator
    if (str == NULL)
        return (NULL);

    for (it = 0; it < ac; it++)
    {
        for (a = 0; av[it][a]; a++)
        {
            str[z] = av[it][a];
            z++;
        }
        if (str[z] == '\0')
        {
            str[z++] = '\n';
        }
    }
    return (str);
}
