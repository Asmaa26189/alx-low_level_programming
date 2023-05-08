#include "main.h"
/**
 * _memset - add memory to arr
 * @s: array
 * @b: set value
 * @n: n times
 * Return: character
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
