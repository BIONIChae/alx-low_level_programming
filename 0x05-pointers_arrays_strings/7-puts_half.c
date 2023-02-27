#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int i = 0, length = 0, j;

	while (str[i++])
		length++;

	if ((length % 2) == 1)
		j = (length / 2) + 1;
	else
		j = length / 2;

	for (i = j; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
