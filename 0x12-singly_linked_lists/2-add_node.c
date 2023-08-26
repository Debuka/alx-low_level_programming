#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node in the
 * beginning of a linked list
 * @head: double pointer pointing to the list_t list
 * @str: new string.
 *
 * Return: Address of the new
 * element (on success), or NULLon failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new_nd = malloc(sizeof(list_t));
	if (!new_nd)
		return (NULL);

	new_nd->str = strdup(str);
	new->lenght = lenght;
	new_nd->new_node = (*head);
	(*head) = new_nd;

	return (*head);
}
