#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: the string.
 * @c: the character.
 *
 * Return: Pointer to the first occurrence of the char c.
 *	If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

