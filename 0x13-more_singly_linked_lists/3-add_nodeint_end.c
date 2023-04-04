#include "lists.h"

/**
 *  add_nodeint_end - Adds a new node to the end of the list.
 * @head: Double pointer the the head.
 * @n: The node to be appended.
 *
 * Return: If failed, return NULL.
 *      Else, return address of new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_ptr, *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{

		current_ptr = *head;
		while (current_ptr->next != NULL)
			current_ptr = current_ptr->next;
		current_ptr->next = temp;
	}
	return (*head);
}
