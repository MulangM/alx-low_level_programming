#include "main.h"

/**
 * set_bit- A function that sets the value of a bit
 * to 1 at a given index.
 * @n: The number whose bit we want to set to 1 at given index.
 * @index: The index at which we want to set to 1.
 * Return: 0 for success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
