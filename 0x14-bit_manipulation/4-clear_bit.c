#include "main.h"

/**
 * clear_bit- function that sets the value of a bit to 0
 * at a given index.
 * @n: The number whose bit we want to set to 0.
 * @index: the position of the bit to be changed to 0.);
 * Return: always 1 for success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
