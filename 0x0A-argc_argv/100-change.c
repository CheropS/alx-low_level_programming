#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * @argc: count arguments
 * @argv: arguments
 * Return: error 1 otherwise 0.
 */

int main(int argc, int char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 10)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	print("%d\n", coins);

	return (0);
}

