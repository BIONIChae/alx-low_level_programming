#include "main.h"

/**
 * _print_rev_recursion - Reverses a string.
 * @s: The string.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
