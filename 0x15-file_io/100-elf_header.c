#include "main.h"

/**
 *print_usage - print out the usage of the program
 *@program_name: a pointer to a string containing the name of the program.
 */

void print_usage(char *program_name)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", program_name);
}

/**
 *print_elf_header - prints elf header
 *@eh: struct that contains information about the ELF header
 *@filename: name of the file
 */

void print_elf_header(Elf64_Ehdr eh, char *filename __attribute__((unused)))
{
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x\n",
eh.e_ident[EI_MAG0], eh.e_ident[EI_MAG1],
eh.e_ident[EI_MAG2], eh.e_ident[EI_MAG3]);
printf("  Class:                             %s\n",
eh.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
(eh.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "Unknown"));
printf("  Data:                              %s\n",
eh.e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" :
(eh.e_ident[EI_DATA] == ELFDATA2MSB ?
"2's complement, big endian" : "Unknown"));
printf("  Version:                           %d%s\n",
eh.e_ident[EI_VERSION],
eh.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
printf("  OS/ABI:                            %s\n",
eh.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
(eh.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Unknown"));
printf("  ABI Version:                       %d\n",
eh.e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
eh.e_type == ET_REL ? "REL (Relocatable file)" :
(eh.e_type == ET_EXEC ? "EXEC (Executable file)" :
(eh.e_type == ET_DYN ? "DYN (Shared object file)" :
(eh.e_type == ET_CORE ? "CORE (Core file)" : "Unknown"))));
printf("  Entry point address:               0x%lx\n",
(unsigned long)eh.e_entry);
}

/**
 *main - main function
 *@argc: argument count
 *@argv: arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
int fd, n;
Elf64_Ehdr eh;

if (argc != 2)
{
print_usage(argv[0]);
exit(98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: cannot open %s\n", argv[1]);
exit(98);
}
n = read(fd, &eh, sizeof(eh));
if (n != sizeof(eh))
{
dprintf(STDERR_FILENO, "Error: cannot read ELF header\n");
exit(98);
}
if (eh.e_ident[EI_MAG0] != ELFMAG0 || eh.e_ident[EI_MAG1] != ELFMAG1 ||
eh.e_ident[EI_MAG2] != ELFMAG2 || eh.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
exit(98);
}
print_elf_header(eh, argv[1]);
close(fd);
return (0);
}
