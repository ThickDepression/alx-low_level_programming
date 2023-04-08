#include "main.h"
#include <stdio.h>

/**
 *main - main function that counts the num of arguments
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
