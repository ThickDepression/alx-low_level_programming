#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: size of triangle
 *Return: ye
 */

void print_triangle(int size)
{
int hashtag, space;

if (size > 0)
{
for (hashtag = 1; hashtag <= size; hashtag++)
{
for (space = size - hashtag; space >= 1; space--)
{
_putchar(32);
}
do {
_putchar(35);
} while (hashtag <= size - space);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
