#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  Adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: If one of the number contains symbols, return 1. Else 0.
 */
int main(int argc, char *argv[])
{
	int result = 0, i, n;


	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (!isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[n]);
	}
	printf("%d\n", result);
	return (0);
}
