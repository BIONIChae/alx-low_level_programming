#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: String @src is appended to.
 * @src: Appends to the @dest string.
 * @n: Number of bytes.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a++])
	{
		b++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[a];
	}

	for (a = b; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
