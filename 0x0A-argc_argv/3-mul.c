#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if recieves 2 args, 1 if it does not.
 */
int main(int argc, char *argv[])
{
	int i, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	i = num1 * num2;

	printf("%d\n", i);
	return (0);
}
