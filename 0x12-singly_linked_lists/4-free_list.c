#include "lists.h"

/**
 *free_list - a function that frees the list
 *@head: element of the list
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
	}
}
