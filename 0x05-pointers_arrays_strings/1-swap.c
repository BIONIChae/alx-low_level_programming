#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 */
void swap_int(int *a, int *b)
{
	int temp_storage;

	temp_storage = *a;
	*a = *b;
	*b = temp_storage;
}
