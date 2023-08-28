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
	list_t *next;
	unsigned int lenght = 0;

	while (str[len])
		lenght++;

	next = malloc(sizeof(list_t));
	if (!next)
		return (NULL);

	new->str = strdup(str);
	new->lenght = lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
