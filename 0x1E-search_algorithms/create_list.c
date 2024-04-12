#include <stdlib.h>
#include "search_algos.h"

void free_list(listint_t *list);

/**
 * create_list - create_list
 * @array: array
 * @size: size
 * Return: listint_t
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *l;
	listint_t *n;

	l = NULL;
	while (array && size--)
	{
		n = malloc(sizeof(*n));
		if (!n)
		{
			free_list(l);
			return (NULL);
		}
		n->n = array[size];
		n->index = size;
		n->next = l;
		l = n;
	}
	return (l);
}
