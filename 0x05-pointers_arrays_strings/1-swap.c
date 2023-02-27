#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: parameter. location of first integer.
 * @b: parameter. location of second integer.
 * Return - NOTHING (void function)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
