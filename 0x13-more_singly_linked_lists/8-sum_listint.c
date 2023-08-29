#include "lists.h"

/**
 * sum_listint - Function that calculates the
 * sum the args in a listint_t list.
 * @head: head of the list
 *
 * Return: Sum of data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hptr = head;

	while (hptr)
	{
		sum += hptr->n;
		hptr = hptr->next;
	}

	return (sum);
}
