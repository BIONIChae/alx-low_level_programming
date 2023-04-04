#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A double pointer the head of the list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_pointr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp_pointr = (*head)->next;
		free(*head);
		*head = tmp_pointr;
	}
}
