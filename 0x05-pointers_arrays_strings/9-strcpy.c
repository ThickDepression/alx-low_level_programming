#include "main.h"
#include <stdio.h>

/**
 **_strcpy - copies
 *@src: source
 *@dest: destination
 *Return: returns
 */

char *_strcpy(char *dest, char *src)
{
int n;
int i = _strlen(src);

for (n = 0; n <= i; n++)
{
dest[n] = src[n];
}
return (dest);
}

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
