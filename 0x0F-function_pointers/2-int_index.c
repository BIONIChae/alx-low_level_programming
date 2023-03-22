#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: Pointer to compare values.
 *
 * Return: Index 0 for which the cmp
 *	function does not return 0.
 *	Return -1 if no elements match.
 *	If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);

}

