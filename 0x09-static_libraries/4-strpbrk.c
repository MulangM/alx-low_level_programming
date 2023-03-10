#include "main.h"

/**
 * _strpbrk- searches a string for any set of bytes.
 * @s: the string.
 * @accept: the set of bytes.
 * Return: THe set of bytes searched.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');
}
