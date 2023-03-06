#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to memory area.
 * @b: Constant byte.
 * @n: Number of bytes.
 *
 * Return:  A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
