#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - main function
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
int i;
int result = 0;
if (argc < 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
return (0);
}
