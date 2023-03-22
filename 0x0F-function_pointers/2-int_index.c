#include "function_pointers.h"

/**
 * int_index- a funtion that searches for integer.
 * @array: the array containing a possible integer.
 * @size: the size of the array.
 * @cmp: The function pointer.
 * Return: Index of the first element for which
 * the cmp function does not return 0, 0r -1 if no match
 * is found negative integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
