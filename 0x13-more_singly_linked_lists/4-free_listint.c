#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_pointr;

	while (head != NULL)
	{
		tmp_pointr = head->next;
		free(head);
		head = tmp_pointr;
	}
}
