#include "main.h"

/**
 * _strcpy - Copy a string
 *
 * @dest. pointer to destination
 *
 * @src: pointer to given value
 *
 * Return: A char value
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
