#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - prints sum of numbers.
 * @argc: number of arguments.
 * @argv: the string arguments.
 * Return: 0 for success, 1 for failure.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		e = argv[i];
		for (k = 0; k < strlen(e); k++)
		{
			if (e[k] < 48 || e[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(e);
		e++;
	}
	printf("%d\n", sum);
	}
	else
	{
		printf ("0\n");
	}
	return (0);
}
