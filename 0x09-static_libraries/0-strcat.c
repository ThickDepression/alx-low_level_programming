#include "main.h"

/**
 *_strcat -  append
 *@src: source
 *@dest: destination
 *Return: returns
 */

char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr != '\0')
ptr++;
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
