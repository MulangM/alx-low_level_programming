#include "function_pointers.h"

/**
 * print_name- A function that prints a name.
 * @name: the name to be printed
 * @f: The function pointer.
 * Return: Nothing for void pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
