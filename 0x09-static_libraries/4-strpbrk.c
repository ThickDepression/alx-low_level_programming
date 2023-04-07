#include "main.h"

/**
 *_strpbrk - a function that gets the length of a prefix substring.
 *@s: string s
 *@accept: another string
 *Return: returns smtg
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return ('\0');
}
