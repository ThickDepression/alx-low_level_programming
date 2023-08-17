#include "lists.h"
#include <stdlib.h>

/**
 * get_dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */
size_t get_dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 *insert_dnodeint_at_index - insert node at given index
 *@h: head of the list
 *@idx: the index
 *@n: data
 *Return:  the address of the new node
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
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == get_dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	current = *h;
	while (idx > 1 && current)
	{
		current = current->next;
		idx--;
	}
	if (idx > 1 || !current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

