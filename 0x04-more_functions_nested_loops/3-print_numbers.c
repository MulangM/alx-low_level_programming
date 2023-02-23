#include "main.h"
#include "_putchars.c"
/**
 * print_numbers- prints 0-9.
 * Return: 0, (SUCCESS).
 */

void print_numbers(void)
{
	int c;

	for (c = 49; c <= 57; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
