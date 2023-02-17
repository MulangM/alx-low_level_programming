#include <stdio.h>
/**
 * main - Lower case Letters in reverse
 * Return: 0 (SCCESS)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
putchar('\n');
return (0);
}
