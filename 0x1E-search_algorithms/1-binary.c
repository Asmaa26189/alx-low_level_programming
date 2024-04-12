#include "search_algos.h"

/**
  * binary_search - binary_search
  * @array: array
  * @size: size
  * @value: value
  * Return: int
  */
int binary_search(int *array, size_t size, int value)
{
	size_t count;
	size_t left;
	size_t right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (count = left; count < right; count++)
			printf("%d, ", array[count]);
		printf("%d\n", array[count]);

		count = left + (right - left) / 2;
		if (array[count] == value)
			return (count);
		if (array[count] > value)
			right = count - 1;
		else
			left = count + 1;
	}

	return (-1);
}
