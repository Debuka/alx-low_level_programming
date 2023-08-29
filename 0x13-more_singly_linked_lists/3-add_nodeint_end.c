#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node
 * to a linked list
 * @head: pointer that points
 * to the first element in the linked list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node(success),
 * or NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *n_n = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (n_n->next)
		n_n = temp->next;
	n_n->next = new;
	return (new);
}
