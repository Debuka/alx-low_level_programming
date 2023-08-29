#include "lists.h"

/**
 * pop_listint - Funtion that deletes the head node of a linked list
 * @head: A pointer to the first element in the list.
 *
 * Return: What's in the elements that was deleted
 * or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int k;

	if (!head || !*head)
		return (0);

	k = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;

	return (k);
}
