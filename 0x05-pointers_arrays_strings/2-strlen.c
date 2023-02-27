#include "main.h"

/**
 * _strlen - Prints the length of a string.
 *@s: the string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length;

	for(; *s != '\0'; s++)
	{
		length += 1;
	}
	return (length);
}
