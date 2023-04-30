#include "lists.h"

/**
 *print_listint - a function that prints elemnts of a list
 *@h: node passed
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		if (h->n == '\0')
			return (1);
		printf("%d\n", h->n);
		h = h->next;
		n_node++;
	}
	return (n_node);
}
