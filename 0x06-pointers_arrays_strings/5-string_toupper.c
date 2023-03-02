#include "main.h"

/**
 * string_toupper- change the characters of a string to upper.
 * @arr: the string to be 'uppered
 * Return: the array to be converted.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' &&  a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}

