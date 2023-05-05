#include "main.h"

/**
 * flip_bits - Prints the num of bits needed
 *		to traverse from one num to another.
 * @n: First num.
 * @m: Next num.
 *
 * Return: Number of bits needed to flip from one num to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;
	unsigned long int nums_XOR = n ^ m;

	while (nums_XOR)
	{
		result += nums_XOR & 1;
		nums_XOR >>= 1;
	}
	return (result);
}
