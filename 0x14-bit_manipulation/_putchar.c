#include <unistd.h>

/**
 * _putchar - program that writes  character c to stdout.
 * @c: The character to print
 *
 * Return: ORETURN 1 onp.
 * On error, RETURN -1. Error no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
