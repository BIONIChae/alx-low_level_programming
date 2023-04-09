#include "main.h"

/**
 * clear_bit - Sets value of a bit to a particular index.
 * @n: Pointer to the num whose bit is to be set.
 * @index: Index position where @n is stored.
 *
 * Return: On error -1, else 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
