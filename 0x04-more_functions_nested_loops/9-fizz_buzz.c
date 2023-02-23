#include <stdio.h>

/**
 * main - entry point
 * Description : prints buzz and fuzz and some numbers.
 * Return: 0 always.
 */

int main(void)
{
	int n = 100;
	int i, j = 1;

	for (i = 1; i <= n; i++)
	{
		if (j < i)
		{
			printf(" ");
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
