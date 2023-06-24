#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 != 0 && n % 3 != 0 && n % 5 != 0)
		{
			printf("%d ", n);
		}
		else
		{
			if (n % 15 == 0)
			{
				printf("FizzBuzz");
				putchar(32);
			}
			else if (n % 3 == 0)
			{
				printf("Fizz");
				putchar(32);
			}
			else if (n % 5 == 0)
			{
				printf("Buzz");
				if (n != 100)
					putchar(32);
			}
		}
	}
	printf("\n");
	return (0);
}
