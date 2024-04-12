#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - init_express
 * @list: list
 * @size: size
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t sp = sqrt(size);
	size_t i;
	skiplist_t *save;

	for (save = list, i = 0; i < size; ++i, list = list->next)
	{
		if (i % sp == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - create_skiplist
 * @array: array
 * @size: size
 * Return: skiplist_t
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *l;
	skiplist_t *n;
	size_t ss;

	l = NULL;
	ss = size;
	while (array && size--)
	{
		n = malloc(sizeof(*n));
		if (!n)
		{
			free_skiplist(l);
			return (NULL);
		}
		n->n = array[size];
		n->index = size;
		n->express = NULL;
		n->next = l;
		l = n;
	}
	init_express(l, ss);
	return (l);
}
