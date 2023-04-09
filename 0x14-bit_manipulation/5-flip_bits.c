#include "main.h"

/**
 * flip_bits - Prints the num of bits to flip
 *		to get from one num to another.
 * @n: First integer.
 * @m: Next integer.
 *
 * Return: Number of bits needed to flip to next int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int excl_OR = n ^ m;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		count += excl_OR & 1;
		excl_OR >>= 1;
	}
	return (count);
}
