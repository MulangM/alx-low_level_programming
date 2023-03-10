#include "main.h"

/**
 * _isdigit - checks if c is a digit.
 * @c: the parameter to be checked.
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
