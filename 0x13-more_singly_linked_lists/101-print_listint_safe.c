#include "lists.h"

/**
 *print_listint_safe - prints the list
 *@head: node
 *Return: returns num of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		if (head->n == '\0')
			exit(98);
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
