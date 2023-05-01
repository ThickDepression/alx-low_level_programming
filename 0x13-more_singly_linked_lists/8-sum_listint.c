#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the data (n)
 *@head: pointer to the node
 *Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	while (head)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
