#include "main.h"

/**
 * print_triangle - Prints a triangle using '#'.
 * @size:  The size of the triangle.
 */
void print_triangle(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (w = size - h; w > 0; w--)
				_putchar(' ');

			for (w = 0; w < h; w++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
