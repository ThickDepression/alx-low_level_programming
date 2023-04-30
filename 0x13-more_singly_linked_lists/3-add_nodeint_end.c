#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node at the end
 *@head: node
 *@n: num
 *Return: add_nodeint_end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *crnt_node;
	listint_t *l_node = malloc(sizeof(listint_t));

	if (!l_node)
		return (NULL);

	l_node->n = n;
	l_node->next = NULL;
	if (!*head)
		*head = l_node;
	else
	{
		crnt_node = *head;
		while (crnt_node->next)
			crnt_node = crnt_node->next;
		crnt_node->next = l_node;
	}
	return (l_node);
}
