#include "main.h"

/**
 * get_bit - Evaluates the value of a bit at a given index.
 * @n: The num of the bit we want to extract.
 * @index: The index of the bit we want to get.
 *
 * Return: Value of the bit / -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masked_bit = 1 << index;
	int bit = (n & masked_bit);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (bit == 0)
		return (0);
	return (1);
}
