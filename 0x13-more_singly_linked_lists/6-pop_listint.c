#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: A double pointer to the head of the list.
 *
 * Return: The head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_ptr;
	int data;

	if (*head == NULL)
		return (0);

	tmp_ptr = *head;
	data = tmp_ptr->n;
	*head = tmp_ptr->next;
	free(tmp_ptr);

	return (data);
}
