#include "main.h"

/**
 * _puts_recursion- prints a line using recursion.
 * @s: the string to be printed.
 * Return: NOTHING for void function.
 */

void _puts_recursion(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}
	_putchar('\n');
}
