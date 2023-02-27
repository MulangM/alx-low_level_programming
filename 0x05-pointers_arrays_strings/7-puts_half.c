#include "main.h"

/**
 * puts_half - prints half of the string.
 * Description: follows with a straight line.
 * @str: the parameter string we need to print half of.
 * Return: NOTHING. Void Function.
 */

void puts_half(char *str)
{
	int n = 0, i = 0, count = 0;
	char *arry = str;

	while (*arry != '\0')
	{
		arry++;
		count++;
	}
	count--;

	if (count % 2 != 0)
	{
		n = (count - 1) / 2;
	}

	else
	{
		count = n / 2;
	}

	for (; i >= n; i++)
	{
		_putchar(arry[i]);
	}
	_putchar('\n');
}
