#include "main.h"

/**
 *reverse_array - reverses
 *@a: array holder
 *@n: number of elements
 *Return: returns
 */

void reverse_array(int *a, int n)
{
int i = 0;
while (i < n)
{
int temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
i++;
n--;
}
}


