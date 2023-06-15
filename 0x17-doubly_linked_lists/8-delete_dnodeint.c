#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a given index.
 * @head: The current node.
 * @index: The index.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *preNode, *initialHead, *delNode;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		initialHead = *head;
		*head = initialHead->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(initialHead);
	}
	else
	{
		preNode = *head;
		for (; x < index - 1; x++)
			preNode = preNode->next;
		delNode = preNode->next;
		preNode->next = delNode->next;
		delNode->next->prev = preNode;
		free(delNode);
	}
	return (1);
}
