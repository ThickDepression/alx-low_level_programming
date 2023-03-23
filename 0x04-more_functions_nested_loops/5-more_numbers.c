#include "main.h"
/**
 *more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int i;
int j;
int m;
int c = 58;

for (m = 0; m < 10; m++)
{
for (i = 48; i < 50; i++)
{
for (j = 48; j < c; j++)
{
if (i != 48)
{
_putchar(i);
}
_putchar(j);
if (c == 53 && i == 48 && j == 48)
{
c = 58;
}
if (j == 57)
{
c = 53;
}
}
}
_putchar('\n');
}
}
