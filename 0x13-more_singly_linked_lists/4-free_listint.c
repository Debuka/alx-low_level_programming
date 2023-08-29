#include "lists.h"

/**
 * free_listint - Funtion that frees listint_t linked list.
 * @head: listint_t list that will be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *n_node;

	while (head)
	{
		n_node = head->next;
		free(head);
		head = n_node;
	}
}
