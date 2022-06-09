#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - my entry point
 * Description: should print out positive or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);	
