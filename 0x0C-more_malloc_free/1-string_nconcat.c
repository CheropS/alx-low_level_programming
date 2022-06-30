#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, base;

	if (s1 == NULL)
		s1 = "";

	for (base = 0; s1[base]; base++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (base = 0; s1[base]; base++)
		concat[len++] = s1[base];

	for (base = 0; s2[base] && base < n; base++)
		concat[len++] = s2[base];

	concat[len] = '\0';

	return (concat);
}
