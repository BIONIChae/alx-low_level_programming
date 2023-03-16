#include "main.h"
#include <stdlib.h>

/**
 * array_range -  Creates an array of integers.
 * @min: The first value.
 * @max: The last value.
 *
 * Return: If min > max or on failure, return NULL. Else, a pointer.
 */
int *array_range(int min, int max)
{
	int i, *ptr, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;

	ptr = malloc(sizeof(int) * length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++, min++)
		ptr[i] = min;
	return (ptr);
}
