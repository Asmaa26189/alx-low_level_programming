#include "search_algos.h"

/**
 * linear_skip - linear_skip
 * @list: list
 * @value: value
 * Return: skiplist_t
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *mg;

	if (list == NULL)
		return (NULL);

	mg = list;

	do {
		list = mg;
		mg = mg->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)mg->index, mg->n);
	} while (mg->express && mg->n < value);

	if (mg->express == NULL)
	{
		list = mg;
		while (mg->next)
			mg = mg->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)mg->index);

	while (list != mg->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
