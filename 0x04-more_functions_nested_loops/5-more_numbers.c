#include "main.h"

/**
 * more_numbers - prints 1-14 10 times.
 * Description: prints lines after eache iteration.
 * Return: 0. (SUCCESS);
 */

void more_numbers(void)
{
	int c, i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14, c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
		i++;
	}
}
