#include "main.h"

/**
 *read_textfile - a function that reads a text file,prints it to the POSIX
 *@filename: file name to be read
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t char_printed, char_read;
	ssize_t fl;
	char *buffer;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	char_read = read(fl, buffer, letters);
	char_printed = write(STDOUT_FILENO, buffer, char_read);
	free(buffer);
	close(fl);
	return (char_printed);
}
