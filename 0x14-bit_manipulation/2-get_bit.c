#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: the number containing the bit.
 * @index: the bit to index
 * Return: the bit value, -1 in case of error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
