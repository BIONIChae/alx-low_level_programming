#include "main.h"

/**
 * binary_to_uint - Converts a binary num to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted num or 0 if 1/more chars points to
 *		a string of 0 and 1 chars/ if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int x = 0, length = strlen(b);

	if (b == NULL)
		return (0);

	for (; x < length; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		return (0);

		conv_num <<= 1;
		if (b[x] == '1')
			conv_num |= 1;
	}
	return (conv_num);
}
