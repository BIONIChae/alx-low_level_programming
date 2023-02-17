#include <stdio.h>
/**
 * main - base16 numbers in lowercase
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
