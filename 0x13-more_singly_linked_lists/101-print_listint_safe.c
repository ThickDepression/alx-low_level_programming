#include "lists.h"

/**
 * print_listint_safe - prints the list.
 * @head: node
 * Return: the num of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int counter = 0;
	const listint_t *current = head;
	const listint_t *loop_checker[1024] = {NULL};
	int i;

	while (current != NULL)
	{
		for (i = 0; i <= counter; i++)
		{
			if (loop_checker[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (counter);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		loop_checker[counter] = current;
		counter++;
		current = current->next;
	}
	return (counter);
}
