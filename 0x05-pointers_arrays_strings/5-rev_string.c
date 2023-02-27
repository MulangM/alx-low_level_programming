#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the string pointer.
 * Return: NOTHING (void function)
 */

void rev_string(char *s)
{
	int i, counter = 0;
	char rev = s[0];
	
	while (s[counter] != '\0')
		counter++;

	for (i= 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
