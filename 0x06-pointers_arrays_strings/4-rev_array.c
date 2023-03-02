#include "main.h"

/**
 * reverse_array- Reverse the numbers in an array.
 * @a: array with elements.
 * @n: number of elements.
 * Return: NOTHING (Void function).
 */

void reverse_array(int *a, int n)
{	
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;

	}
}
/*
 * swap- swaps two elements
 * @c: fisrt parameter
 * @d: second parameter
 * Return: Always 0.
 
	int swap(int *c, int *d)
	{
		int temp;

		c = temp;
		d = c;
		c = d;
		return (0);
	}

	while (i < n)
	{
		swap(a[i], a[n - i]);
		i++;
	}
*/

