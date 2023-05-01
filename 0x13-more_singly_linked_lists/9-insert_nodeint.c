#include "lists.h"

/**
 *insert_nodeint_at_index - a fnct that inserts a node at nth pstn
 *@head: pointer to the node
 *@idx: index of the list where the new node should be added
 *@n: number
 *Return: returns node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *temp;
	listint_t *idx_node = malloc(sizeof(listint_t));

	if (!idx_node)
		return (NULL);
	idx_node->n = n;
	idx_node->next = NULL;
	if (idx == 0)
	{
	idx_node->next = *head;
	*head = idx_node;
	return (idx_node);
	}
	temp = *head;
	while (temp && position < idx - 1)
	{
		temp = temp->next;
		position++;
	}
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	idx_node->next = temp->next;
	temp->next = idx_node;
	return (idx_node);
}
