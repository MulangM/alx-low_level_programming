#include "main.h"
#include "_putchars.c"
/**
 * print_numbers- prints 0-9.
 * Return: 0, (SUCCESS).
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
