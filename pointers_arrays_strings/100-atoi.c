#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: String to be converted
 *
 * Return: a value int
 *
 */

int _atoi(char *s)
{
	int a = 0, b = 1, c = 0;
	unsigned int ui = 0;

	while (s[a] != '\0')
	{
		if (s[a] == 45)
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			ui = (ui * 10) + (s[a] - '0');
			a++;
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}

	ui *= b;
	return (ui);
}
