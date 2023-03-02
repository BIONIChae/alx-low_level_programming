#include "main.h"

/**
 * reverse_array -  Reverses the content of an array of integers.
 * @a: The array.
 * @n: Number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
