#include "main.h"

/**
 * binary_to_uint - Converts a binary num to an unsigned int.
 * @b: Pointer tp a string of 0 and 1 characters.
 *
 * Return: The number that was converted/
 *	0 if b == NULL/ more than 1 char that isn't 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int size = 0;

	if (b == NULL)
		return (0);
	while (b[size] != '\0')
	{
		if (b[size] == '0')
			output *= 2;
		else if (b[size] == '1')
			output = output * 2 + 1;
		else
			return (0);
		size++;
	}
	return (output);
}
