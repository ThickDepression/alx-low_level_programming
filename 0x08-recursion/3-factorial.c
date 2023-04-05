#include "main.h"

/**
 *factorial - do the factorials
 *@n: number
 *Return: returns n
 */

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
