#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime factor
 * Return: always 0
 */

int main(void)
{
	int b;
	long num = 612852475143;

	for (b = (int) sqrt(num); b > 2; b++)
	{
		if (num % b == 0)
		{
		printf("%d\n", b);
			break;
	}
	return (0);
}

