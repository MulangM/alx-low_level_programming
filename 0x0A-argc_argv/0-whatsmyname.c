#include "main.h"
#include <stdio.h>

/**
 * main- the function that prints its name. use argv and argc.
 * @argc: the count of string aruments.
 * @argv: The string arguments.
 * Return: Always 0, SUCCESS.
 */

int main(int argc, char *argv[])
{
	(void)argc;


	printf("%s\n", argv[0]);
	return (0);
}
