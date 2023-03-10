#include "main.h"
#include <string.h>

/**
 * _puts_recursion- prints a line using recursion.
 * @s: the string to be printed.
 * Return: NOTHING for void function.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
