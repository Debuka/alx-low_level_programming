#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a
 * new node to a point inside a linked list.
 * @head: pointer to head of the list.
 * @idx: the point new node is added.
 * @n: new node.
 *
 * Return: pointer to the new node, or NULL if nothing.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *hptr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (k = 0; hptr && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = hptr->next;
			hptr->next = new;
			return (new);
		}
		else
			hptr = hptr->next;
	}

	return (NULL);
}
