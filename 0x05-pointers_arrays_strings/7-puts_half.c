#include "main.h"

/**
 *puts_half - puts half i guess
 *@str: its a string array
 *Return: as always returns
 */

void puts_half(char *str)
{
int len = _strlen(str);
int snd, nsnd;

if (len % 2 == 0)
{
for (snd = (len - 1) / 2 + 1; snd < len; snd++)
{
_putchar(str[snd]);
}
_putchar('\n');
}
else
{
for (nsnd = (len - 1) / 2; nsnd < len - 1; nsnd++)
{
_putchar(str[nsnd + 1]);
}
_putchar('\n');
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
