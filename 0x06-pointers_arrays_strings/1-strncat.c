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
	int i, srclen = 0, destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
