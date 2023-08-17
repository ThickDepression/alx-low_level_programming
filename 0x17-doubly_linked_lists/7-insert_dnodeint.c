#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at given index
 *@h: head of the list
 *@idx: the index
 *@n: data
 *Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
	if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (idx > 0 && current)
	{
		current = current->next;
		idx--;
	}
	if (idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	if (current->next)
		current->prev->next = new_node;
	else
		*h = new_node;
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev = new_node;
	return (new_node);
}

