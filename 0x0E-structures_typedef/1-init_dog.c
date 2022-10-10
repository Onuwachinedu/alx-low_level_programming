#include "dog.h"
#include <stdio.h>

/**
 * init_dog - this func initializes a variable of type struct dog
 *
 * @d: struct dog
 * @name: struct variable
 * @age: Another struct variable
 * @owner: The last struct variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
