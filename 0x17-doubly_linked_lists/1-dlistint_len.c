#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a list.
 * @h: The current node.
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_of_elements = 0;

	for (; h != NULL; num_of_elements++)
		h = h->next;
	return (num_of_elements);
}
