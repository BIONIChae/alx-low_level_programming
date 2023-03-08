#include "main.h"

/**
 * _sqrt - checks square root of a number.
 * @a: the number.
 * @b: the iterator.
 *
 * Return: The sqrt of @a / -1 if not a natural number.
 */
int _sqrt(int a, int b)
{
	int square = a * a;

	if (square == b)
		return (a);
	if (square > b)
		return (-1);
	return (_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @n: The number.
 *
 * Return: If n does not have a natural square root; return -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
