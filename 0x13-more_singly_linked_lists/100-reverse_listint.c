#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A double pointer to the head of the list.
 *
 * Return: Pointer to 1st node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;
	return (back);
}
