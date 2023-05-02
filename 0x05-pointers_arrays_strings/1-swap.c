#include "main.h"

/**
 * swap_int - swap numbers
 *
 * @a: 1st No
 * @b: 2nd No
 */
void swap_int(int *a, int *b)
{
	int x = *b;
	int y = *a;
	*a = x;
	*b = y;
}
