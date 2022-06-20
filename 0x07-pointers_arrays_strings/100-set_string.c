#include "main.h"
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to change
 * @to: pointer to set
 * Return: always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
