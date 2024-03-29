#include "lists.h"

/**
 * add_nodeint - Function that adds new nodes at
 * the start of a linked list.
 * @head: pointer that points to the first node of the list
 * @n: Content of the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
