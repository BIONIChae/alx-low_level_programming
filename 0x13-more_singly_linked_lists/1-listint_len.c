#include "lists.h"

/**
 * listint_len - Print the number of elements in the listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		count_elements++;
		h = h->next;
	}
	return (count_elements);
}
