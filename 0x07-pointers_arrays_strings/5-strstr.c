#include "main.h"

/**
 *_strstr - a function that locates a substring.
 *@haystack: the main string
 *@needle: the substring
 *Return: return a pointer
 */

char *_strstr(char *haystack, char *needle)
{
char *a = needle;
while (*a)
{
while (*haystack)
{
if (*a == *haystack)
{
return (haystack);
}
haystack++;
}
a++;
}
return (0);
}
