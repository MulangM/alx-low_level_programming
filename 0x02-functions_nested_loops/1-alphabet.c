#include "main.h"

/**
 * main - Entry Point.
 * Description: Prints _putchar
 * Return: Always 0. (SUCCESS)
 */

void print_alphabet(void)
{	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
