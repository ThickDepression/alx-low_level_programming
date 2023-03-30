#include "main.h"

/**
 **rot13 - rotate char
 *@s: string
 *Return: returns
 */

char *rot13(char *s)
{
int i, j;
char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 53; j++)
{
if (rot1[j] == s[i])
{
s[i] = rot2[j];
break;
}
}
}
return (s);
}
