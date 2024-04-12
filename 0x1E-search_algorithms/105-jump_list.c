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

		while (list->next && list->ix < ix)
			list = list->next;

		if (list->next == NULL && ix != list->ix)
			ix = list->ix;

		printf("Value checked at ix [%d] = [%d]\n", (int)ix, list->n);

	} while (ix < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->ix, (int)list->ix);

	for (; prev && prev->ix <= list->ix; prev = prev->next)
	{
		printf("Value checked at ix [%d] = [%d]\n", (int)prev->ix, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
