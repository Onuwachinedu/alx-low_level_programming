#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - this function prints a structure "struct dog"
 *
 * @d: The structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: nil\n");
		else
			printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
