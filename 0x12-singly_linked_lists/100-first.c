#include <stdio.h>

void print_funct(void) __attribute__ ((constructor));

/**
 * print_funct - prints a
 * sentence before main function executes.
 * Return: nothing.
 */
void print_funct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
