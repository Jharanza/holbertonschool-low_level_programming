#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Returns an array of chars
 *
 * @size: The size of the array
 *
 * @c: The character in the array
 *
 * Return: An array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char*)malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
