#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Name of the function
 *
 * @name: name of the dog being created
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	int i, lname, lowner;

	puppy = malloc(sizeof(*puppy));
	if (puppy == NULL || !(name) || !(owner))
	{
		free(puppy);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++);

	for (lowner = 0; owner[lowner]; lowner++);
	
	puppy->name = malloc(lname + 1);
	puppy->owner = malloc(lowner + 1);

	if (!(puppy->name) || !(puppy->owner))
	{
		free(puppy->owner);
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		puppy->name[i] = name[i];
	puppy->name[i] = '\0';

	puppy->age = age;

	for (i = 0; i < lowner; i++)
		puppy->owner[i] = owner[i];
	puppy->owner[i] = '\0';

	return (puppy);
}
