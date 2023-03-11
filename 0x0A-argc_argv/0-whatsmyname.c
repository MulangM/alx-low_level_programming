#include "main.h"
#include "_putchar.c"

/**
 * main- the function that prints its name. use argv and argc.
 * @argc: the count of string aruments.
 * @argv: The string arguments.
 * Return: Always 0, SUCCESS.
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	/*	myname = argv[0]; */

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\0');
	_putchar('\n');

	return (0);
}
