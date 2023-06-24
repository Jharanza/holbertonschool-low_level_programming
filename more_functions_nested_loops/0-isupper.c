#include "main.h"

/**
 * _isupper - Check if  a letter is a uppercase
 *
 * @c: variable to check
 *
 * Return: 1 if c is uppercase, 0 in any another way
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
