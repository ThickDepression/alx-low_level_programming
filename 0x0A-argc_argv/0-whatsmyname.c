#include <stdio.h>

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: returns 0
*/

int main(int argc, char *argv[])
{
if (argc > 0)
{
return (printf("%s\n", argv[0]));
}
return (0);
}
