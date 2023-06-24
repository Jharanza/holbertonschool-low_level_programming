#include "main.h"

/**
 * _isdigit - Check if a vairable is a digit
 *
 * @c: variable to check
 *
 * Return: 1 if c is a digit, 0 in any another way
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
