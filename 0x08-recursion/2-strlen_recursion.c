#include "main.h"

/**
 * _strlen_recursion- count number of characters in a string.
 * @s: the string whose lenth we want to establish.
 * Return: lenth of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
