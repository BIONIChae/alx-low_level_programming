#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at index of the list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *del_node = *head;

	if (del_node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}

	previous = *head;
	del_node = (*head)->next;
	while (del_node != NULL && index > 1)
	{
		previous = del_node;
		del_node = del_node->next;
		index--;
	}
	if (del_node == NULL)
		return (-1);

	previous->next = del_node->next;
	free(del_node);
	return (1);
}
