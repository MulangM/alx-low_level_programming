#include "main.h"

/**
 * binary_to_uint- a function that takes a binary number
 * and returns its integer iquivalent.
 * @b: The binary number to be converted to integer (STRINNG)
 * Return: Unassigned integer after conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int d;

	j = d = 0;
	if (!b)
	{
		return (0);
	}
	for (; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		d = 2 * d + (b[j] - '0');
	}
	return (d);
}

