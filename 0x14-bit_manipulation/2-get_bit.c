#include "main.h"

/**
 * get_bit - Prints the value of a bit at a given bit.
 * @n: The number from which the bits are retrieved.
 * @index: The index position of the @n bit.
 *
 * Return: The value of the bit at index.
 *		On error, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
