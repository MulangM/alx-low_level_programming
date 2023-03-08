#include "main.h"

/**
 * factorial- function to find the factorial of a number n.
 * @n: the number whose factorial is to be determined.
 * Return: The factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
