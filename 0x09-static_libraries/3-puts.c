#include "main.h"

/**
 *  _puts - prints a string followed by a new line.
 *  Description: Uses _putchar.
 *  @str: parameter pointer to string location.
 *  Return: NOTHNG (Void Function).
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
