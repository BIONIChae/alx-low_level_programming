#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100,
 *	for multiples of 3 it prints Fizz,
 *	for multiples of 5 it prints Buzz,
 *	for multiples of 3 & 5 it prints FizzBuzz.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
		printf(" ");
		}
	}
	printf("\n");

	return (0);
}
