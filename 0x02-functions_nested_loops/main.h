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





#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}




#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
  char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int i = 0;
  while (i < 26)
    {
      write(1, &alphabets[i], 1);
      ++i;
    }
}
