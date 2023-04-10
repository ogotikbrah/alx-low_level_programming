#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */

int get_endianness(void)
{
	int a = 1;
	unsigned char *b = (unsigned char *)&a;

	return (*b == 0);
}
