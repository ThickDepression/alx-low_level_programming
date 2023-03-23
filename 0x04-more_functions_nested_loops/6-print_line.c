#include "main.h"

/**
 *print_line - print lines
 *@n: number of _
 *Return : as always
 */

void print_line(int n)
{
int i = 0;
if (i >= n)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
