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
 *create_file - a function that creates a file.
 *@filename: name of the file created
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	int char_written;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
	{
		char_written = write(fl, text_content, _strlen(text_content));
		if (char_written == -1)
		{
			close(fl);
			return (-1);
		}
	}
	close(fl);
	return (1);
}

