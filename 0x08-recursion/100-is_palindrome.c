#include "main.h"

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}

/**
 *palindrome_helper - a fct that chcks if first char == last char
 *@s: string to be treated
 *@len: len of the string
 *Return: returns 1 or 0
 */

int palindrome_helper(char *s, int len)
{
if (len <= 1)
{
return 1;
}
if (*s == *(s + len - 1))
{
return palindrome_helper(s + 1, len - 2);
}
else
{
return 0;
}
}

/**
 *is_palindrome -  a function that returns 1 if a string is a palindrome and 0 if not.
 *@s: string to be treated
 *Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
int len = _strlen(s);
if (len == 0)
{
return (1);
}
return (palindrome_helper(s, len));
}
