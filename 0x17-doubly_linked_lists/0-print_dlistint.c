#include "lists.h"

/**
 * print_dlistint - print_dlistint
 * @h: variable
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
