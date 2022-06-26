#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
		printf("%s\n", argv[w]);

	return (0);
}
