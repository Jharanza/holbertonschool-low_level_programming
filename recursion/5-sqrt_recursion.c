#include "main.h"

/**
 * raiz - Return the square root
 *
 * @i: is the square root of n
 *
 * @n: numbert to find square root
 *
 * Return: The value of i
 *
 */

int raiz(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (raiz(i + 1, n));
}

/**
 * _sqrt_recursion - Return the square root of a number
 *
 * @n: number to obtain the square root
 *
 * Return: The square root of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else
	{
		return (raiz(0, n));
	}
}
