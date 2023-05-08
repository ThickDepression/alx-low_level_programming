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
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: file's name
 *@text_content: content of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int char_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fl = open(filename, O_WRONLY | O_APPEND  | O_EXCL);
	if (fl == -1)
		return (-1);
	char_written = write(fl, text_content, _strlen(text_content));
	if (char_written == -1)
	{
		close(fl);
		return (-1);
	}
	close(fl);
	return (1);
}
