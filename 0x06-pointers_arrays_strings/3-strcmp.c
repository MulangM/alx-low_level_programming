#include "main.h"

/**
 * _strcmp - compare strings.
 * @s1: string 1 parameter for comparison.
 * @s2: string 2 parameter for comparison.
 * Return: REsult <0, >0, ==0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result =  s1[i] - s2[i];
			break;
		}
		else
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
