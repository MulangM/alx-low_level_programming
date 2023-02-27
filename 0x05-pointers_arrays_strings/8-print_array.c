#include "main.h"
/**
 * print_array - print elements of an array.
 * @n: number of elements (limit).
 * @a: pointer to the array.
 */

void print_array(int *a, int n)
{
	int i, j = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (j < n - 1)
		{
			j++;
			printf(", ");
		}
	}
	printf("\n");
}
