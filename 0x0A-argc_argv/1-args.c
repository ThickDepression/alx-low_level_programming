#include "main.h"
#include <stdio.h>

/**
 *argcounter - counts the num of arguments
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */

int argcounter(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc);
return (0);
}
