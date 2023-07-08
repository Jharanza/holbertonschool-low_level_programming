#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: Dog struct
 *
 * Return: Void
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", "(nill)");
		}

		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("age: %d\n", 0);
		}

		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", "(nill)");
		}
	}
}