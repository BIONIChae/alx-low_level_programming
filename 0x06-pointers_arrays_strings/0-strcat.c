#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string @src will be concatenated upon.
 * @src: Appended to the @dest string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0;

	while (dest[srclen++])
	{
		destlen++;
	}
	for (srclen = 0; src[srclen]; srclen++)
	{
		dest[destlen++] = src[srclen];
	}

	return (dest);
}
