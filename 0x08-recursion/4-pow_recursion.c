#include "main.h"

/**
 *_pow_recursion - a function that returns the value of pow.
 *@x: num
 *@y: pow
 *Return: return m
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y == 0)
{
return (1);
}
return (0);
}
