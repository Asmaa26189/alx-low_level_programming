#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal summary
 * @a: array
 * @size: diagonal size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}
