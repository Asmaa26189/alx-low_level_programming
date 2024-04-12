#include "search_algos.h"

/**
 * linear_search - linear_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	int count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < (int)size; count++)
	{
		printf("Value checked array[%u] = [%d]\n", count, array[count]);
		if (value == array[count])
			return (count);
	}
	return (-1);
}
