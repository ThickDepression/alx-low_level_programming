#include "main.h"

/**
 *puts2 - do smtg
 *@str: string
 *Return: returns
 */

void puts2(char *str)
{
int i;
int _break = _strlen(str);

for (i = 0; i < _break; i += 2)
{
if (str[i] != '\0')
{
_putchar(str[i]);
}
else
{
i = _break;
}
}
_putchar('\n');
}


/**
 *_strlen - counts characters
 *@s: value
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
