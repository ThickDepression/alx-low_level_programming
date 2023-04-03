#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: string
 *@accept: another string
 *Return: returns counter
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int n = _strlen(accept);
int m = _strlen(s);
unsigned counter = 0;
for (i = 0; i < n; i++)
{
int g = 0;
for (j = 0; j < m; j++)
{
if (accept[i] == s[j])
{
counter++;
g++;
}
else if (accept[i] != s[j] && g > 0)
{
break;
}
}
}
return (counter);
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
