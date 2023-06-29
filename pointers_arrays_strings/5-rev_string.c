#include "main.h"

/**
 * rev_string - Print a string rigth and  reverse
 *
 * @s: String to be reversed
 *
 * Return: void
 *
 */

void rev_string(char *s)
{

	int c = 0;
	int d = 0;
	char change;

	while (s[d++])
	{
		c++;
	}

	for (d = c - 1; d >= c / 2; d--)
	{
		change = s[d];
		s[d] = s[c - d - 1];
		s[c - d - 1] = change;
	}
}
