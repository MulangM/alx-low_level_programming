#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: The parameter to be checked.
 * Description: Divide n/10 and return remainder.
 * Return: Alaways 0,
 */

int print_last_digit(int a)
{
	int rem;

	rem = (a % 10);

	if (rem < 0)
	{
		rem = (-1 * rem);
	}

	_putchar(rem + '0');
	return (rem);
}
