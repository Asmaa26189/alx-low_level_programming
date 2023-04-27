#include "main.h"
/**
 * _isupper - checks capital or small
 *@c: char to be checked
 *
 * Return: 1 if c is uppercase or 0 otherwise;
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
