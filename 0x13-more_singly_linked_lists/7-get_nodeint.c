#include "lists.h"
/**
 * get_nodeint_at_index - node index
 * @head: head
 * @index: index
 * Return: node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;

	tmp = head;
	while (count != index && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (count != index)
		return (NULL);
	return (tmp);
}
