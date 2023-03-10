#include "main.h"

/**
 * _abs - prints the the absolute value of a number.
 * @a: The parameter to be checked.
 * Description: Still using  _putchar.
 * Return: Alaways 0, otherwisw retuns abs(a).
 */

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);

	return (0);
}
