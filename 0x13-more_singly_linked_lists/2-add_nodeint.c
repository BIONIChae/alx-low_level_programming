#include "lists.h"

/**
 * add_nodeint - Adds a new node at the head of the listint_t list.
 * @head: Double pointer to the beginning of the list.
 * @n: New node to be appended.
 *
 * Return: On failure - NULL, else the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
