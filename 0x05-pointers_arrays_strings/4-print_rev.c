#include "main.h"

/**
 *_puts - type
 *@s: variable
 *Return: Always 0.
 */

void print_rev(char *s)
{
  int i = _strlen(s);
  int a;

  for (a = i - 1; a >= 0; a--)
    {
      _putchar(s[a]);
    }
  _putchar('\n');
}

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
