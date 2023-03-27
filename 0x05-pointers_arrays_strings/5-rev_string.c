#include "main.h"

/**
 *rev_string - reverses a string
 *@s: array
 *Return : returns
 */

void rev_string(char *s)
{
int i = _strlen(s);
char *start = s;
char *end = s + i - 1;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
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
