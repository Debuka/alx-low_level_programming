#include "lists.h"

/**
 * dlistint_len - Function that returns the
 * number of elements of a double linked list
 *
 * @h: The head of the list
 * Return: counts of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt_indx;
	
	cnt_indx = 0;
	if (h == NULL)
		return (cnt_indx);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		cnt_indx++;
		h = h->next;
	}
	return (cnt_indx);
}
