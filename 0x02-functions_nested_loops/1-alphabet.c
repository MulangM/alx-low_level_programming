#include "main.h"
#include "_putchar.c"

/**
 * main - Entry Point.
 * Description: Prints _putchar
 * Return: Always 0. (SUCCESS)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}