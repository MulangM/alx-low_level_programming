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
	
	if (n < 0)
	{
		i = 45;
		_putchar(i);
		return (1);
	}
	else if (n == 0)
	{
		i = 48;
		_putchar(i);
		return (0);
	}
	else if (n > 0)
	{
		i = 43;
		_putchar(i);
		return (1);
	}
	return (0);
}
