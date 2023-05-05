#include "main.h"

/**
 * get_bit - Finds the value of a bit.
 * @n: The given bit.
 * @index: The index at which the bit is located.
 *
 * Return: The value of the bit or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = n & (1 << index);

	if (index >= 8 * (sizeof(unsigned long int) - 1))
		return (-1);

	if (bit == 0)
		return (0);
	return (1);
}	
