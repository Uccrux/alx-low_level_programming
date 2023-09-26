#include "lists.h"

/**
 * print_listint - prints all the elements of lists_t list.
 * @h: head of list
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->n != 0 && !(h->n))
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
