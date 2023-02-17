#include <stdio.h>
/**
 * main - printing combinations.
 * Return: Always 0 (SUCCESS).
 */
int main(void)
{
int num = 0;
while (num < 10)
	{
	putchar(num + '0');
	putchar(',');
	putchar(' ');
	num++;
	}
putchar('\n');

return (0);
}
