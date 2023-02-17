#include<stdio.h>
#include <ctype.h>

/**
 *main - print letters, except q and e
 *
 *Return: 0 is successful
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
