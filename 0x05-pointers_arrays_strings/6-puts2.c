#include "main.h"

/**
 *puts2 - do smtg
 *@str: string
 *Return: returns
 */

void puts2(char *str)
{
int i = _strlen(str);
int a = 0;
do {
if (a == 0 || a % 2 == 0)
{
_putchar(str[a]);
a++;
}
 else if (a == i) 
{
continue;
}
else
{
a++;
}
} while (a < i);
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
