#include "main.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	char buff[1024];
	int openFile, openFileToo, writeFile, readFile;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	if (ac != 3)
		exit(97);
	openFile = open(av[1], O_RDONLY);
	if (openFile == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	if (openFile == -1)
		exit(98);
	openFileToo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (openFileToo == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	if (openFileToo == -1)
		exit(99);
	while ((readFile = read(openFile, buff, 1024)) > 0)
	{
		writeFile = write(openFileToo, buff, readFile);
		if (writeFile == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		if (writeFile == -1)
			exit(99);
	}
	if (readFile == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	if (readFile == -1)
		exit(98);
	if (close(openFile) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", openFile);
	if (close(openFile) == -1)
		exit(100);
	if (close(openFileToo) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", openFileToo);
	if (close(openFileToo) == -1)
		exit(100);
	return (0);
}
