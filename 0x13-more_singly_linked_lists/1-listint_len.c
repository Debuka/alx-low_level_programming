#include "lists.h"

/**
 * listint_len - Function that returns
 * returns the number of elements in a linked lists
 * @h: Linked list of type listint_t.
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}

	return (k);
}
