#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function that
 * prints every element in a dlistint_t list.
 * @h: pointer which points
 * to the head of the list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int  cnt_indx;

	cnt_indx = 0;
	if (h == NULL)
		return (cnt_indx);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt_indx++;
		h = h->next;
	}
	return (cnt_indx);
}
