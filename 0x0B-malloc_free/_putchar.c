#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes charactef to standard output.
 * @c: the character that will be printed.
 * Return: 1 on success.
 * -1 on error and errorno is set appriopriately.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
