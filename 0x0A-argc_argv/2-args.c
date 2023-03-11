#include "main.h"
#include <stdio.h>

/**
 * main- a function that prints the values of passed parameters.
 * Description: HInt, use argv[i] for all i.
 * @argc: The Number of parameters.
 * @argv: The list of parameter strings.
 * Return: 0 for SUCCESS.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
