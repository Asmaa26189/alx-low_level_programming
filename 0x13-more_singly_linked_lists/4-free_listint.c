#include "lists.h"
/**
 * free_listint - list free
 * @head: head
 *
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
