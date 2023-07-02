#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: A concatenation of characters
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, lens1 = 0, lens2 = 0, lenTotal;
	char *str;

	if (s1 != NULL)
	{
		while (s1[a++] != '\0')
			lens1++;
	}
	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			lens2++;
	}

	lenTotal = lens1 + lens2;
	str = (char *)malloc(sizeof(char) * (lenTotal + 1));

	if (str == NULL)
		return (NULL);
	for (a = 0; a < lens1; a++)
		str[a] = s1[a];
	for (b = 0; b < lens2; b++, a++)
		str[a] = s2[b];

	str[lenTotal] = '\0';
	return (str);
}
