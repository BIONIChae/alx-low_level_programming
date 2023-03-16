#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Num of elements.
 * @size: Size of elements in bytes.
 *
 * Return: NULL If nmemb/size is 0 or on failure, else return pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		i[x] = 0;
	return (i);
}
