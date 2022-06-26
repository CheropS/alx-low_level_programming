#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 for success and 1 for error.
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
