#include "search_algos.h"

/**
 * rec_search - rec_search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int rec_search(int *array, size_t size, int value)
{
	size_t hf = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (hf && size % 2 == 0)
		hf--;

	if (value == array[hf])
	{
		if (hf > 0)
			return (rec_search(array, hf + 1, value));
		return ((int)hf);
	}

	if (value < array[hf])
		return (rec_search(array, hf + 1, value));

	hf++;
	return (rec_search(array + hf, size - hf, value) + hf);
}

/**
 * advanced_binary - advanced_binary
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
