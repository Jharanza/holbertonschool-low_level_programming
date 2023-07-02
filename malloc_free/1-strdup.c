#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: pointer of the string
 *
 * Return: The poienter to a nwe allocated space or NULL
 *
 */

char *_strdup(char *str)
{
	int i, j;
	char *st_r;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 1;

	while (str[i] != '\0')
	{
		i++;
	}

	st_r = malloc((sizeof(char) * i) + 1);

	if (st_r == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < i)
	{
		st_r[j] = str[j];
		j++;
	}

	st_r[j] = '\0';

	return (st_r);
}
