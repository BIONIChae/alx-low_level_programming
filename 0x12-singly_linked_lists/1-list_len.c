#include "lists.h"

/**
 * list_len - Prints numbers of nodes in a linked list.
 * @h: Pointer to head of linked list.
 *
 * Return: number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
