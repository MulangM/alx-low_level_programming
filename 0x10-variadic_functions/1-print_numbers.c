#include "variadic_functions.h"

/**
 * print_numbers- a function that prints numbers
 * followed by a new line.
 * @separator: This is the seperator.
 * @n: The number of arguments.
 * Return: Nothing for a void function:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");

	va_end(args);
}
