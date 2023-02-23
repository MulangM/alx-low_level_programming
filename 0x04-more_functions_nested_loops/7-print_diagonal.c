#include "main.h"

/**
 * print_diagonal- prints diagonal on a line
 * @n: number of times \ should be drawn.
 * Return: always 0. (SUCCESS)
 */

void print_diagonal(int n)
{
	int i = 0,  c;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		do {
			for (c = 0; c <= i; c++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		} while (i < n);
	}
}
