#include "lists.h"

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(const char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
return (counter);
}

/**
 *add_node_end - a function that adds a new node at the end
 *@head: element
 *@str: string
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curnt_node;
	char *str_cp = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str_cp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_cp;
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	curnt_node = *head;
	while (curnt_node->next != NULL)
		curnt_node = curnt_node->next;
	curnt_node->next = new_node;
	return (new_node);
}
