#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
