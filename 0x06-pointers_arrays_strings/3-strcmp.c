#include "main.h"

/**
 *_strcmp - compare
 *@s1: string 1
 *@s2: string 2
 *Return: returns
 */

int _strcmp(char *s1, char *s2)
{
int char1, char2;
char1 = char2 = 0;
if (s1[char1] == s2[char2])
{
char1++;
char2++;
if (s1[char1] == '\0' || s2[char2] == '\0')
{
return (0);
}
else
{
if (s1[char1] < s2[char2])
return (-15);
if (s1[char1] > s2[char2])
return (15);
}
}
else
{
if (s1[char1] < s2[char2])
return (-15);
if (s1[char1] > s2[char2])
return (15);
}
return (0);
}
