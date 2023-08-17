#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at given index
 *@h: head of the list
 *@idx: the index
 *@n: data
 *Return:  the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (!head->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new);
}
