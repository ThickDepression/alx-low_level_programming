#include "lists.h"

/**
 *free_listint_safe - a function that frees lists
 *@h: node
 *Return: the size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;
	int is_not_same_addr;

	if (h == NULL || !*h)
		return (0);
	while (*h)
	{
		is_not_same_addr = *h - (*h)->next;
		if (is_not_same_addr > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
