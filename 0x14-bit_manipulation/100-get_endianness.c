#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big endian, return 0. Else, 1.
 */
int get_endianness(void)
{
	int i = 1;
	char *x_endian = (char *)&i;

	if (*x_endian)
		return (1);
	return (0);

}
