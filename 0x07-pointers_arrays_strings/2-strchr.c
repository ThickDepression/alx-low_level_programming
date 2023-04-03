#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: main string
 *@c: character to be exaamened
 *Return: returns
 */

char *_strchr(char *s, char c)
{
const char *ps = s;
while (*ps != '\0')
{
if (*ps == c)
{
return (ps);
}
ps++;
}
return (NULL);
}
