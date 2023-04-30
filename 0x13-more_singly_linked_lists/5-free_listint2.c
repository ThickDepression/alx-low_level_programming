#include "lists.h"

/**
 *free_listint2 - function that frees
 *@head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *crnt, *temp;

	if (!head)
		return;
	crnt = *head;
	while (crnt)
	{
		temp = crnt->next;
		free(crnt);
		crnt = temp;
	}
	*head =  NULL;
}
