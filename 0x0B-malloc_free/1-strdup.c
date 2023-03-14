#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Prints a pointer to a newly allocated space in memory,
 *	containing a copy of the string given as a parameter.
 * @str: The string.
 *
 * Return: Returns a pointer or NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int x, y;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	x++;

	dup = malloc(x * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (y = 0; y < x; y++)
	{
		dup[y] = str[y];
	}
	return (dup);
}
