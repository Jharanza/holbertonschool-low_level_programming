#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Print letters from a to z and A to Z
 * Return: Always (Succes)
 *
 */


int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	putchar(n);

	for (n = 'A'; n <= 'Z'; n++)
	putchar(n);

	putchar('\n');

	return (0);

}
