#include "search_algos.h"

/**
  * binary_search_recursive - binary_search_recursive
  * @array: array
  * @left: left
  * @right: right
  * @value: value
  * Return: int
  */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t count;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (count = left; count < right; count++)
		printf("%d, ", array[count]);
	printf("%d\n", array[count]);

	count = left + (right - left) / 2;
	if (array[count] == value)
		return (count);
	if (array[count] > value)
		return (binary_search_recursive(array, left, count - 1, value));
	return (binary_search_recursive(array, count + 1, right, value));
}

/**
  * binary_search - binary_search
  * @array: array
  * @size: size
  * @value: value
  * Return: int
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
