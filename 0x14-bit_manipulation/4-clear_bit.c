#include "main.h"

/**
 * clear_bit - Sets a bit to 0.
 * @n: Pointer to the value of a bit.
 * @index: The index of the bit to be set.
 *
 * Return:  1 on success, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
