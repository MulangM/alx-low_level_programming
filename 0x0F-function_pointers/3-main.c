#include "3-calc.h"

/**
 * main- program that performs all the operations
 * in the other files.
 * @argc: number of arguments.
 * @argv: the array of arguments.
 * Return: Always 0 for Success.
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char operand;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(99);
	}
	operand = *argv[2];

	if ((operand == '/' || operand == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = function(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
