#include "main.h"
#include <stdio.h>

/**
 *print_array - prints
 *@a: pointer
 *@n: array lenghth
 *Return: returns
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
*a = a[i];
if (a[i] != a[n - 1])
{
printf("%d, ", *a);
}
else
{
printf("%d", *a);
}
}
printf("\n");
}
