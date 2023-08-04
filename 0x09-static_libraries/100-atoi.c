#include "main.h"

/**
 * _atoi - Convert a string into an integer.
 * @s: The string to convert.
 *
 * Description:
 * The _atoi function takes a string 's' and converts it into an integer.
 * Skips leading non-digit characters, determines the sign of the num,
 * and converts the numeric characters into the integer value.
 * The function returns the resulting integer value.
 *
 * Return: The integer value from the string.
 */
int _atoi(char *s)
{
	int dth = 1, z = 0;
	unsigned int gtc = 0;

	while (!(s[z] <= '9' && s[z] >= '0') && s[z] != '\0')
	{
		if (s[z] == '-')
			dth *= -1;
		z++;
	}
	while (s[z] <= '9' && (s[z] >= '0' && s[z] != '\0'))
	{
		gtc = (gtc * 10) + (s[z] - '0');
		z++;
	}
	gtc *= dth;
	return (gtc);
}
