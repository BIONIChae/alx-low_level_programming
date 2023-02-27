#include "main.h"

/**
 * _strlen - Prints the length of a string.
 *@s: the string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length += 1;
	}
	return (length);
}
