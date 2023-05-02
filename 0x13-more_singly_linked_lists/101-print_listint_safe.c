#include "lists.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *num_printer - prints nums
 *@n: num
 */

void num_printer(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		num_printer(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 *print_listint_safe - prints the list
 *@head: node
 *Return: returns num of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		if (head->n == '\0')
			exit(98);
		num_printer(head->n);
		_putchar('\n');
		head = head->next;
		count++;
	}
	return (count);
}
