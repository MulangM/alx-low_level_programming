#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The parameter to be checked.
 * Description: Still using  _putchar.
 * Return: Alaways 1 for +, 0 for 0, - for negative.
 */

int print_sign(int n)
{
	char i;
	char j;

	if (n < 0)
	{
		i = 45;
		j = 49;
		_putchar(i);
		_putchar(j);
	}
	else if (n == 0)
	{
		i = 48;
		j = 48;
		_putchar(i);
		_putchar(j);
	}
	else if (n > 0)
	{	i = 43;
		j = 49;
		_putchar(i);
		_putchar(j);
	}
	return (0);
}
