#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a list_t list.
 * @head: Double pointer to head of linked list.
 * @str: String to add to the node of the linked list.
 *
 * Return: Number of nodes in the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int len = 0;

	while (str[len])
	len++;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
	return (NULL);

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
