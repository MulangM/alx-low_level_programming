#include "main.h"

/**
 * _pow_recursion- function that returns the power of a number.
 * @x: the number whose power we want.
 * @y: the power to which we raise x.
 * Return: The power of x.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
