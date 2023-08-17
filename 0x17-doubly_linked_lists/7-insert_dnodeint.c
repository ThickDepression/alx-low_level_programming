#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at given index
 *@h: head of the list
 *@idx: the index
 *@n: data
 *Return:  the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *node;

	if (!h)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (node);
	}
	temp = *h;
	while (idx != 0 && temp)
	{
		temp = temp->next;
		idx--;
	}
	if (idx != 0)
	{
		free(node);
		return (NULL);
	}
	if (!temp)
	{
		free(node);
		return (NULL);
	}
	temp2 = temp->prev;
	node->next = temp;
	node->prev = temp2;
	temp->prev = node;
	if (temp2)
		temp2->next = node;
	return (node);
}
