#include "lists.h"

/**
 * add_nodeint_end - Function that adds a
 * node at the end of a listint_t linked list
 * @head: Pointer that points to the first element of the list
 * @n: The new element
 *
 * Return: pointer to the new node on success or NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

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

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
