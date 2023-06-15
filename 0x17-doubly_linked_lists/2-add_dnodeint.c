#include "lists.h"

/**
 * add_dnodeint - Appends a new node at the beginning of a list.
 * @head: A double pointer to the current node.
 * @n: The data.
 *
 * Return: Address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = newNode;

	newNode->next = *head;
	newNode->n = n;
	*head = newNode;
	return (newNode);


}
