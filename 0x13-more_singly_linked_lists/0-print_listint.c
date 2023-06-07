#include "lists.h"
/**
 * print_listint - print list of integers
 * @h: struct
 * Return: value
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
