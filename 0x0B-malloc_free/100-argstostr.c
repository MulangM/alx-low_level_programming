#include "main.h"

/**
 * argstostr- a function that concatinates all arguments
 * @ac: first argument.
 * @av: second argument.
 * Return: concatinated arguments.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count, a, b, c;

	count = a = b = c = 0;

	if (ac == 0 || av == NULL)
		return (0);

	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;

	str = malloc(sizeof(char) * count);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
