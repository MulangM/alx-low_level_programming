#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * Description. Startt at s[0], print a new line.
 * @str: string to be printed.
 * Return: NOTHING (Void Function).
 */

void puts2(char *str)
{
	int i = 0, count = 0;
	char *arry = str;
	int arry_len = 0;


	while (*arry != '\0')
	{
		count++;
		arry++;
	}
	arry_len = count - 1;
	for (; i <= arry_len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
