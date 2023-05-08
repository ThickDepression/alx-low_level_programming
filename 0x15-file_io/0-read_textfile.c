#include "main.h"

/**
 *read_textfile - a function that reads a text file,prints it to the POSIX
 *@filename: file name to be read
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t char_printed = 0, char_read = 0;
	FILE *fl;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fl = fopen(filename, "r");
	if (fl == NULL)
	{
		free(buffer);
		return (0);
	}

	char_read = fread(buffer, sizeof(char), letters, fl);
	if (char_read == 0)
	{
		fclose(fl);
		free(buffer);
		return (0);
	}
	char_printed = fwrite(buffer, sizeof(char), letters, stdout);
	if (char_printed == 0)
	{
		fclose(fl);
		free(buffer);
		return (0);
	}
	fclose(fl);
	free(buffer);
	return (char_read);
}
