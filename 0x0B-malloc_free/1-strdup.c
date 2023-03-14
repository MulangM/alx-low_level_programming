#include "main.h"

/**
 * _strlen- count array
 * @s: the array of elemnts.
 * Return: 1.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy- copy arrays.
 * @dest: destination array.
 * @src: array of elemnts.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup- array that prints a string.
 * Description: This function creates memory 
 * Then copies a string into that memory.
 * @str: string to allocate memory and copy.
 * Return: the new string.
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	size = _strlen(str) + 1;

	if (str == 0)
		return (NULL);
	dst = (char *)malloc(size *sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	else
	{
		_strcpy(dst, str);
	}
	return (dst);
}
