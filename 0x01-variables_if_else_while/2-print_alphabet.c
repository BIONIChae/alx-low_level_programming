#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

/**
 * main - printts alphabets in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
