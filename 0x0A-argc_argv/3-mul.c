#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", result);
return (0);
}
}
