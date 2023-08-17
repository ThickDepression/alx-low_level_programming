#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list.
 *@head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
