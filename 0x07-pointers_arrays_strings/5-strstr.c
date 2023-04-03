#include "main.h"

/**
 *_strstr - a function that locates a substring.
 *@haystack: the main string
 *@needle: the substring
 *Return: return a pointer
 */

char *_strstr(char *haystack, char *needle)
{
int x, y;

for (x = 0; haystack[x]; x++)
{
for (y = 0; needle[y] && haystack[x + y]; y++)
if (haystack[x + y] != needle[y])
break;
if (!needle[y])
return (haystack + x);
}
return (0);
}
