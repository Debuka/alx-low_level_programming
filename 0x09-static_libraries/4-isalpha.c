#include "main.h"

/**
 * _isalpha - Checks if an input is an alphabeths
 * @c: the Character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
