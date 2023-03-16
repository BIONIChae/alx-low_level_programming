#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: num of bytes.
 *
 * Return: A pointer/ on failure, normal process termination with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
