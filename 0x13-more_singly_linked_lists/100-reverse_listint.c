#include "lists.h"

/**
 *reverse_listint - a function that reverses
 *@head: node
 *Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL, *crnt = *head;

	while (crnt != NULL)
	{
		*head = (*head)->next;
		crnt->next = prv;
		prv = crnt;
		crnt = *head;
	}
	*head = prv;
	return (*head);
}
