#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the integers.
 * @head: Pointer to the current node.
 *
 * Return: Sum of data, else 0 on failure.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0, sum = 0;

	if (head == NULL)
		return (0);
	for (; head != NULL; count++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
