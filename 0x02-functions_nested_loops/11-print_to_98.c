#include "main.h"

/**
 * print_to_98 - print to 98 from any direction
 * Return 0, SUCCESS
 * @n: Parameter and starting point.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			if (n == 98)
				break;
		n--;
	} while (n > 98);

	}
	else if (n < 98)
	{
		do {
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			if (n == 98)
				break;
			n++;
		} while (n < 98);
	}
}
