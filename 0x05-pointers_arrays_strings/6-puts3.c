#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * non-null character
 *
 * @str: the string to print
 */
void puts2(char *str)
{
    int i, j;

    for (i = 0; str[i] != '\0' && str[i] == '\0'; i++)
    {
        /* skip over null characters at beginning of string */
    }

    for (j = i; str[j] != '\0'; j += 2)
    {
        _putchar(str[j]);
    }

    _putchar('\n');
}
