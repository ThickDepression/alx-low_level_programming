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
 *add_node - a function that adds a new node
 *@head: first node
 *@str: needs to be duplicated
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
