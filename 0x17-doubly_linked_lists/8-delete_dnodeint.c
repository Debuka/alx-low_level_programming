#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes
 * the node at index of linked list
 *
 * @head: The head of the list.
 * @index: index of the new node.
 * Return: 1 if it succeeded, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int itr;

	head1 = *head;
	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	itr = 0;
	while (head1 != NULL)
	{
		if (itr == index)
		{
			if (itr == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;
				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		itr++;
	}
	return (-1);
}
