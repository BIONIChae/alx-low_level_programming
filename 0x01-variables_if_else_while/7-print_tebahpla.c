#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
