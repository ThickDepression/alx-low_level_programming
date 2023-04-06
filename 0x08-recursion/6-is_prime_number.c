#include "main.h"

/**
 *is_prime_number - a function that returns 1, 0 if prime or not
 *@n: number in check
 *@dv: divisor to help the check
 *Return: return 1 or 0
 */

int _prime_finder(int n, int dv);

int is_prime_number(int n)
{
return (_prime_finder(n, 2));
}

/**
 *_prime_finder - a function that helps to find the prime num
 *@n: number in check
 *@dv: divisor to help the check
 *Return: returns 1 or 0
 */

int _prime_finder(int n, int dv)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % dv == 0)
{
return (0);
}
if (dv * dv > n)
{
return (1);
}
return (_prime_finder(n, dv + 1));
}
