#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the current node.
 * @idx: The given index.
 * @n: The new to be inserted.
 *
 * Return: Address of the new node, else NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *oldNode;

	newNode->n = n;
	if (idx != 0)
	{
		oldNode = *h;
		for (; x < idx - 1; x++)
			oldNode = oldNode->next;
	}
	else
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
	}
	newNode->next = oldNode->next;
	newNode->prev = oldNode;
	oldNode->next = newNode;
	newNode->next->prev = newNode;

	if (*h == NULL)
                return (NULL);
	return newNode;
}
