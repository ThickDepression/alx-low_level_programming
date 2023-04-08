#include <stdio.h>

/**
 *main - main function
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
