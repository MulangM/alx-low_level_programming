#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: The parameter to be checked.
 * Description: Divide n/10 and return remainder.
 * Return: Alaways 0,
 */

int print_last_digit(int a)
{
	char rem;
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (a % 10 == char i)
		{
			rem = char i;
			_putchar(rem);
			return (a % 10);
		}
		else if ((a * -1) % 10 == char i)
		{
			int rem = char i;
			_putchar(rem);
			return (rem);
		}
		return (0);
	}
}
