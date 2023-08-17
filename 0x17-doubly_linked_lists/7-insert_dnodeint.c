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

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = node;
	temp2->prev = node;
	node->next = temp2;
	node->prev = temp;
	return (*h);
}
