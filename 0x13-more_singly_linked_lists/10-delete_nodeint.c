#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node at index
 *@head: node
 *@index: index of the node
 *Return: returns 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int count;

	current = *head;
	previous = NULL;
	for (count = 0; !current && count < index; count++)
	{
		previous = current;
		current = current->next;
	}
	if (!current)
	{
		return (-1);
	}
	if (!previous)
		*head = current->next;
	else
		previous->next = current->next;
	free(current);
	return (1);
}
