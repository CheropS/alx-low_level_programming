#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and then uppercase
 * followed by a new line
 * Return: 0 if successful.
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
