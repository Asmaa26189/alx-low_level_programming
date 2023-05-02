#include "main.h"

/**
 * _strlen - get char length
 *
 * @s: character to get length
 * Return: returns length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	  i++;
	}
	return (i);
}
