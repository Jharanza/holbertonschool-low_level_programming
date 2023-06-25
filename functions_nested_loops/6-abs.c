#include "main.h"

/**
 * _abs - print the absolute value of a number
 *
 * @n: Variable to check
 *
 * Return: a value int
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else
	{
		n = n;
	}
	return (n);
}
