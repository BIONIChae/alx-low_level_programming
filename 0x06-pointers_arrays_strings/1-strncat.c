#include "main.h"

/**
 * _strncat - Concatenates 2 strings.
 * @dest: The string which the @src string is concatenated upon.
 * @src: Appended to the @dest string.
 * @n: Number of bytes.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, destlen = 0;

	while (dest[srclen++])
	{
		destlen++;
	}

	for (srclen = 0; src[srclen] && srclen < n; srclen++)
		dest[destlen++] = src[srclen];
	return (dest);
}
