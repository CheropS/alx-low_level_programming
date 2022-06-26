
#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs that adds positive numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0, error return 1.
 */

int main(int argc, char *argv[])
{
	int a, digit, sum = 0;

	for (a = 1; a < argc; a++)
	{

		for (digit = 0; argv[a][digit]; digit++)
		{
			if (argv[a][digit] < '0' || argv[a][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
}
