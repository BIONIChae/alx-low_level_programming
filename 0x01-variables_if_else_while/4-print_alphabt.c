#include<stdio.h>
#include <ctype.h>

/**
 * main - print letters in lowercase, except q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'q' && letter == 'e')
		{
			continue;
		}
		else
		{
			putchar(letter);
		}
	putchar('\n');
	return (0);
}
