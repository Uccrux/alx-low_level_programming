#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of a list
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		for (nodes = 0; h; nodes++)
			h = h->next;
	}
	return (nodes);
}