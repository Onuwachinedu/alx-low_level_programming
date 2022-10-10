#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name of the structure
 *
 * @name: first char variable
 * @age: float type variable
 * @owner: char variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
