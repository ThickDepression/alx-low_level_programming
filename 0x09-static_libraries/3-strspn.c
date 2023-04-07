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
int counter = 0;
for (i = 0; s[i] != '\0'  && i == counter; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
counter++;
}
}
}
return (counter);
}
