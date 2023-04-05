#include "main.h"

/**
 *_print_rev_recursion - a function that prints a string in reverse.
 *@s: pointer to a string
 */

void _print_rev_recursion(char *s)
{
int len = _strlen(s);
int i;
for (i = 0; i < len; len--)
{
_putchar(s[len]);
}
}


/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
