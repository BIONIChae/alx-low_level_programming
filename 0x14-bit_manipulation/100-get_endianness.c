#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big endian, return 0. Else, 1.
 */
int get_endianness(void)
{
	char *x_endian = (char *)&i;
	int i = 1;

	if (*x_endian)
		return (1);
	return (0);

}
