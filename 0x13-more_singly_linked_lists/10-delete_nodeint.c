#include "lists.h"

/**
 * delete_nodeint_at_index - Function that
 * deletes node in a linked list.
 * @head: head of the list
 * @index: index of the node to deleted.
 *
 * Return: 1 on Success, or -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hptr = *head;
	unsigned int k = 0;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hptr);
		return (1);
	}

	while (k < index - 1)
	{
		if (!hptr || !(hptr->next))
			return (-1);
		hptr = hptr->next;
		k++;
	}


	tmp = hptr->next;
	hptr->next = tmp->next;
	free(tmp);

	return (1);
}
