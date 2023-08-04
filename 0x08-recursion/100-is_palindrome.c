#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - Check if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: The start.
 * @end: The end.
 *
 * Return: 1 on success, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checking a palindrome.
 * @s: The string.
 *
 * Return: 1 on success, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
