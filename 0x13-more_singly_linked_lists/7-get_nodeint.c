#include "lists.h"

/**
 * get_nodeint_at_index - Prints the nth node of the listint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node.
 *
 * Return: If node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	if (head != NULL && i == index)
		return (head);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (NULL);
}
