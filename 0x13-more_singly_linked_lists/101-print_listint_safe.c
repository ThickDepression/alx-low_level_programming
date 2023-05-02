#include "lists.h"

/**
 *print_listint_safe - prints the list
 *@head: node
 *Return: returns num of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *crnt = head;

	while (crnt != NULL)
	{
		printf("[%p] %d\n", (void *)crnt, crnt->n);
		count++;
		if (crnt <= crnt->next)
		{
			printf("-> [%p] %d\n", (void *)crnt->next, crnt->next->n);
			exit(98);
		}
		crnt = crnt->next;
	}
	return (count);
}
