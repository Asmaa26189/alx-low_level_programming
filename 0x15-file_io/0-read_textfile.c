#include "main.h"

/**
 * read_textfile - read textfile
 * @filename: file
 * @letters: amount
 * Return: value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int openFile, printed, writeFile;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	openFile = open(filename, O_RDWR);
	if (openFile == -1)
		return (0);
	printed = read(openFile, buff, letters);
	if (printed == -1)
		return (0);
	writeFile = write(STDOUT_FILENO, buff, printed);
	if (writeFile == -1)
		return (0);
	if (close(openFile) == -1)
		return (0);
	free(buff);
	return (printed);
}
