#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of the list.
 * @head: Double pointer to the head of the list.
 * @str: The string.
 *
 * Return: NULL on failure else, address of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *tmp, *tail;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(tmp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	tmp->str = dup;
	tmp->len = len;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = tmp;
	}

	return (*head);
}
