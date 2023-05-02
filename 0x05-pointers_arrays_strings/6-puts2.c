#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - add string 2 times
 *
 * @str: put 2 times
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
