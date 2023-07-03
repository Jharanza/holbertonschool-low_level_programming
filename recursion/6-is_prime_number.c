#include "main.h"

/**
 * prime_aux - check if a number is prime
 *
 * @i: auxiliar number
 *
 * @n: number to be checked
 *
 * Return 0 or 1
 */

int prime_aux(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i == 0) && i > 0)
	{
		return (0);
	}

	return (prime_aux(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number to be checked
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_aux(n, n - 1));
}
