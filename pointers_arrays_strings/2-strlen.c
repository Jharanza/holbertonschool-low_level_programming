#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to be check
 *
 * Return: a int value
 *
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s++)
	{
		x++;
	}
	return (x);
}
