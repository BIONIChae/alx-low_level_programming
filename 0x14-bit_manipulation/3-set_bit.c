#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * @n: A pointer to the value of the bit.
 * @index: The index of the bit to be set.
 *
 * Return: 1 on success, else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
