#include <stdlib.h>
#include "search_algos.h"

/**
 * free_skiplist - free_skiplist
 * @list: list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *n;

	if (list)
	{
		n = list->next;
		free(list);
		free_skiplist(n);
	}
}
