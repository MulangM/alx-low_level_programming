#include "main.h"

/**
 * _isdigit - checks if c is a digit.
 * @c: the parameter to be checked.
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

