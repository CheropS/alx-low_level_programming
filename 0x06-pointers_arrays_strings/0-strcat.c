#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; (dest[x + y] = *src++) != '\0'; y++)
	{
	}
	return (dest);
}

