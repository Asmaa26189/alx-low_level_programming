#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	int index;
	int mm;
	int kk;
	int prev;

	if (array == NULL || size == 0)
		return (-1);

	mm = (int)sqrt((double)size);
	kk = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		kk++;
		prev = index;
		index = kk * mm;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
