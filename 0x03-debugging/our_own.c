#include <stdio.h>

int print_largest(int a, int b, int c);

int main()
{
	print_largest(73, 1000, 12);
        print_largest(189, 90, 200);
        print_largest(100, 90, 12);
        print_largest(73, 90, 500);
        print_largest(73, 50, 12);
        print_largest(73, 70, 76);
        print_largest(900, 200, 1000);

	return 0;	
}

int print_largest(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a))
	{
		largest = b;
	}
	else if ((c > b && b > a) || (c > a && a > b))
	{
		largest = c;
	}
	printf("\nThe largest number among %d, %d, and %d is: %d\n", a, b, c, largest );

	return (0);
}
