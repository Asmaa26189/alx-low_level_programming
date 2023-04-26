#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: the number to get last digit
 *
 * Return: last digit of n number
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
