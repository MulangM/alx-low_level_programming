#include "main.h"
#include <stdio.h>

/**
 * main- entry point.
 * Description: Prints the number of argments passed to it.
 * @argc: number of arguments passed.
 * @argv: The string arguments passed.
 * Return: argc.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
