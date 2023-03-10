#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string.
 * @accept: set of bytes.
 *
 * Return: A pointer to the byte in @s, matches one of the bytes in accept.
 *	NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}

	return (NULL);
}
