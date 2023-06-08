#include "main.h"
/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}