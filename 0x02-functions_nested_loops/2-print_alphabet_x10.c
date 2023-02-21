#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 */
void print_alphabet_x10(void)
{
	char a;
	int n = 0;

	while (n < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}
