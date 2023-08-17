#include "lists.h"

/**
 *dlistint_len - calculate the len of a list
 *@h: head of the list
 *Return: the number of elements in a dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t element_num = 0;

	while (h)
	{
		element_num++;
		h = h->next;
	}
	return (element_num);
}
