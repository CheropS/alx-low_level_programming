#include <stdio.h>

/**
 * main - prints all sngle digit numbers in the base of 10
 * followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
