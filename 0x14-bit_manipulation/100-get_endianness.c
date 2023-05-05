#include "main.h"

/**
 * get_endianness - Evaluates the endianness.
 * Return: Big endian is 0, small endian is 1.
 */
int get_endianness(void)
{
	int val = 1;
	char *ptr = (char *)&val;

	return (*ptr);
}
