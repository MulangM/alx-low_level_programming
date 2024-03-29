#include "function_pointers.h"

/**
 * array_iterator- executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the array to be executed.
 * @size: the siize of the array.
 * @action: The pointer to the function you need to use.
 * Return: Nothing for void function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
