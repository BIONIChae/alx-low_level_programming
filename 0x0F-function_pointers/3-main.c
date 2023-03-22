#include "3-calc.h"

/**
 * main - Use atoi to convert args to int.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n1, n2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = func(n1, n2);
	printf("%d\n", i);
	return (0);
}
