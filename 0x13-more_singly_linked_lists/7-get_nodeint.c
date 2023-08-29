#include "lists.h"

/**
 * get_nodeint_at_index - This funtion returns
 * the node at a certain index in a linked list
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer tonod or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *hptr = head;

	while (hptr && k < index)
	{
		hptr = hptr->next;
		k++;
	}

	return (hptr ? hptr : NULL);
}
