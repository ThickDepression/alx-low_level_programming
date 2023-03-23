#include <stdio.h>
#include "main.h"

/**
 *main- main
 *
 *Return: zero
 */

int main(void)
{
int i;

for (i = 1; i <= 100; ++i)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
putchar(32);
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
putchar(32);
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuz ");
putchar(32);
}
else
{
printf("%d", i);
putchar(32);
}
}
printf("\n");
return (0);
}
