#include "main.h"

/**
 * _print_rev_recursion- reverses a string.
 * @s: the string to be recursively reversed.
 * Return: Nothing for a void function
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

