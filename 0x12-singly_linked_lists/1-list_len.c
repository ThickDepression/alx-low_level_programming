#include "lists.h"

/**
 *list_len - a function that returns the number of elements
 *@h : node
 *Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
