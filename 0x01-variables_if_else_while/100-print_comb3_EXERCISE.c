#include <stdio.h>
/**
 * main - Prints Combinations of two different digits.
 * Return: Always 0, (SUCCESS)
 */
int main(void)
{
int i, j;
for (i = 0; i < 9 ; i++)
{
for (j = 1; j <= 9; j++)
{
if (i < j)
{
putchar(i + '0');
putchar(j + '0');
if (i !=  8)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
