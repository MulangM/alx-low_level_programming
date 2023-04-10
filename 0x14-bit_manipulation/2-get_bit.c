#include "main.h"

/**
 * get_bit- a function that returns the value of
 * a bit at a given index.
 * @n: The integer number.
 * @index: The psition of the bit of the bit we want to get.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return(-1);

	if ((n & (1 << index)) == 0)
		return 0;
	return (1);
}
