#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: Pointer to the current node.
 * @index: The index of the node.
 *
 * Return: 0, if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head != NULL; i++)
	{

		if (i == index)
			return (head);
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
