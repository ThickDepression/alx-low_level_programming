#include "lists.h"

/**
 *listint_len - a function that returns nbr of ele
 *@h: node
 *Return: returns the num of ele
 */

size_t listint_len(const listint_t *h)
{
	size_t n_link = 0;

	while (h)
	{
		h = h->next;
		n_link++;
	}
	return (n_link);
}
