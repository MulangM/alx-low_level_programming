#include "main.h"
/**
 * times_table - function that prints 9 * 9 multip. table
 * Return: 4 * 4 table.
 */
void times_table(void)
{
	int i, j = 0;
	int mult = i * j;

	while (j <= 9)
	{
		for (i = 0; i < 9; i++)
		{
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
		j++;
	}
}
