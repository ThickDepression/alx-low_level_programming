#include "lists.h"

/**
 *add_dnodeint - adds a node at the beginning
 *@head: head of the list
 *@n: data of the node
 *Return: a pointer to the new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
