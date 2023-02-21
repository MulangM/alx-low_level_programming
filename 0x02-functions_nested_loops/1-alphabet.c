#include "main.h"

/**
 * print_alphabet - A function for the alphabet.
 * Description: Prints _putchar
 * Return: Always void  (SUCCESS)
 */

void print_alphabet(void)
{	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
