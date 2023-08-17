#include "lists.h"

/**
 *delete_dnodeint_at_index - delete at a giving index
 *@head: pointer to the head
 *@index: index
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	prev_node = NULL;
	while (current != NULL)
	{
		if (i == index)
		{
			if (prev_node == NULL)
				*head = current->next;
				else
				prev_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev_node;
			free(current);
		return (1);
		}
		prev_node = current;
		current = current->next;
		i++;
	}
	return (-1);
}
