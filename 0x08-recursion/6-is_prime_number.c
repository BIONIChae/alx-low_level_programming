#include "main.h"

/**
 * checkif_prime - Checks if an integer is prime.
 * @num: The number.
 * @i: The iterator.
 *
 * Return: Prime number, 1. 0 otherwise.
 */
int checkif_prime(int i, int num)
{
	if (num < 2 || num % i == 0)
		return (0);
	else if (i > num / 2)
		return (1);
	else
		return (checkif_prime(i + 1, num));
}

/**
 * is_prime_number - Returns 1 if the integer is a prime number.
 * @n: The number.
 *
 * Return: 1 if prime number. 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checkif_prime(2, n));
}
