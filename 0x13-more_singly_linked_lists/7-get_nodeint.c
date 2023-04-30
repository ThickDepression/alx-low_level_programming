#include "lists.h"

/**
 *node_counter - count nodes obv
 *@head: node
 *Return: count
 */
int node_counter(listint_t *head)
{
	int counter = 0;

	while (head)
	{
		head = head->next;
		counter++;
	}
	return (counter);
}

/**
 *get_nodeint_at_index - returns nth node
 *@index: is the index of the node
 *@head: node
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int ind = index;
	int max = node_counter(head);
	int count = 0;

	if (ind < 0 || ind > max)
		return (NULL);
	while (head)
	{
		head = head->next;
		count++;
		if (ind == count)
		{
			node = head;
			break;
		}
	}
	return (node);
}
