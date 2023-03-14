#include "main.h"

/**
 * create_array- cretaes an array of chars.
 * Description: Fill it with (initialize) specific char c.
 * @size: size of the array.
 * @c: the initializing char.
 * Return: the initializing char.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(c));
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;

		while (position < size)
		{
			*(ptr + position) = c;
			position++;
		}
	}
	return (ptr);
}
