#include "variadic_functions.h"

/**
 * print_strings- a variadic function that
 * prints string arguments followed by sepeartor.
 * @separator: the string (separator).
 * @n: The number of string arguments.
 * Return: NOTHING for a void function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (separator)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
