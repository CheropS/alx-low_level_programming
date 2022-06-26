#include <stdio.h>
#include "main.h"


/**
 * main - prints the number of arguments passed into it
 * @argc: count argument
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
		printf("%s\n", argv[w]);

	return (0);
}
