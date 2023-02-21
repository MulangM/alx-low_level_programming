#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: The parameter to be checked.
 * Description: Divide n/10 and return remainder.
 * Return: Alaways 0,
 */

int print_last_digit(int a)
{
	int rem = (a % 10);

	_putchar(rem);

	return (rem);
}

