#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - create file name
 * @filename: file name
 * @text_content: content
 * Return: value
 */
int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	ssize_t writeFile = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content && text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (i)
		writeFile = write(fd, text_content, i);
	close(fd);
	if (writeFile == -1)
		return (-1);
	return (1);
}
