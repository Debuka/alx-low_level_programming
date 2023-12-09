#include "lists.h"

/**
 * free_dlistint - Function that
 * frees a dlistint_t list.
 * @head: pointer that points to the
 * head of the list
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
