#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * @n: A pointer to the number of the bit we want to set.
 * @index: The index position of @n.
 *
 * Return: On error -1, else 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
