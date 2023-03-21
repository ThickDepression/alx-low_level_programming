#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
  char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int i = 0;
  while (i < 25)
    {
      _putchar(alphabets[i]);
      ++i;
    }
  _putchar('\n');
}
