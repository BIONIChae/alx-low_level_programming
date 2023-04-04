#include "lists.h"

/**
 * print_listint - Prints all elements in listint_t list.
 * @h: The listint_t list.
 *
 * Return: The num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
