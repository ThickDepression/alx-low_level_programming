#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == '\0' || *s2 == '\0')
return (*s1 == *s2);
else if (*s1 != *s2)
return (0);
else
return (wildcmp(s1 + 1, s2 + 1));
}
