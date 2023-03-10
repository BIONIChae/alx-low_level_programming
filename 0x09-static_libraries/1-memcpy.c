#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Copies to this memory area.
 * @src: Copies from this memory area.
 * @n: Number of bytes.
 *
 * Return: A pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
