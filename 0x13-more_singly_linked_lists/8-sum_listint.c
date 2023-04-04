#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data(n).
 * @head: A pointer to the head of the list.
 *
 * Return: If list is empty return 0, else sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}
	return (sum_of_data);
}
