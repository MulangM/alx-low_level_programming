#include "main.h"

/**
 * get_endianness - this is a function that returns the endeaness
 * Return: 0 for big endian, 1 otherwise.
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
