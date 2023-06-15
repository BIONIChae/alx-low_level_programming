#include "lists.h"

/**
 * print_dlistint - Printts each element in the list.
 * @h: The current node.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_nodes = 0;

	for (; h != NULL; num_of_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return	(num_of_nodes);
}
