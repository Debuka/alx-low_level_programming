/**
 * _memset - Fill a block of memory with a specified value.
 * @s: pointer to the address of memory to be filled.
 * @b: The desired value to be set.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the updated memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
