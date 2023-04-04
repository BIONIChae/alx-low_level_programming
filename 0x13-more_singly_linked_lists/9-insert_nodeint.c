#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A double pointer to the head of the list.
 * @idx: The index where the new node should be appended.
 * @n: The data.
 *
 * Return: Address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *ptr, *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	if (new == NULL)
		return (NULL);
	new->n = n;

	ptr = *head;
	while (node < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		node++;
	}
	if (ptr == NULL)
		return (NULL);

	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
