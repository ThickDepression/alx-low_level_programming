#include "main.h"

/**
 * textfile_copier - copies one file to another
 * @cpied_fl: The file descriptor of the file being copied.
 * @fl_cp: file descriptor of the file to which the content is being copied.
 * @first_fl: name of first_fl
 * @snd_fl: name of snd_fl
 */
void textfile_copier(int cpied_fl, int fl_cp, char *first_fl, char *snd_fl)
{
	ssize_t read_len = 1, write_len = 1;
	char buff[1024];

	while (read_len)
	{
		read_len = read(cpied_fl, buff, sizeof(buff));
		if (read_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", first_fl);
			close(cpied_fl);
			close(fl_cp);
			exit(98);
		}
		if (read_len == '\0')
			break;
		write_len = write(fl_cp, buff, read_len);
		if (write_len == -1 || write_len != read_len)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", snd_fl);
			close(cpied_fl);
			close(fl_cp);
			exit(99);
		}
	}
}
/**
 *main -main function
 *@ac: argument count
 *@av: arguments
 *Return: 0
 */

int main(int ac, char **av)
{
	int cpied_fl, fl_cp, closer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpied_fl = open(av[1], O_RDONLY);
	if (cpied_fl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fl_cp = open(av[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fl_cp == -1)
		fl_cp = open(av[2], O_TRUNC | O_WRONLY);
	if (fl_cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(cpied_fl);
		exit(99);
	}
	textfile_copier(cpied_fl, fl_cp, av[1], av[2]);
	closer = close(cpied_fl);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpied_fl);
		close(fl_cp);
		exit(100);
	}
	closer = close(fl_cp);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_cp);
		exit(100);
	}
	return (0);
}
