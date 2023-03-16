#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Num of bytes to copy.
 *
 * Return: On failure return NULL, else pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int x;
	unsigned int y;
	unsigned int z;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}

	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}

	if (y > n)
		y = n;

	i = malloc(sizeof(char) * (x + y + 1));

	if (i == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		i[z] = s1[z];

	for (z = 0; z < y; z++)
		i[x + z] = s2[z];

	i[x + y] = '\0';

	return (i);
}
