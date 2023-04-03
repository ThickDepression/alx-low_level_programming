#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of dia
 *@a: pointer that points
 *@size: basically the size
 *Return: return nothing at the moment
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * (size + 1)];
sum2 += a[(i + 1) * (size - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
