#include "main.h"

/**
 * _strncat- a function that concatinates wiith a certain number
 * of parameteres n.
 * @dest: destination string.
 * @src: source string.
 * @n: included parameter.
 * Return: concatinated (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (k < n && dest[j] != '\0')
	{
		dest[i] = src[j];
		k++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
