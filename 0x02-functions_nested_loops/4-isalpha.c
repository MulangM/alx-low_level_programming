#include "main.h"

/**
 * _isalpha - Checks if c is an alphabet lower or uppercase.
 * Description: Still using lower _putchar.
 * @c: The parameter to be checked.
 * Return: Alaways 1 for lower/upper case char, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
