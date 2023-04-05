#include "main.h"

/**
 *_sqrt_recursion - a fct returns the natural square root of a number.
 *@n: the number examened
 *Return: returns sqrt
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (n < 0)
{
return (-1);
}
else
{
return (dotherootmath(n, 1));
}
}

/**
 *dotherootmath - a function that finds if the num got a sqrt
 *@x: number we want its root
 *@y: root of x
 *Return: return the value
 */

int dotherootmath(int x, int y)
{
if (y * y < x)
{
return (dotherootmath(x, y + 1));
}
if (y * y > x)
{
return (-1);
}
return (y);
}
