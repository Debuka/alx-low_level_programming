#include "lists.h"
#include <stdio.h>

/**
 * print_list - Funtion that  prints elements of a linked list
 * @h: pointer to the list_t list.
 *
 * Return: Nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%zu] %s\n", h->lenght, h->str);
		h = h->next;
		q++;
	}

	return (q);
}
