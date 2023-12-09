#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node that will be searched for.
 * Return: nth node or null.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int z;
	dlistint_t *tmp;

	z = 0;
	if (head == NULL)
	return (NULL);
	tmp = head;
	while (tmp)
	{
	if (index == z)
	return (tmp);
	z++;
	tmp = tmp->next;
	}
	return (NULL);
}
