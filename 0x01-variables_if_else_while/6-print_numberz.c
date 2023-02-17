#include <stdio.h>
/**
 * main - Using putchar only to print numbers
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
	putchar(i + '0');
putchar('\n');
return (0);
}
