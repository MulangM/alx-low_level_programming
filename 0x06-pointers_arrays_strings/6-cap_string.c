#include "main.h"

/**
 * char *cap_string- Capitalizes a string.
 * @a: the string to be capitalized.
 * Return: a. The capitalized string.
 */

char *cap_string(char *a)
{
	int i = 0;
	int j = 0;
	char b[] = {9, 10, 3, 39, 95, 46, 32, 33, 34, 40, 41, 59, 125, 123, 44};

	while (a[i] != '\0')
	{
		for (j = 0; j < 15; j++)
		{
			if (a[i - 1] == b[j] && a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
		i++;
	}
	return (a);
}
