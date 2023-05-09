#include "main.h"

/**
 *_memcmp - a function that compares tfco blocks of memory.
 *@s1:  pointer to the memory block
 *@s2:  pointer to the memory block
 *@n: the number of bytes to compare.
 *Return: 0
 **/

int _memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1, *p2 = s2;
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (p1[i] != p2[i])
			return ((p1[i] < p2[i]) ? -1 : 1);
	}
	return (0);
}

/**
 *error_printer - prints error
 *@msg: error msg
 */

void error_printer(char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(98);
}

/**
 *elf_header_printer - prints the header
 *@header: header
 */

void elf_header_printer(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "OTHER (Unknofcn file type)");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("\n");
}

/**
 *main - main function
 *@ac: argument count
 *@av: arguments
 *Return: 0
 */

int main(int ac, char *av[])
{
	int fd, fr, fc;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		error_printer("Invalid number of arguments.");
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_printer("Cannot open file");
	fr = read(fd, &header, sizeof(header));
	if (fr == -1)
		error_printer("Cannot read file header");
	fc = _memcmp(header.e_ident, ELFMAG, SELFMAG);
	if (fc != 0)
		error_printer("Not an ELF file");
	elf_header_printer(&header);
	close(fd);
	return (0);
}
