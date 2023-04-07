#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *@s:pointer
 *@b:constant byte
 *@n:bytes of the memory
 *Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n - i > 0)
{
s[i] = b;
i++;
}
return (s);
}
