#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet*10.
 * Description: prints new lines after each 'a' - 'z'
 * Return: void (SUCCES)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
