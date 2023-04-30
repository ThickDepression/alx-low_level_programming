#include "lists.h"

/**
 *get_nodeint_at_index - returns nth node
 *@index: is the index of the node
 *@head: node
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;


	while (node && count < index)
	{
		node = node->next;
		count++;
	}
	if (count != index || node == NULL)
		return (NULL);
	return (node);
}
