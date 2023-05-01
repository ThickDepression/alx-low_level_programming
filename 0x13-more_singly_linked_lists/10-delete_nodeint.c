#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node at index
 *@head: node
 *@index: index of the node
 *Return: returns 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int count;

	current = *head;
	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
