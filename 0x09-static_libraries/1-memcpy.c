#include "main.h"

/**
 * _memcpy- a function that copys memory area.
 * @dest: parameter 1.
 * @src: parameter 2.
 * @n: parameter 3.
 * Return: Copied memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
