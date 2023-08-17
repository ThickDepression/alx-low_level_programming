#include "lists.h"

/**
 *get_dnodeint_at_index - that returns the nth node of a linked list.
 *@head: head of the list
 *@index: index of the node
 *Return: returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL);
}
