#include "main.h"

/**
 * _strchr - a function that locates characters in a string
 * @s: the string
 * @c: located characters.
 * Return: The characters located.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
