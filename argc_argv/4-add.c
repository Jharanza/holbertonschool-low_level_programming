#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - dds positive numbers
 *
 * @argc: The number of arguments
 *
 * @argv: An array
 *
 * Return: The result or 1 if are not digits
 */

int main(int argc, char *argv[])
{
	int i = 1;
	unsigned int j, sum = 0;
	char *s;

	if (argc > 1)
	{
		while (i < argc)
		{
			s = argv[i];

			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(s);
			s++;
			i++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
