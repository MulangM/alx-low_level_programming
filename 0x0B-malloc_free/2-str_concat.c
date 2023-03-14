#include "main.h"

/**
 * _strlen- count the array elements.
 * @s: the string whose size we seek.
 * Return: size of the array.
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat- Create memory and then store s1 and s2 in it.
 * @s1: string one to be concatinated.
 * @s2: string two for concatination.
 * Return: the pointer to concatinated s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int size, i, j;

	/*if the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*total_size = size(s1) + size(s2)*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*use total_size in malloc to create memory*/
	dst = (char *) malloc(size * (int) sizeof(char));

	if (dst == 0)
		return (NULL);

	/*Copy s1 and s2 to dst*/
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(dst + i) = *(s1 + i);
		i++;
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}

	return (dst);
}
