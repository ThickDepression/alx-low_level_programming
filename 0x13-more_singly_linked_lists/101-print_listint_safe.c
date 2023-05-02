#include "lists.h"

/**
 * print_listint_safe - prints the list.
 * @head: node
 * Return: the num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *loop_checker;
	size_t counter = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;
		loop_checker = head;
		while (loop_checker != current)
		{
			if (current->next == loop_checker)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (counter);
			}
			loop_checker = loop_checker->next;
		}
		current = current->next;
	}
	return (counter);
}

