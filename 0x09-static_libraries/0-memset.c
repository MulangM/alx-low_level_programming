#include "main.h"

/**
 * _memset- fills memory with a constant type.
 * @s: parameter.
 * @b: second parameter.
 * @n: Third parameter.
 * Return: Change array with new bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

