#include <stdio.h>
#include <ctype.h>
/**
 * main - prints single digit numbers
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
