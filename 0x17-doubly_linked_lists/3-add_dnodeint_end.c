#include "lists.h"

/**
 *add_dnodeint_end - adds a nod at the end
 *@head: head of the list
 *@n: data
 *Return: a pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *end;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	if (!*head)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	end = *head;
	while (end->next)
		end = end->next;
	end->next = temp;
	temp->prev = end;
	return (*head);
}
