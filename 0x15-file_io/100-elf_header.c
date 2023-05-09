#include "main.h"


int main(int argc, char *argv[])
{
	int fd, n;
	Elf64_Ehdr eh;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: cannot open %s\n", argv[1]);
		exit(98);
	}
	n = read(fd, &eh, sizeof(eh));
	if (n != sizeof(eh))
	{
		fprintf(stderr, "Error: cannot read ELF header\n");
		exit(98);
	}
	if (eh.e_ident[EI_MAG0] != ELFMAG0 || eh.e_ident[EI_MAG1] != ELFMAG1 ||
	eh.e_ident[EI_MAG2] != ELFMAG2 || eh.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}
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

	close(fd);
	return (0);
}
