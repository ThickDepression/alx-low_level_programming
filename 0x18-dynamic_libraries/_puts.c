#include "main.h"

/**
 *_puts - type
 *@str: variable
 *Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
