#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: Pointer to newly allocated space in memory,
 *	or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int i, dup = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concatenate = malloc(len * sizeof(char));

	if (concatenate == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		concatenate[dup++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concatenate[dup++] = s2[i];
	}
	return (concatenate);
}
