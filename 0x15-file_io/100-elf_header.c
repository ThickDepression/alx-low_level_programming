#include "main.h"

/**
 * elf_checker - Checks if its an elf file.
 * @e_ident: A pointer
 */

void elf_checker(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 &&
		e_ident[idx] != 'E' &&
		e_ident[idx] != 'L' &&
		e_ident[idx] != 'F')
		{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
		}
	}
}

/**
 * magic_printer - Prints the magic numbers
 * @e_ident: A pointer
 */

void magic_printer(unsigned char *e_ident)
{
	int idx;

	printf("  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);
		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_printer - Prints the class
 * @e_ident: A pointer
 */

void class_printer(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_printer - Prints the data
 * @e_ident: A pointer
 */

void data_printer(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * version_printer - Prints the version
 * @e_ident: A pointer
 */

void version_printer(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * osabi_printer - Prints the OS/ABI
 * @e_ident: A pointer
 */

void osabi_printer(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi_printer - Prints the ABI version
 * @e_ident: A pointer
 */

void abi_printer(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * type_printer - Prints the type
 * @e_type: The ELF type.
 * @e_ident: A pointer
 */

void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_printer - Prints the entry
 * @e_entry: The address
 * @e_ident: A pointer
 */

void entry_printer(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an elf file.
 * @elf: The file descriptor
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main function
 * @argc: qrgument count
 * @argv: arguments
 * Return: 0 on success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hd;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hd = malloc(sizeof(Elf64_Ehdr));
	if (hd == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, hd, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(hd);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_checker(hd->e_ident);
	printf("ELF Header:\n");
	magic_printer(hd->e_ident);
	class_printer(hd->e_ident);
	data_printer(hd->e_ident);
	version_printer(hd->e_ident);
	osabi_printer(hd->e_ident);
	abi_printer(hd->e_ident);
	type_printer(hd->e_type, hd->e_ident);
	entry_printer(hd->e_entry, hd->e_ident);
	free(hd);
	close_elf(op);
	return (0);
}
