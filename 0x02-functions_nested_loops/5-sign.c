#include "main.h"
/**
 * print_sign - main function
 *
 * @n: char to compare
 *
 * Return: 1 +ve, -1 if -ve;
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
