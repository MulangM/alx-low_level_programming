#include "main.h"

/**
 * _strncpy- function that works like the strcpy function in C.
 * @dest: destination of the string.
 * @src: source string.
 * @n: parameter.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n && src[i] != '0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
