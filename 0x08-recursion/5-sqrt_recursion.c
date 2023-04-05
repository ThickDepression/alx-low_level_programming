#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *@n: the number to calculate its square root
 *@guess: the current guess for the square root
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int do_sqrt_recursion(int n, int guess);

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (do_sqrt_recursion(n, 1));
}
}

/**
 * do_sqrt_recursion - Recursive helper function for _sqrt_recursion
 * @n: the number to calculate its square root
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int do_sqrt_recursion(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess < n)
{
return (do_sqrt_recursion(n, guess + 1));
}
else
{
return (-1);
}
}
