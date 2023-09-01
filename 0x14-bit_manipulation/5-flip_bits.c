#include "main.h"

/**
 * flip_bits - a function for counting the number of bits
 * that would need to be flipped to transform one number
 * to another.
 *
 * @n: the first number
 * @m: the second number.
 *
 * - looks at the code
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cate = n ^ m;
	unsigned int count = 0;

	while (cate)
	{
		if (cate & 1ul)
			count++;
		cate = cate >> 1;
	}
	return (count);
}
