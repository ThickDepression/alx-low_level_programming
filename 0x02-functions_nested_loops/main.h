#include <unistd.h>
#include <string.h>

/**
 * print - writes the array of chars to the stdout
 *@array: the string to print
 *@length: the length of the array defined by the function "strlen"
 * Return: on success 1.
 */
int print(char *array, int length)
{
         return (write(1, &array[0], length));
}
