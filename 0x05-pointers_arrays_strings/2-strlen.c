#include "main.h"
#include "_putchar.c"

/**
 *  _strlen - returns lenth of a string.
 *  @s: parameter (string whose lenth we want)
 *  Return: Alwys 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);

	return (0);
}

