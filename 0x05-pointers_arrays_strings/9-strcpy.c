#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copy
 *
 * @dest: dest
 * @src: src
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
