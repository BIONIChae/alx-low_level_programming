#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters,
 *		and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char the array will  be initialized with.
 *
 * Return: A pointer to the array or
 *	NULL if size = 0 or if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
