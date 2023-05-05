#include "main.h"

/**
 * print_binary - Prints the binary rep of a num.
 * @n: The number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits;

	bits = (unsigned long int) 1 << (sizeof(unsigned long int) * 8 - 1);
	while (bits > 0)
	{
		bits >>= 1;
		_putchar((n & bits) ? '1' : '0');
	}
}
