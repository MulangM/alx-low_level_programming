#include "main.h"

/**
 * print_rev - prints string in reverse.
 * Description: followed by a straight line.
 * @s: pointer to the String to be reversed.
 * Return: NOTHING (void fnction)
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
