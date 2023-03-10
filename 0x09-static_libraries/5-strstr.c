#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: A string.
 * @needle: Substring.
 *
 * Return: A pointer to the beginning of the located substring.
 *	NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
