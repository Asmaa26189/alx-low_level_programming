#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * main - main
 * @argc: number argument
 * @argv: array args
 * Return: value
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t r;
	Elf64_Ehdr *helf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: could not open %s\n", argv[1]);
		exit(98);
	}
	helf = malloc(sizeof(Elf64_Ehdr));
	if (helf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: out of memory\n");
		close(fd);
		exit(98);
	}
	r = read(fd, helf, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(helf);
		dprintf(STDERR_FILENO, "Error: could not read %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (close(fd))
		dprintf(STDERR_FILENO, "Problem closing fd %d", fd);
	get_magic(helf, argv[1], fd);
	get_class(helf);
	get_data(helf);
	get_velf(helf);
	get_osabi(helf);
	get_vabi(helf);
	get_type(helf);
	get_entry(helf);
	free(helf);
	exit(EXIT_SUCCESS);
}