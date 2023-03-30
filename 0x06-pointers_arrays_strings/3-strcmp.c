#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: an integer less than, equal to, or greater than zero if s1 is
 * considered to be respectively less than, equal to, or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i])
{
return (-15);
}
else if (s1[i] > s2[i])
{
return (15);
}
i++;
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else if (s1[i] == '\0')
{
return (-15);
}
else
{
return (15);
}
}
