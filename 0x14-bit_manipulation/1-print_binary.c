#include "main.h"

/**
 * print_binary - Prints the binary rep of a num.
 * @n: The number.
 */
void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		_putchar((n & 1) ? '1' : '0');
		n >>= 1;
	}
}
