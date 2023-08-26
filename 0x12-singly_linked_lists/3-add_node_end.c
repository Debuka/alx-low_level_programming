#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds
 * new node at the end of a linked list.
 * @head: double pointer that points to the list_t list.
 * @str: string to be added to the list.
 *
 * Return: address of the new element(success) or NULL (failure).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd;
	list_t *temp = *head;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new_nd = malloc(sizeof(list_t));
	if (!new_nd)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->lenght = lenght;
	new_nd->new_node = NULL;

	if (*head == NULL)
	{
		*head = new_nd;
		return (new_nd);
	}

	while (temp->new_node)
		temp = temp->new_node;

	temp->next = new_nd;

	return (new_nd);
}
