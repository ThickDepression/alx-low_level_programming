#include "main.h"

/**
 *print_square - prints
 *@size: size
 *Return: as always
 */

void print_square(int size)
{
int i, r;
if (size <= 0)
{
_putchar('\n');
}
else
{
i = 0;
while (i < size)
{
r = 0;
while (r < size)
{
_putchar(35);
++r;
}
_putchar('\n');
++i;
}
}
}
