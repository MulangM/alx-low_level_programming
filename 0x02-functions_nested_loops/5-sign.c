#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The parameter to be checked.
 * Description: Still using  _putchar.
 * Return: Alaways 1 for +, 0 for 0, - for negative.
 */

int print_sign(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (+1);

	return (0);
}
