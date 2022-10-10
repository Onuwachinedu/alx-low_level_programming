#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef of the struct dog
 */
typedef struct dog dog_t;
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
