#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_nodes = 0;

	for (; h != NULL; num_of_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return num_of_nodes;
}
