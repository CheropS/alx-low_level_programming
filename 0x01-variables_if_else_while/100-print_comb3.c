#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89
 * Description: double digits
 * return: 0 if successful
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
	for (ones = tens + 1; ones <= 9; ones++)
	{
	putchar(tens + '0')
	putchar(ones + '0');
	if (tens < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}

