#include "lists.h"

/**
 *sum_dlistint - sums all the data n
 *@head: head of the list
 *Return: the sum of all the data (n
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
