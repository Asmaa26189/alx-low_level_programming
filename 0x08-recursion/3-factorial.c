#include "main.h"
/**
 * factorial - Recursion
 * @n: number
 * Return: returns factor
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
