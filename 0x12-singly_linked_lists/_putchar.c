#include <unistd.h>
/**
 * _putchar - putchar
 * @c: character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}