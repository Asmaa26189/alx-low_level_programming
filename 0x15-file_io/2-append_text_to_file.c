#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	openFile = open(filename, O_RDWR | O_APPEND);
	if (openFile == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wrote = write(openFile, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(openFile) == -1)
		return (-1);
	return (1);
}
