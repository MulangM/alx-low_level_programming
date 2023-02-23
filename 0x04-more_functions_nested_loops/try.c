#include <stdio.h>

void more_numbers(void);

int main(void)
{
	more_numbers();

	return (0);
}

void more_numbers(void)
{
	int c; int i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			printf("%d", c);
		}

		printf("\n");
		i++;
	}
}
