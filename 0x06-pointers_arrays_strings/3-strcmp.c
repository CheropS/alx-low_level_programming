#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * s1: first integer
 * s2: second integer
 * Return: if str1 == str2, 0.
 */

int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
