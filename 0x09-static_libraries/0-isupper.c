#include "main.h"

/**
 * _isupper - Checks for UPPERCASE character.
 * @c: The character.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
