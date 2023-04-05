#include "main.h"

/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: pointer to a string
 *Return: return an int
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
if (!*(s + 1))
{
return (1);
}
return (_strlen_recursion(s + 1) + 1);
}
