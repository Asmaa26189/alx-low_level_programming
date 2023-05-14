#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array
 * @b: value
 * @n: n  times
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
