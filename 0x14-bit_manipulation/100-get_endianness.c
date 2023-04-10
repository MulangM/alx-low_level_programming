#include "main.h"

/**
 * get_endianness- A function that checks the endianess
 * Return: 0 for big, 1 for small endianness.
 */

int get_endianness(void)
{
	int the_num = 1;
	char *endian = (char *)&the_num;

	if (*endian == 1)
		return (1);
	return (0);
}
