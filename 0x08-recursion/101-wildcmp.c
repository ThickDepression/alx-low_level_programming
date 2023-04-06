#include "main.h"

/**
 *_checker - checks if s1 == s2
 *@s1: string 1
 *@s2: string compared
 *Return: return 1 o 0
 */

int _checker(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (_checker(s1 + 1, s2 + 1));
}
else if (*s2 == '*')
{
return (_checker(s1, s2 + 1) || _checker(s1 + 1, s2));
}
else
{
return (0);
}
}

/**
 *wildcmp - function that compares two strings
 *@s1: string 1
 *@s2: string compared
 *Return: return 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 && *s2)
{
return (_checker(s1, s2));
}
return (0);
}
