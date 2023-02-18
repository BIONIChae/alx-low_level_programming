#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 1; y <= 8; y++)
		{
			for (z = 2; z <= 9; z++)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');

					if (x == 7 && y == 8 && z == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
