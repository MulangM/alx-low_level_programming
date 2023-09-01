#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the number containing the bit value to be indexed.
 * @index: The index of the bit to be set.
 * Return: 1 for Success, -1 otherwise (for error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));

}
