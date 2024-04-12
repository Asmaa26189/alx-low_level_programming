#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump_list
 * @list: list
 * @size: size
 * @value: value
 * Return: listint_t
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t ix;
	size_t kk;
	size_t mm;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	mm = (size_t)sqrt((double)size);
	ix = 0;
	kk = 0;

	do {
		prev = list;
		kk++;
		ix = kk * mm;

		while (list->next && list->index < ix)
			list = list->next;

		if (list->next == NULL && ix != list->index)
			ix = list->index;

		printf("Value checked at ix [%d] = [%d]\n", (int)ix, list->n);

	} while (ix < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at ix [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
