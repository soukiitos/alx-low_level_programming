#include "main.h"
#include <elf.h>
void more_OsAbi(Elf64_Ehdr k);
/**
 * magic - Print elf magic
 * @k: The Elf header
 *
 * Return: 0
 */
void magic(Elf64_Ehdr k)
{
	int m = 0;

	printf("  Magic:   ");
	for (; m < EI_NIDENT; m++)
	{
		printf("%2.2x%s", k.e_ident[m], m == EI_NIDENT  - 1 ? "\n" : " ");
	}
}
/**
 * class - Print ELF Class
 * @k: The Elf header
 *
 * Return: 0
 */
void class(Elf64_Ehdr k)
{
	printf("  Class:                             ");
	switch (k.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}
/**
 * data - Print ELF Data
 * @k: The ELF header
 *
 * Return: 0
 */
void data(Elf64_Ehdr k)
{
	printf("  Data:                              ");
	switch (k.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}
/**
 * version - Print ELF Version
 * @k: The ELF header
 *
 * Return: 0
 */
void version(Elf64_Ehdr k)
{
	printf("  Version:                           %d", k.e_ident[EI_VERSION]);
	switch (k.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}
/**
 * OsAbi - Print ELF OS\ABI
 * @k: The ELF header
 *
 * Return: 0
 */
void OsAbi(Elf64_Ehdr k)
{
	printf("  OS/ABI:                            ");
	switch (k.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
		break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
		break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
		break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
		break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
		break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
		break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
		break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
		break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
		break;
		default:
			more_OsAbi(k);
		break;
	}
	printf("\n");
}
/**
 * more_OsAbi - Print more ELF OS\ABI
 * @k: The ELF header
 *
 * Return: 0
 */
void more_OsAbi(Elf64_Ehdr k)
{
	switch (k.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
		break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
		break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
		break;
		case ELFOSABI_ARM:
			printf("ARM");
		break;
		default:
			printf("<unknown: %x>", k.e_ident[EI_OSABI]);
		break;
	}
}
/**
 * abiversion - Print the ELF ABI Version
 * @k: The ELF header
 *
 * Return: 0
 */
void abiversion(Elf64_Ehdr k)
{
	printf("  ABI Version:                       %d\n",
			k.e_ident[EI_ABIVERSION]);
}
/**
 * type - Print The ELF type
 * @k: The ELF header
 *
 * Return: 0
 */
void type(Elf64_Ehdr k)
{
	int t = 0;
	char *ty = (char *)&k.e_type;

	printf("  Type:                              ");
	if (k.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		t = 1;
	}
	switch (ty[t])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
		break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
		break;
		case ET_DYN:
			printf("DYN (Shared object file)");
		break;
		case ET_CORE:
			printf("CORE (Core file)");
		break;
		default:
			printf("<unknown>: %x", ty[t]);
		break;
	}
	printf("\n");
}
/**
 * entrypointaddress - Print The ELF entry point address
 * @k: The ELF header
 *
 * Return: 0
 */
void entrypointaddress(Elf64_Ehdr k)
{
	unsigned char *e = (unsigned char *)&k.e_entry;
	int et, ed;

	printf("  Entry point address:               0x");
	if (k.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		et = k.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[et])
			et--;
		printf("%x", e[et--]);
		for (; et >= 0; et--)
			printf("%02x", e[et]);
		printf("\n");
	}
	else
	{
		et = 0;
		ed = k.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[et])
			et++;
		printf("%x", e[et++]);
		for (; et <= ed; et++)
			printf("%02x", e[et]);
		printf("\n");
	}
}
/**
 * main - The main
 * @ac: An integer
 * @av: A character
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;
	ssize_t j;
	Elf64_Ehdr k;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	i = open(av[1], O_RDONLY);
	if (i == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	j = read(i, &k, sizeof(k));
	if (j < 1 || j != sizeof(k))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (k.e_ident[0] == 0x7f && k.e_ident[1] == 'E' && k.e_ident[2] == 'L'
			&& k.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	magic(k);
	class(k);
	data(k);
	version(k);
	OsAbi(k);
	abiversion(k);
	type(k);
	entrypointaddress(k);
	if (close(i))
		dprintf(STDERR_FILENO, "ERROR closing file description: %d\n", i), exit(98);
	return (EXIT_SUCCESS);
}
