#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all
 * the data (n) of a doubly linked list
 *
 * @head: The head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum;

	data_sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			data_sum += head->n;
			head = head->next;
		}
	}
	return (data_sum);
}
