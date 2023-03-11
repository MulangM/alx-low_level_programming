#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main- prints the product of arguments.
 * @argc: Number of arguments.
 * @argv: The string parameters passed.
 * Return: 0 For Success, I for Failure (Error).
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
