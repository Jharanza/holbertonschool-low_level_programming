#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints a part of a string
 *
 * @str: The variable to be checked
 *
 * Return: void
 *
 */

void puts_half(char *str)
{
	int i;
	int j;

	j = strlen(str);

	if (j % 2 == 0)
	{
		i = j / 2;
	}
	else
	{
		i = (j - 1) / 2;
		i++;
	}

	for (; i < j; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
