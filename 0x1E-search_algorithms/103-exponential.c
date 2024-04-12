#include "search_algos.h"

/**
  * _binary_search - _binary_search
  * @array: array
  * @left: left
  * @right: right
  * @value: value
  * Return: int
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - exponential_search
  * @array: array
  * @size: size
  * @value: value
  * Return: int
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t count = 0;
	size_t r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (count = 1; count < size && array[count] <= value; count = count * 2)
			printf("Value checked array[%ld] = [%d]\n", count, array[count]);
	}

	r = count < size ? count : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", count / 2, r);
	return (_binary_search(array, count / 2, r, value));
}
