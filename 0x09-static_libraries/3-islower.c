#include "main.h"

/**
 * _islower - Checks if a cahracter is lowercase.
 * Description: Still using lower _putchar.
 * @c: The parameter to be checked.
 * Return: Alaways 1 for lowercase cahracter 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
