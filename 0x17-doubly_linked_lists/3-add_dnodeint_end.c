#include "lists.h"

/**
 * add_dnodeint_end - Append a node to the end of a list.
 * @head: A double pointer to the current node.
 * @n: The data.
 *
 * Return: The address of the new element/ NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (endNode == NULL)
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;

	if (*head != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = endNode;
		endNode->prev = current;
	}
	else
	{
		endNode->prev = NULL;
		*head = endNode;
	}

	return (endNode);
}
