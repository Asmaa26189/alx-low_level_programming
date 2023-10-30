#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * get_magic - get magic
 * @ehdr: header
 * @fname: file name
 * @fd: file open
 * Return: empty
 */
void get_magic(Elf64_Ehdr *ehdr, char *fname, int fd)
{
	size_t i = 0;
	unsigned char *mgc = ehdr->e_ident;

	if (mgc[EI_MAG0] == ELFMAG0 &&
	    mgc[EI_MAG1] == ELFMAG1 &&
	    mgc[EI_MAG2] == ELFMAG2 &&
	    mgc[EI_MAG3] == ELFMAG3)
	{
		printf("Magic:  ");
		while (i < EI_NIDENT)
			printf(" %02x", ehdr->e_ident[i++]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", fname);
		if (close(fd))
			dprintf(STDERR_FILENO, "Problem closing fd %d", fd);
		exit(98);
	}
}

/**
 * get_class - get_class
 * @ehdr: header
 * Return: empty
 */
void get_class(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Class:");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("INVALID\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	}
}

/**
 * get_data - get_data
 * @ehdr: header
 * Return: empty
 */
void get_data(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Data:");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement big-endian\n");
		break;
	}
}

/**
 * get_velf - get velf
 * @ehdr: header
 * Return: empty
 */
void get_velf(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Version:");
	switch (ehdr->e_ident[EI_VERSION])
	{
	case EV_NONE:
		printf("%d (invalid)\n", EV_NONE);
		break;
	case EV_CURRENT:
		printf("%d (current)\n", EV_CURRENT);
		break;
	}
}

/**
 * get_osabi - get osabi
 * @ehdr: header
 * Return: empty
 */
void get_osabi(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "OS/ABI:");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
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
		printf("Stand-alone (embedded)\n");
		break;
	default:
		printf("<unknown: %d>\n", ehdr->e_ident[EI_OSABI]);
	}
}
