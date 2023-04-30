#include "lists.h"

/**
 *pop_listint -  function that deletes the head node
 *@head: head node
 *Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head)
		return (0);
	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);
	return (num);
}
